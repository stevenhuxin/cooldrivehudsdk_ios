//
//  AFRequest.h
//  AMapNaviHUD
//
//  Created by YuanGu on 2017/8/31.
//  Copyright © 2017年 YuanGu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AFRequest;

typedef void (^AFRequestSuccess)(AFRequest *request ,id object);
typedef void (^AFRequestFailure)(AFRequest *request ,NSError *error);

@interface AFRequest : NSObject

+ (AFRequest *)manager;

- (void)postHUDDriveEndedDataWith:(NSArray *)array
                       andSuccess:(AFRequestSuccess)succsess
                       andFailure:(AFRequestFailure)faiure;

@end
