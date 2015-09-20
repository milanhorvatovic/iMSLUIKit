//
//  ViewControllerTransitionAnimatorMove.h
//  Droppie
//
//  Created by Milan Horvatovic on 26/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import "iMSLViewControllerTransitionAnimatorBase.h"

typedef NS_ENUM(NSUInteger, ViewControllerTransitionAnimatorMoveDirectionType) {
    ViewControllerTransitionAnimatorMoveDirectionTypeTop,
    ViewControllerTransitionAnimatorMoveDirectionTypeLeft,
    ViewControllerTransitionAnimatorMoveDirectionTypeBottom,
    ViewControllerTransitionAnimatorMoveDirectionTypeRight
};

@interface iMSLViewControllerTransitionAnimatorMove : iMSLViewControllerTransitionAnimatorBase

@property (nonatomic, assign, readonly) ViewControllerTransitionAnimatorMoveDirectionType presentDirection;
@property (nonatomic, assign, readonly) ViewControllerTransitionAnimatorMoveDirectionType dismissDirection;

- (instancetype)initWithAnimationDuration:(NSTimeInterval)animationDuration direction:(ViewControllerTransitionAnimatorMoveDirectionType)direction;
- (instancetype)initWithAnimationPressentDuration:(NSTimeInterval)presentDuration dismissDuration:(NSTimeInterval)dismissDuration presentDirection:(ViewControllerTransitionAnimatorMoveDirectionType)presentDirection dismissDirection:(ViewControllerTransitionAnimatorMoveDirectionType)dismissDirection;

@end
