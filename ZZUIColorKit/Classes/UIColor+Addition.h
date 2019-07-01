//
//  UIColor+Addition.h
//  aizhenhuo
//
//  Created by zz on 2019/6/17.
//  Copyright © 2019 zz. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Addition)

/** 0xFFFFFF  或者 #FFFFFF */
+ (UIColor *)na_colorWithHexString:(NSString *)color;

@end

NS_ASSUME_NONNULL_END
