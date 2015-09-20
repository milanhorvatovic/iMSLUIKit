//
//  UIImage+iMSoftLabs.h
//
//  Created by Milan Horvatovic on 21/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

CGSize CGSizeAspectFit(CGSize aspectRatio, CGSize boundingSize);
CGSize CGSizeAspectFill(CGSize aspectRatio, CGSize minimumSize);

@interface UIImage (RoundedCorners)

- (UIImage *)imageWithRoundedCornersAndSize:(CGSize)sizeToFit;

#pragma mark - Original
- (UIImage *)imageAspectFitWithRoundedCornersAndSize:(CGSize)sizeToFit;
- (UIImage *)imageAspectFillWithRoundedCornersAndSize:(CGSize)sizeToFit;

#pragma mark - Resized
- (UIImage *)imageResizedAspectFitWithRoundedCornersAndSize:(CGSize)size;
- (UIImage *)imageResizedAspectFillWithRoundedCornersAndSize:(CGSize)size;

@end
