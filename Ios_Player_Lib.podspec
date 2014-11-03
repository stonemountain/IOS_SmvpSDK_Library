

Pod::Spec.new do |s|

 

  s.name         = "Ios_Player_Lib"
  s.version      = "0.0.6"
  s.summary      = "ios player lib for stonemountain client."

  s.description  = <<-DESC
                   Ios player lib for stonemountain client.
                   DESC

  s.homepage     = "https://github.com/stonemountain/Ios_Player_Lib"

  s.license      = "MIT"

  s.author             = { "stonemountain" => "julien@smvp.cn" }

  s.platform     = :ios

  s.source       = { :git => "https://github.com/stonemountain/Ios_Player_Lib.git", :tag => "0.0.6" }
  
  s.source_files = 'SmvpClient/*.{h,m}'
  s.public_header_files = "SmvpClient/*.h"
  s.vendored_libraries = "libSmvpClient.a"

  s.requires_arc = true

end
