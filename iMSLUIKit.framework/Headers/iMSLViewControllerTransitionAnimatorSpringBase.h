//
//  ViewControllerTransitionAnimatorBaseBump.h
//
//  Created by Milan Horvatovic on 16/11/14.
//  Copyright (c) 2014 Milan Horvatovic. All rights reserved.
//

#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorBase.h>

@interface iMSLViewControllerTransitionAnimatorSpringBase : iMSLViewControllerTransitionAnimatorBase

@property (nonatomic, assign, readwrite, getter = isUseSpring) BOOL useSpring;

@property (nonatomic, assign, readwrite) CGFloat dampingMultiplier;
@property (nonatomic, assign, readwrite) CGFloat velocityMultiplier;

@end
