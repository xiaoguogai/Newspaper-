//
//  Utilities.h
//  Utility
//
//  Created by ZIYAO YANG on 15/8/20.
//  Copyright (c) 2015年 Ziyao Yang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Utilities : NSObject

//根据key获取缓存userDefault
+ (id)getUserDefaults:(NSString *)key;
//根据key设置userDefault
+ (void)setUserDefaults:(NSString *)key content:(id)value;
//根据key删除缓存userDefault
+ (void)removeUserDefaults:(NSString *)key;
//根据identity获得页面控制器实例
+ (id)getStoryboardInstanceByIdentity:(NSString*)identity;
//弹出警告框
+ (void)popUpAlertViewWithMsg:(NSString *)msg andTitle:(NSString* )title;

//获得保护膜
+ (UIActivityIndicatorView *)getCoverOnView:(UIView *)view;
@end
