//
//  Transition.h
//
//  Created by Milan Horvatovic on 13/11/14.
//  Copyright (c) 2014 Milan Horvatovic. All rights reserved.
//

#ifndef iMSLViewControllerTransition_h
#define iMSLViewControllerTransition_h

#pragma mark - Manager
#import <iMSLUIKit/iMSLViewControllerTransitionManager.h>

#pragma mark - Interactive
#import <iMSLUIKit/iMSLViewControllerCommonTransitionInteractive.h>

#pragma mark - Presentation
#import <iMSLUIKit/iMSLViewControllerTransitionCommonPresentationController.h>
#import <iMSLUIKit/iMSLViewControllerTransitionDimmingPresentationController.h>
#import <iMSLUIKit/iMSLViewControllerTransitionPushPresentationController.h>

#pragma mark - Animator
#pragma mark Base
#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorBase.h>
#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorSpringBase.h>
#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorCombined.h>
#pragma mark Specific
#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorCrossDissolve.h>
#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorMove.h>
#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorMoveFrom.h>
#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorTurn.h>
#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorPush.h>
#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorVerticalCard.h>

#endif
