//
//  iMSLTextableComponentProtocol.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 17/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol iMSLTextableComponentInitProtocol <NSObject>

- (instancetype)initWithFontSize:(CGFloat)fontSize;
- (instancetype)initWithFrame:(CGRect)frame fontSize:(CGFloat)fontSize;

@end

@protocol iMSLTextableComponentFontProtocol <NSObject>

@required
+ (NSString *)fontName;

@end

@protocol iMSLTextableComponentAttributedValueProtocol <NSObject>

@optional
+ (NSDictionary *)additionalAttributes;
+ (NSAttributedString *)additionalAttributesWithString:(NSString *)string;

@end
