//
//  TransitionAnimatorVerticalCard.h
//
//  Created by Milan Horvatovic on 13/11/14.
//  Copyright (c) 2014 Milan Horvatovic. All rights reserved.
//

#import "iMSLViewControllerTransitionAnimatorSpringBase.h"

typedef NS_ENUM(NSInteger, ViewControllerTransitionAnimatorVerticalCardDirection) {
    ViewControllerTransitionAnimatorVerticalCardDirectionTop,
    ViewControllerTransitionAnimatorVerticalCardDirectionBottom
};

@interface iMSLViewControllerTransitionAnimatorVerticalCard : iMSLViewControllerTransitionAnimatorSpringBase

@property (nonatomic, assign, readwrite) ViewControllerTransitionAnimatorVerticalCardDirection direction;

@end
