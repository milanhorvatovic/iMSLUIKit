//
//  ViewAnimatorBase.h
//  Droppie
//
//  Created by Milan Horvatovic on 28/11/14.
//  Copyright (c) 2014 Martin Herman. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@interface iMSLViewAnimatorBase : NSObject

- (void)showAnimationWithViews:(NSArray *)views;
- (void)showAnimationWithViews:(NSArray *)views duration:(NSTimeInterval)duration;
- (void)showAnimationWithViews:(NSArray *)views completition:(void(^)())completition;
- (void)showAnimationWithViews:(NSArray *)views duration:(NSTimeInterval)duration completition:(void(^)())completition;

- (void)hideAnimationWithViews:(NSArray *)views;
- (void)hideAnimationWithViews:(NSArray *)views duration:(NSTimeInterval)duration;
- (void)hideAnimationWithViews:(NSArray *)views completition:(void(^)())completition;
- (void)hideAnimationWithViews:(NSArray *)views duration:(NSTimeInterval)duration completition:(void(^)())completition;

@end
