//
//  iMSLContainerCommonViewController.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 19/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLUIKit/iMSLViewController.h>

@interface iMSLContainerCommonViewController : iMSLViewController;

@property (nonatomic, weak, readonly) IBInspectable UIViewController *contentViewController;

/// (Optional) Whether the first view controller should have a constraint for
/// the top layout guide in the storyboard. This should be set in the Interface
/// Builder identity inspector.
@property (nonatomic, assign, readwrite) IBInspectable BOOL needsTopLayoutGuide;

/// (Optional) Whether the first view controller should have a constraint for
/// the bottom layout guide in the storyboard. This should be set in the
/// Interface Builder identity inspector.
@property (nonatomic, assign, readwrite) IBInspectable BOOL needsBottomLayoutGuide;

@end
