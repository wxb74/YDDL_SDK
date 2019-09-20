//
//  OXOneKeyModel.h
//  OXExample
//
//  Created by JG on 2019/1/22.
//  Copyright © 2019年 OX. All rights reserved.
//  Version 1.3.0

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface OXOneKeyCustomModel : NSObject
#pragma mark -----------------------------授权页面----------------------------------

#pragma mark 自定义控件

/**导航栏右侧自定义控件（导航栏传 UIBarButtonItem对象 自定义传非UIBarButtonItem ）*/
@property (nonatomic,strong) id navControl;

/**授权界面自定义控件View的Block*/
@property (nonatomic,copy) void(^authViewBlock)(UIView *customView);

/**授权界面背景图片*/
@property (nonatomic,strong) UIImage *authPageBackgroundImage;

#pragma mark 导航栏
/**导航栏颜色*/
@property (nonatomic,strong) UIColor *navColor;
/**导航栏标题*/
@property (nonatomic,strong) NSString *navText;
/**导航栏标题颜色*/
@property (nonatomic,strong) UIColor *navTextColor;
/**状态栏着色样式(隐藏导航栏无效)*/
@property (nonatomic,assign) UIBarStyle barStyle;
/**状态栏着色样式(隐藏导航栏时设置)*/
@property (nonatomic, assign) UIStatusBarStyle StatusBarStyle;
/**导航栏自定义（适配全屏图片）*/
@property (nonatomic,assign) BOOL navCustom;
/**导航返回图标(尺寸根据图片大小)*/
@property (nonatomic,strong) UIImage *navReturnImg;

#pragma mark 图片设置
/**LOGO图片*/
@property (nonatomic,strong) UIImage *logoImg;
/**LOGO图片宽度*/
@property (nonatomic,assign) CGFloat logoWidth;
/**LOGO图片高度*/
@property (nonatomic,assign) CGFloat logoHeight;
/**LOGO图片偏移量*/
@property (nonatomic,assign) CGFloat logoOffsetY;
/**LOGO图片隐藏*/
@property (nonatomic,assign) BOOL logoHidden;

#pragma mark 登录按钮
/**登录按钮文本*/
@property (nonatomic,strong) NSAttributedString *logBtnText;
/**登录按钮Y偏移量*/
@property (nonatomic,assign) CGFloat logBtnOffsetY;
/**登录按钮背景图片添加到数组(顺序如下)
 @[激活状态的图片,失效状态的图片,高亮状态的图片]
 */
@property (nonatomic,strong) NSArray *logBtnImgs;

#pragma mark 号码框设置
/**手机号码字体颜色*/
@property (nonatomic,strong) UIColor *numberColor;
/**手机号码字体大小*/
@property (nonatomic,assign) CGFloat numberSize;
/**号码栏Y偏移量*/
@property (nonatomic,assign) CGFloat numFieldOffsetY;

#pragma mark 隐私条款
/**复选框未选中时图片*/
@property (nonatomic,strong) UIImage *uncheckedImg;
/**复选框选中时图片*/
@property (nonatomic,strong) UIImage *checkedImg;

/**
 隐私的内容模板：
 1、全句可自定义但必须保留"&&默认&&"字段表明SDK默认协议,否则设置不生效
 2、协议1和协议2的名称要与数组 str1 和 str2 ... 里的名称 一样
 3、必设置项（参考SDK的demo）
 appPrivacieDemo设置内容：登录并同意&&默认&&和&&百度协议&&、&&京东协议2&&登录并支持一键登录
 展示：   登录并同意中国移动条款协议和百度协议1、京东协议2登录并支持一键登录
 */
@property (nonatomic, copy) NSAttributedString *appPrivacyDemo;
/**
 隐私条款:数组（务必按顺序）要设置NSLinkAttributeName属性可以跳转协议
 对象举例：
 NSAttributedString *str1 = [[NSAttributedString alloc]initWithString:@"百度协议" attributes:@{NSLinkAttributeName:@"https://www.baidu.com"}];
 @[str1,,str2,str3,...]
 */
@property (nonatomic,strong) NSArray <NSAttributedString *> *appPrivacy;
/**隐私条款名称颜色
 @[基础文字颜色,条款颜色]
 */
@property (nonatomic,strong) UIColor *appPrivacyColor;
/**隐私条款Y偏移量(注:此属性为与屏幕底部的距离)*/
@property (nonatomic,assign) CGFloat privacyOffsetY;
/**隐私条款check框默认状态 默认:NO */
@property (nonatomic,assign) BOOL privacyState;

#pragma mark 运营商标识Title
/**brand偏移量Y*/
@property (nonatomic,assign) CGFloat sloganOffsetY;
/**brand文字*/
@property (nonatomic,strong) NSAttributedString *sloganText;

@end


