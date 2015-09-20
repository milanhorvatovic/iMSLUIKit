//
//  TransitionManager.h
//
//  Created by Milan Horvatovic on 13/11/14.
//  Copyright (c) 2014 Milan Horvatovic. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@class iMSLViewControllerTransitionAnimatorBase;
@class iMSLViewControllerCommonTransitionInteractive;
@class iMSLViewControllerTransitionCommonPresentationController;

@interface iMSLViewControllerTransitionManager : NSObject <UIViewControllerTransitioningDelegate>

@property (nonatomic, strong, readonly) iMSLViewControllerTransitionAnimatorBase *animator;
@property (nonatomic, strong, readonly) iMSLViewControllerCommonTransitionInteractive *interactive;
@property (nonatomic, strong, readonly) Class presentationClass;
@property (nonatomic, strong, readonly) iMSLViewControllerTransitionCommonPresentationController *presentation;

- (instancetype)initWithAnimator:(iMSLViewControllerTransitionAnimatorBase *)animator;
- (instancetype)initWithAnimator:(iMSLViewControllerTransitionAnimatorBase *)animator interactive:(iMSLViewControllerCommonTransitionInteractive *)interactive;
- (instancetype)initWithAnimator:(iMSLViewControllerTransitionAnimatorBase *)animator interactive:(iMSLViewControllerCommonTransitionInteractive *)interactive presentation:(Class)presentationClass;

@end
