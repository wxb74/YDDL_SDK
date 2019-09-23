Pod::Spec.new do |s|

#名称
s.name        = 'OXSaiSDK'

#版本 这里的版本号一定要与我们提交到GitHub上的tag一致，否则无法上传成功
s.version      = '1.4.2'

#许可证
s.license      = 'MIT'

#项目简介
s.summary      = '一键登录'

#项目主页地址
s.homepage     = 'https://github.com/wxb74/YDDL_SDK'

#项目的地址 （注意这里的tag位置，可以自己写也可以直接用s.version，但是与s.version一定要统一）
s.source       = { :git => 'https://github.com/wxb74/YDDL_SDK.git', :tag => s.version }

#支持arc
s.requires_arc = true

#支持最小系统版本
s.platform     = :ios,'8.0'

#依赖的库  这里自行填写，不要遗漏
#s.frameworks   = 'UIKit', 'Foundation','CoreTelephony'
#依赖库
s.library   = "c++.1"

#作者
s.author             = { 'wxb74' => '563527728@qq.com'}

#你的GitHub地址
s.social_media_url   = 'https://github.com/wxb74/YDDL_SDK'

#需要包含的源文件
s.source_files = 'framework/OXSaiSDK.framework/Headers/*.{h}'

#你的SDK路径
s.vendored_frameworks = 'framework/trs_ta_sdk.framework'

s.resource = 'framework/*.{bundle}'

#SDK头文件路径
s.public_header_files = 'framework/OXSaiSDK.framework/Headers/OXSaiSDK.h'

s.pod_target_xcconfig = {
'ENABLE_BITCODE' => 'NO',
'FRAMEWORK_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/OXSaiSDK',
'OTHER_LDFLAGS' => '$(inherited) -undefined dynamic_lookup -ObjC'
}
end
