//
//  CustomTextField.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 02/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
//@import UIKit;

#import <iMSLUIKit/iMSLTextableComponentProtocol.h>

@protocol iMSLTextFieldAttributedPlaceholderDelegate <NSObject>

//+ (BOOL)allowedAttributedPlaceholder;
//+ (NSString *)attributedPlaceholderString;
//+ (UIColor *)attributedPlaceholderForegroundColor;
//+ (UIColor *)attributedPlaceholderFont;

@end

@interface iMSLTextField : UITextField <iMSLTextableComponentInitProtocol, iMSLTextFieldAttributedPlaceholderDelegate>

//@property (nonatomic, weak, readwrite) IBOutlet id<CustomTextFieldAttributedPlaceholderDelegate> attributedPlaceholderDelegate;
@property (nonatomic, weak, readwrite) Class<iMSLTextFieldAttributedPlaceholderDelegate> attributedPlaceholderDelegateClass;

@end
