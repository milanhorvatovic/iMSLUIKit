//
//  ViewControllerTransitionAnimatorCombined.h
//  Droppie
//
//  Created by Milan Horvatovic on 28/11/14.
//  Copyright (c) 2014 Martin Herman. All rights reserved.
//

#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorBase.h>

#import <iMSLUIKit/iMSLViewAnimatorBase.h>

@interface iMSLViewControllerTransitionAnimatorCombined : iMSLViewControllerTransitionAnimatorBase

@property (nonatomic, strong, readonly) iMSLViewAnimatorBase *presentAnimator;
@property (nonatomic, strong, readonly) iMSLViewAnimatorBase *dismissAnimator;

- (instancetype)initWithAnimationDuration:(NSTimeInterval)animationDuration presentAnimator:(iMSLViewAnimatorBase *)presentAnimator dismissAnimator:(iMSLViewAnimatorBase *)dismissAnimator;
- (instancetype)initWithAnimationPressentDuration:(NSTimeInterval)presentDuration dismissDuration:(NSTimeInterval)dismissDuration presentAnimator:(iMSLViewAnimatorBase *)presentAnimator dismissAnimator:(iMSLViewAnimatorBase *)dismissAnimator;

@end
