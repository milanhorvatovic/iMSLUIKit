//
//  InteractiveTransitionBase.h
//
//  Created by Milan Horvatovic on 13/11/14.
//  Copyright (c) 2014 Milan Horvatovic. All rights reserved.
//

#import <UIKit/UIKit.h>
//@import UIKit;

@interface iMSLViewControllerCommonTransitionInteractive : UIPercentDrivenInteractiveTransition

@property (nonatomic, assign, readonly, getter = isInProgress) BOOL inProgress;

@end
