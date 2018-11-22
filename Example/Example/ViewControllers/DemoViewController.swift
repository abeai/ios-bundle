import UIKit
import SalemoveSDK

class DemoViewController: UIViewController {
    @IBOutlet weak var engagementButton: UIButton!
    @IBOutlet weak var configurationButton: UIButton!

    private var statusViewController: EngagementStatusViewController?

    // MARK: System

    override func viewDidLoad() {
        super.viewDidLoad()
    }

    // MARK: Initialisation

    @IBAction func queueMessage(_ sender: Any) {
        configureInteractor(chatType: .async)
        showMessageComposer()
    }

    @IBAction func beginQueueing(_ sender: Any) {
        Salemove.sharedInstance.listQueues { [unowned self] queues, error in
            if let queueError = error {
                self.showError(message: queueError.reason)
            } else if let queues = queues {
                self.showQueueSelection(queues: queues)
            }
        }
    }
}

extension DemoViewController {
    fileprivate func showMessageComposer() {
        let inputController = UIAlertController(title: "Message", message: "Please specify", preferredStyle: .alert)
        inputController.addTextField { textfield in
            textfield.clearButtonMode = .whileEditing
            textfield.borderStyle = .roundedRect
        }

        let confirm = UIAlertAction(title: "Send", style: .default) { [unowned self] _ in
            if let message = inputController.textFields?.first?.text, !message.isEmpty {
                self.sendMessage(queueMessage: message)
            }
        }

        let cancel = UIAlertAction(title: "Cancel", style: .cancel, handler: nil)

        inputController.addAction(confirm)
        inputController.addAction(cancel)

        present(inputController, animated: true, completion: nil)
    }

    fileprivate func sendMessageToQueue(queueMessage: String, queue: Queue) {
        Salemove.sharedInstance.send(message: queueMessage, queueID: queue.id) { [unowned self] message, error in
            if let error = error {
                self.showError(message: error.reason)
            } else if let content = message {
                guard let controller = self.statusViewController else {
                    return
                }

                self.present(controller, animated: true) {
                    controller.receive(message: content)
                    controller.selectQueue(queueID: queue.id)
                }
            }
        }
    }

    fileprivate func queueForAnEngagemement(queue: Queue) {
        Salemove.sharedInstance.queueForEngagement(queueID: queue.id) { [unowned self] queueTicket, error in
            if let queueError = error {
                self.showError(message: queueError.reason)
            } else if let ticket = queueTicket {
                guard let controller = self.statusViewController else {
                    return
                }

                controller.queueTicket = ticket
                self.present(controller, animated: true)
            }
        }
    }

    fileprivate func showQueueSelection(queues: [Queue], queueMessage: String? = nil, chatType: ChatType = .sync) {
        configureInteractor(chatType: chatType)

        selectQueue(queues: queues) { queue in
            if let queueMessage = queueMessage {
                self.sendMessageToQueue(queueMessage: queueMessage, queue: queue)
            } else {
                self.queueForAnEngagemement(queue:queue)
            }
        }
    }

    fileprivate func selectQueue(queues: [Queue], completion: @escaping (Queue) -> Void) {
        let controller = UIAlertController(title: "Queues", message: "Please select", preferredStyle: .actionSheet)

        for queue in queues {
            let action = UIAlertAction(title: queue.name, style: .default) { _ in
                completion(queue)
            }
            controller.addAction(action)
        }
        let cancel = UIAlertAction(title: "Cancel", style: .cancel, handler: nil)
        controller.addAction(cancel)
        present(controller, animated: true, completion: nil)
    }

    fileprivate func sendMessage(queueMessage: String) {
        Salemove.sharedInstance.listQueues { [unowned self] queues, error in
            if let queueError = error {
                self.showError(message: queueError.reason)
            } else if let queues = queues {
                self.showQueueSelection(queues: queues, queueMessage: queueMessage, chatType: .async)
            }
        }
    }

    fileprivate func configureInteractor(chatType: ChatType) {
        let interactor = EngagementStatusViewController.initStoryboardInstance()
        interactor.chatType = chatType
        Salemove.sharedInstance.configure(interactor: interactor)

        statusViewController = interactor
        statusViewController?.cleanUpBlock = { [unowned self] in
            self.statusViewController?.dismiss(animated: true, completion: nil)
            self.statusViewController = nil
        }
    }
}
