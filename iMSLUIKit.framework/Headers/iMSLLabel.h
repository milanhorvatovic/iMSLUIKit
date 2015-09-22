//
//  CustomLabel.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 01/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
//@import UIKit;

#import "iMSLTextableComponentProtocol.h"

@interface iMSLLabel : UILabel <iMSLTextableComponentInitProtocol, iMSLTextableComponentFontProtocol>

@end
