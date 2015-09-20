//
//  iMSLTextableComponentProtocolProtected.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 17/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol iMSLTextableComponentFontCommonProtocolProtected <NSObject>

@required
- (void)_checkFont;

@end

@protocol iMSLTextableComponentFontProtocolProtected <iMSLTextableComponentFontCommonProtocolProtected>

@required
- (void)_updateFont;
@optional
- (void)_updateFontName:(NSString *)fontName;

@required
- (void)_updateFontWithSize:(CGFloat)fontSize;
@optional
- (void)_updateFontName:(NSString *)fontName withSize:(CGFloat)fontSize;

@end

@protocol iMSLTextableComponentFontAttributedProtocolProtected <iMSLTextableComponentFontProtocolProtected>

@required
- (void)_updateFontForText:(NSString *)text;
@optional
- (void)_updateFontName:(NSString *)fontName forText:(NSString *)text;

@required
- (void)_updateFontWithSize:(CGFloat)fontSize forText:(NSString *)title;
@optional
- (void)_updateFontName:(NSString *)fontName withSize:(CGFloat)fontSize forText:(NSString *)text;

@end

@protocol iMSLTextableComponentFontAttributedControlProtocolProtected <iMSLTextableComponentFontProtocolProtected>

@required
- (void)_updateFontForTitle:(NSString *)title state:(UIControlState)state;
@optional
- (void)_updateFontName:(NSString *)fontName forTitle:(NSString *)title state:(UIControlState)state;

@required
- (void)_updateFontWithSize:(CGFloat)fontSize forTitle:(NSString *)title state:(UIControlState)state;
@optional
- (void)_updateFontName:(NSString *)fontName withSize:(CGFloat)fontSize forTitle:(NSString *)title state:(UIControlState)state;

@end