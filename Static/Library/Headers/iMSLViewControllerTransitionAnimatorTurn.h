//
//  TransitionAnimatorTurn.h
//
//  Created by Milan Horvatovic on 15/11/14.
//  Copyright (c) 2014 Milan Horvatovic. All rights reserved.
//

#import "iMSLViewControllerTransitionAnimatorSpringBase.h"

typedef NS_ENUM(NSInteger, ViewControllerTransitionAnimatorTurnDirection) {
    ViewControllerTransitionAnimatorTurnDirectionVertical,
    ViewControllerTransitionAnimatorTurnDirectionHorizontal
};

@interface iMSLViewControllerTransitionAnimatorTurn : iMSLViewControllerTransitionAnimatorSpringBase

@property (nonatomic, assign, readwrite) ViewControllerTransitionAnimatorTurnDirection direction;

@end
