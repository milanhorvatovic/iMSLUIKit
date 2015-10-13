//
//  TransitionAnimatorBase_Extension.h
//
//  Created by Milan Horvatovic on 13/11/14.
//  Copyright (c) 2014 Milan Horvatovic. All rights reserved.
//

#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorBase.h>
#import <iMSLCoreKit/iMSLObject_Extension.h>

#import <iMSLUIKit/iMSLViewAnimatorBase.h>

#define degreesToRadians(x) (M_PI * x / 180.0)

typedef struct {
    BOOL setted;
    CGAffineTransform tranform;
} CGAffineTransformStruct;

@interface iMSLViewControllerTransitionAnimatorBase () <iMSLUIInitProtocolProtected>

@property (nonatomic, assign, readwrite, getter = isInProgress) BOOL inProgress;

@property (nonatomic, assign, readwrite) NSTimeInterval presentDuration;
@property (nonatomic, assign, readwrite) NSTimeInterval dismissDuration;

@property (nonatomic, strong, readwrite) iMSLViewAnimatorBase *_animator;
@property (nonatomic, strong, readwrite) iMSLViewAnimatorBase *_presentAnimator;
@property (nonatomic, strong, readwrite) iMSLViewAnimatorBase *_dismissAnimator;

- (void)_animateTransition:(id<UIViewControllerContextTransitioning>)transitionContext containerView:(UIView *)containerView fromViewController:(UIViewController *)fromViewController toViewController:(UIViewController *)toViewController fromView:(UIView *)fromView toView:(UIView *)toView;

@end
