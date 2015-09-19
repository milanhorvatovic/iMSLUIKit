//
//  CustomAttributedButton.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 19/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
//@import UIKit;

#import <iMSLUIKit/iMSLTextableComponentProtocol.h>

@interface iMSLAttributedButton : UIButton <iMSLTextableComponentInitProtocol, iMSLTextableComponentFontProtocol, iMSLTextableComponentAttributedValueProtocol>

@property (nonatomic, assign, readwrite) IBInspectable BOOL imageOnRightSide;

@end
