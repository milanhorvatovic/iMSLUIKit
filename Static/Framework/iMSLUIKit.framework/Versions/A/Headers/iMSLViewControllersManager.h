//
//  iMSLViewControllersManager.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 07/09/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLCoreKit/iMSLObject.h>

@interface iMSLViewControllersManager : iMSLObject

@property (nonatomic, strong, readonly) NSArray *defaultExceptExplicitClasses;
@property (nonatomic, strong, readonly) NSArray *defaultExceptSubClasses;

+ (instancetype)sharedInstance;
+ (instancetype)sharedManager;
+ (instancetype)getInstance;

#pragma mark - ExceptClass
- (iMSLUIAddStateBase)addExceptExplicitClass:(Class)exceptClass;
- (iMSLUIRemoveStateBase)removeExceptExplicitClass:(Class)exceptClass;
- (iMSLUIAddStateBase)addExceptSubClass:(Class)exceptClass;
- (iMSLUIRemoveStateBase)removeExceptSubClass:(Class)exceptClass;

#pragma mark - ViewController
- (iMSLUIAddStateBase)addViewController:(UIViewController *)viewController;
- (iMSLUIAddStateBase)addViewController:(UIViewController *)viewController suffix:(NSString *)suffix;
- (iMSLUIRemoveStateBase)removeViewController:(UIViewController *)viewController;
- (iMSLUIRemoveStateBase)removeViewController:(UIViewController *)viewController suffix:(NSString *)suffix;

- (UIViewController *)viewControllerForClass:(Class)viewControllerClass;

@end
