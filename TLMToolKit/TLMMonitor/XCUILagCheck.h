//
//  XCUILagCheck.h
//  Pods
//
//  Created by tongleiming on 2019/7/1.
//

#import <Foundation/Foundation.h>
#import "XCMonitorDataAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@interface XCUILagCheck : NSObject <XCMonitorDataAdapter>

+ (instancetype)sharedManager;

@end

NS_ASSUME_NONNULL_END
