#
# Be sure to run `pod lib lint LeeCode.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LeeCode'
  s.version          = '0.5.0'
  s.summary          = '这是一个测试库'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
主要用于测试Cocoapods。
                      DESC
  s.homepage         = 'https://github.com/lxxxzzz/LeeCode'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Danny.li' => 'lxxxzzz@qq.com' }
  s.source           = { :git => 'https://github.com/lxxxzzz/LeeCode.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

#  s.source_files = 'LeeCode/Classes/*.{h,m}'
  s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  s.subspec 'View' do |v|
    v.source_files = 'LeeCode/Classes/LEETestView.{h,m}'
    v.dependency 'LEEUITool'
  end
  
  s.subspec 'Proxy' do |p|
    p.source_files = 'LeeCode/Classes/YXProxy.{h,m}'
  end
  # s.resource_bundles = {
  #   'LeeCode' => ['LeeCode/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
