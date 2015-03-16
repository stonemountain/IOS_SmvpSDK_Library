

Pod::Spec.new do |s|

 

  s.name         = "IOS_SmvpSDK_Library"
  s.version      = "1.2.91"
  s.summary      = "ios player lib for stonemountain client."

  s.description  = <<-DESC
                   Ios player lib for stonemountain client.
                   DESC

  s.homepage     = "https://github.com/stonemountain/IOS_SmvpSDK_Library"

  s.license      = "MIT"

  s.author             = { "stonemountain" => "julien@smvp.cn" }

  s.platform     = :ios

  s.source       = { :git => "https://github.com/stonemountain/IOS_SmvpSDK_Library.git", :tag => "1.2.91" }
  
  s.source_files = 'SmvpClient/*.{h,m}'
  s.public_header_files = "SmvpClient/*.h"
  s.vendored_libraries = "libSmvpClient.a"

  s.requires_arc = true

end
