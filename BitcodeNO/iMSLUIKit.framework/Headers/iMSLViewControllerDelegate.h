//
//  CustomRootViewController+CustomRootDelegate.h
//  Droppie
//
//  Created by Milan Horvatovic on 07/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#pragma mark - Base
@protocol iMSLViewControllerDelegate <NSObject>

@end

#pragma mark - Presentating
@protocol iMSLViewControllerPresentatingDelegate <NSObject>

@optional
- (void)willPresentViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (void)didPresentViewController:(UIViewController *)viewController animated:(BOOL)animated;

- (void)willDismissViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (void)didDismissViewController:(UIViewController *)viewController animated:(BOOL)animated;

@end
