//
//  OXClientEntry.h
//  OXExample
//
//  Created by JG on 2019/1/29.
//  Copyright © 2019年 OX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OXOneKeyCustomModel.h"
/**
 操作类型
 该每个SDK方法对应一个操作类型
 */
typedef NS_ENUM(NSInteger, OXActionType) {
    OXActionTypeNone = 0,//空值
    OXActionTypeInitSdk = 1,//SDK初始化
    OXActionTypeVerifyByOnekey = 2,//一键登录 直接获取手机号
    OXActionTypeGetOnekeyLoginToken = 3,//一键登录 获取置换手机号Token
    OXActionTypeVerifyBySmsStart = 4,//短信验证开启
    OXActionTypeVerifyBySmsCheck = 5,//短信校验
    OXActionTypeVerifyByFactorThreeNameIdTel = 6,//三要素验证:姓名+身份证+手机号
    OXActionTypeGetMobileAuthToken = 7,//本机号码校验
    XActionTypeSecondNumberCheck = 8//二次号校验
};
/**
 代理：OXActionDelegate
 */
@protocol OXActionDelegate <NSObject>
@required

/**
 服务回调 (一键登录、短信验证、实名验证)
 
 @param result 回调参数
 */
- (void)onActionResult:(NSDictionary *)result;

/**
 SDK初始化回调
 @param response 回调参数
 */
- (void)oxActionInitSdkResponse:(NSDictionary *)response;

@end
@interface OXClientEntry : NSObject
/**
 SDK初始化
 
 @param params 请求参数
 {
 appId
 appSecret
 }
 @param delegate 代理
 */
+ (void)initWithParams:(NSDictionary *)params
              delegate:(id<OXActionDelegate>)delegate;


/**
 服务接口
 (一键登录、短信验证、实名验证)
 @param type 请求类型
 @param params 请求参数
 */
+ (void)requestAction:(OXActionType)type params:(NSDictionary *)params;

/**
 自定义一键登录UI样式参数
 @param viewModel UI实例Model（OXOneKeyCustomModel.h可查看属性）
 */
+ (void)oneKeyCustomUIWithParams:(OXOneKeyCustomModel *)viewModel;
/**
 控制台日志输出控制（默认关闭）
 
 @param enable 开关参数
 */
+ (void)printConsoleEnable:(BOOL)enable;
@end


