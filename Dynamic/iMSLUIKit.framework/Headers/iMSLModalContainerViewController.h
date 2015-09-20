//
//  iMSLModalContainerViewController.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 19/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLReplaceableContainerViewController.h"

@interface iMSLModalContainerViewController : iMSLReplaceableContainerViewController

@property (nonatomic, weak, readonly) IBInspectable UIViewController *modalContentViewController;

/// (Optional) The identifier of the scene to show.
/// This should be set in the Interface Builder identity inspector.
@property (nonatomic, copy, readwrite) IBInspectable NSString *sceneIdentifier;

@end
