//
//  CustomRootViewController.h
//  Droppie
//
//  Created by Milan Horvatovic on 07/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import <UIKit/UIKit.h>
//@import UIKit;

#import "iMSLViewControllerDelegate.h"
#import "iMSLViewControllerProtocol.h"

@interface iMSLViewController : UIViewController
<
iMSLViewControllerProtocol,
iMSLViewControllerPresentatingProtocol
>

@end
