import Foundation
import UIKit

extension UIStoryboard {
    class var operators: UIStoryboard {
        return UIStoryboard(name: "Operators", bundle: Bundle.main)
    }

    class var configuration: UIStoryboard {
        return UIStoryboard(name: "Configuration", bundle: Bundle.main)
    }

    class var engagement: UIStoryboard {
        return UIStoryboard(name: "Engagement", bundle: Bundle.main)
    }

    class var main: UIStoryboard {
        return UIStoryboard(name: "Main", bundle: Bundle.main)
    }
}
