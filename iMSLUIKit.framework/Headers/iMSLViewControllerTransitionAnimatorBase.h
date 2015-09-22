//
//  AnimatorBase.h
//
//  Created by Milan Horvatovic on 13/11/14.
//  Copyright (c) 2014 Milan Horvatovic. All rights reserved.
//

@interface iMSLViewControllerTransitionAnimatorBase : iMSLObject <UIViewControllerAnimatedTransitioning>

@property (atomic, assign, readwrite) BOOL invokeAppearance;

@property (atomic, assign, readwrite, getter = isDismissing) BOOL dismissing;
@property (nonatomic, assign, readonly, getter = isInProgress) BOOL inProgress;

@property (nonatomic, assign, readonly) NSTimeInterval presentDuration;
@property (nonatomic, assign, readonly) NSTimeInterval dismissDuration;

- (instancetype)initWithAnimationDuration:(NSTimeInterval)animationDuration;
- (instancetype)initWithAnimationPressentDuration:(NSTimeInterval)presentDuration dismissDuration:(NSTimeInterval)dismissDuration;

@end
