//
//  CustomRootViewController_Extension.h
//  Droppie
//
//  Created by Milan Horvatovic on 07/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import "iMSLViewController.h"
#import "iMSLProtocolProtected.h"
#import "iMSLViewControllerProtocolProtected.h"

#import "iMSLViewControllerTransitionManager.h"

@interface iMSLViewController ()
<
iMSLUIInitProtocolProtected, 
iMSLViewControllerProtocolProtected
>

@end
