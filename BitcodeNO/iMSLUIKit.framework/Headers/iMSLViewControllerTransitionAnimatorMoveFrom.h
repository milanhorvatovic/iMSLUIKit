//
//  TransitionAnimatorFadeFrom.h
//
//  Created by Milan Horvatovic on 13/11/14.
//  Copyright (c) 2014 Milan Horvatovic. All rights reserved.
//

#import "iMSLViewControllerTransitionAnimatorSpringBase.h"

@interface iMSLViewControllerTransitionAnimatorMoveFrom : iMSLViewControllerTransitionAnimatorSpringBase

@property (nonatomic, assign, readwrite) CGPoint fromViewCenterCorrection;
@property (nonatomic, weak, readwrite) UIView *fromView;

- (CGPoint)fromViewCenterCorrectionInvalidValue;
- (void)clearFromViewCenterCorrection;

@end
