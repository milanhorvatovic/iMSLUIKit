//
//  UIColor+iMSoftLabs.h
//
//  Created by Milan Horvatovic on 7/24/13.
//  Copyright (c) 2013 iMSoft Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kColorFullRGBDivider(color) color / 255.0

@interface UIColor (Create)

+ (UIColor *)colorWithRedFull:(CGFloat)red greenFull:(CGFloat)green blueFull:(CGFloat)blue alpha:(CGFloat)alpha;

@end

@interface UIColor (DefaultValue)

+ (UIColor *)borderDefaultColor;

@end

@interface UIColor (ValueOf)

+ (UIColor *)colorWithHexString:(NSString *)hexString;
+ (UIColor *)colorWithHTMLName:(NSString *)name;
- (NSString *)hexValue;

@end

@interface UIColor (Random)

#pragma mark RGB
+ (UIColor *)randomRGBColor;
+ (UIColor *)randomRGBColorWithAlpha:(CGFloat)alpha;

#pragma mark HSB
+ (UIColor *)randomHSColor;
+ (UIColor *)randomHSColorWithAlpha:(CGFloat)alpha;
+ (UIColor *)randomHSBColor;
+ (UIColor *)randomHSBColorWithAlpha:(CGFloat)alpha;

@end
