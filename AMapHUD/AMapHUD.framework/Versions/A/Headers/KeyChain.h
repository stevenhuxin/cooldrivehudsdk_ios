//
//  KeyChain.h
//  AMapNaviHUD
//
//  Created by YuanGu on 2017/8/31.
//  Copyright © 2017年 YuanGu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyChain : NSObject

+ (void)save:(NSString *)service data:(id)data;

+ (id)load:(NSString *)service;

+ (void)deleteKeyData:(NSString *)service;

+ (NSString *)getDeviceUUID;

+ (NSString *)getDownloadTime;

@end
