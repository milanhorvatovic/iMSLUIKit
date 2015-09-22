//
//  Transition.h
//
//  Created by Milan Horvatovic on 13/11/14.
//  Copyright (c) 2014 Milan Horvatovic. All rights reserved.
//

#ifndef iMSLViewControllerTransition_h
#define iMSLViewControllerTransition_h

#pragma mark - Manager
#import "iMSLViewControllerTransitionManager.h"

#pragma mark - Interactive
#import "iMSLViewControllerCommonTransitionInteractive.h"

#pragma mark - Presentation
#import "iMSLViewControllerTransitionCommonPresentationController.h"
#import "iMSLViewControllerTransitionDimmingPresentationController.h"
#import "iMSLViewControllerTransitionPushPresentationController.h"

#pragma mark - Animator
#pragma mark Base
#import "iMSLViewControllerTransitionAnimatorBase.h"
#import "iMSLViewControllerTransitionAnimatorSpringBase.h"
#import "iMSLViewControllerTransitionAnimatorCombined.h"
#pragma mark Specific
#import "iMSLViewControllerTransitionAnimatorCrossDissolve.h"
#import "iMSLViewControllerTransitionAnimatorMove.h"
#import "iMSLViewControllerTransitionAnimatorMoveFrom.h"
#import "iMSLViewControllerTransitionAnimatorTurn.h"
#import "iMSLViewControllerTransitionAnimatorPush.h"
#import "iMSLViewControllerTransitionAnimatorVerticalCard.h"

#endif
