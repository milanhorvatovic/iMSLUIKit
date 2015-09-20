//
//  iMSLAttributedTextView.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 18/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
//@import UIKit;

#import "iMSLTextableComponentProtocol.h"

@interface iMSLAttributedTextView : UITextView <iMSLTextableComponentInitProtocol, iMSLTextableComponentFontProtocol, iMSLTextableComponentAttributedValueProtocol>

@end
