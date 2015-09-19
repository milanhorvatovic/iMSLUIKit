//
//  iMSLReplaceableContainerViewController.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 19/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLUIKit/iMSLContainerCommonViewController.h>

typedef NS_ENUM(NSUInteger, iMSLReplaceableContainerAnimationDirection) {
    iMSLReplaceableContainerAnimationDirectionUndefined,
    iMSLReplaceableContainerAnimationDirectionForward,
    iMSLReplaceableContainerAnimationDirectionReverse
};

typedef void (^iMSLReplaceableContainerCompletionBlock)(BOOL didComplete, UIViewController *fromViewController, UIViewController *toViewController);

@class iMSLReplaceableContainerViewController;

@protocol iMSLReplaceableContainerDelegate <NSObject>

- (id<UIViewControllerAnimatedTransitioning>)replaceableContainer:(iMSLReplaceableContainerViewController *)switcheroo
                                  animationControllerForDirection:(iMSLReplaceableContainerAnimationDirection)direction
                                               fromViewController:(UIViewController *)fromViewController
                                                 toViewController:(UIViewController *)toViewController;
@end


@interface iMSLReplaceableContainerViewController : iMSLContainerCommonViewController

@property (nonatomic, weak, readwrite) id<iMSLReplaceableContainerDelegate> delegate;

@property (nonatomic, weak, readonly) UIViewController *replaceableViewController;

//@property (nonatomic, copy, readwrite) iMSLReplaceableContainerCompletionBlock undefinedCompletitionBlock;
//@property (nonatomic, copy, readwrite) iMSLReplaceableContainerCompletionBlock forwardCompletitionBlock;
//@property (nonatomic, copy, readwrite) iMSLReplaceableContainerCompletionBlock reverseCompletitionBlock;

- (instancetype)initWithContent:(UIViewController *)contentViewController delegate:(id<iMSLReplaceableContainerDelegate>)delegate;

#pragma mark CompletitionBlock
- (iMSLReplaceableContainerCompletionBlock)completitionBlockForDirection:(iMSLReplaceableContainerAnimationDirection)direction;
- (void)setCompletitionBlock:(iMSLReplaceableContainerCompletionBlock)completitionBlock forDirection:(iMSLReplaceableContainerAnimationDirection)direction;

#pragma mark Replace
- (void)replaceToContent:(UIViewController *)contentViewController direction:(iMSLReplaceableContainerAnimationDirection)direction;
- (void)replaceToContent:(UIViewController *)contentViewController direction:(iMSLReplaceableContainerAnimationDirection)direction animated:(BOOL)animated;

@end
