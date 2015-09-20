//
//  iMSLStoryboardLinkViewController.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 19/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLContainerViewController.h"

@interface iMSLStoryboardLinkViewController : iMSLContainerViewController

/// The contained UIViewController from the destination view controller.
@property (nonatomic, weak, readonly) UIViewController *sceneViewController;

/// The name of the storyboard that should be linked.
/// This should be set in the Interface Builder identity inspector.
@property (nonatomic, copy, readwrite) IBInspectable NSString *storyboardName;

/// (Optional) The bundle id of the bundle containing the storyboard to be linked.
/// This should be set in the Interface Builder identity inspector.
@property (nonatomic, copy, readwrite) IBInspectable NSString *storyboardBundleIdentifier;

/// (Optional) The identifier of the scene to show.
/// This should be set in the Interface Builder identity inspector.
@property (nonatomic, copy, readwrite) IBInspectable NSString *sceneIdentifier;

@end
