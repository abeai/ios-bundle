Pod::Spec.new do |s|
  s.name             = 'SalemoveSDK'
  s.version          = '0.25.0'
  s.summary          = 'The Salemove iOS library'
  s.description      = 'The Salemove iOS library brings the in-person customer experience to iOS devices.'
  s.homepage         = 'https://github.com/salemove/ios-sdk'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Salemove' => 'support@salemove.com' }
  s.source           = { :git => 'git@github.com:salemove/ios-bundle.git', :tag => s.version.to_s }

  s.module_name = 'SalemoveSDK'
  s.ios.deployment_target = '12.0'
  s.ios.vendored_frameworks = 'SalemoveSDK.framework'
  s.swift_version = '5.3'

  s.dependency 'Moya', '14.0.0'
  s.dependency 'ReactiveSwift', '6.2.1'
  s.dependency 'SwiftPhoenixClient', '1.2.1'
  s.dependency 'ios-socket-client', '9.1.0'
  s.dependency 'glia-webrtc/bitcode', '0.0.3'
  s.dependency 'Macaw', '0.9.7'
  s.dependency 'TwilioVoice', '5.5.0.g'
end
