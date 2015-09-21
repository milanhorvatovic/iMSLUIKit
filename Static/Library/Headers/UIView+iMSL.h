//
//  UIView+iMSoftLabs.h
//
//  Created by Milan Horvatovic on 19/01/15.
//  Copyright (c) 2015 iMSoft Labs. All right reserved.
//

#import <UIKit/UIKit.h>

struct CGOffsetBounds {
    CGFloat minimum;
    CGFloat maximum;
};
typedef struct CGOffsetBounds CGOffsetBounds;

CG_INLINE CGOffsetBounds
CGOffsetBoundsMake(CGFloat minimum, CGFloat maximum) {
    CGOffsetBounds offsetBounds; offsetBounds.minimum = minimum; offsetBounds.maximum = maximum;
    return offsetBounds;
}

@interface UIView (LoadView)

+ (UIView *)loadViewFromNibWithName:(NSString *)nibName;
+ (UIView *)loadViewFromNibWithName:(NSString *)nibName ofKindOfClass:(Class)kindOfClass;

@end

@interface UIView (Screenshot)

- (UIImage *)convertViewToImage;
- (UIImage *)convertViewToImageWithoutNavigationbar;

@end

@interface UIView (Effects)

- (void)addParallaxEffectHorizontal:(CGOffsetBounds)horizontalOffset;
- (void)addParallaxEffectVertical:(CGOffsetBounds)verticalOffset;
- (void)addParallaxEffectHorizontal:(CGOffsetBounds)horizontalOffset vertical:(CGOffsetBounds)verticalOffset;

@end

@interface UIView (Border)

#pragma mark - Layer
- (void)addTopBorderWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addLeftBorderWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addBottomBorderWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addRightBorderWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addAllBordersWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;

#pragma mark - View Common
- (void)bringBorderViewToFront;
- (void)removeTopBorderView;
- (void)removeLeftBorderView;
- (void)removeBottomBorderView;
- (void)removeRightBorderView;
- (void)removeAllBorderViews;

#pragma mark - View
#pragma mark Content
#pragma mark With Color Width
- (void)addTopBorderViewWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addLeftBorderViewWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addBottomBorderViewWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addRightBorderViewWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addAllBorderViewsWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
#pragma mark Direct
#pragma mark With Color Width
- (void)addDirectTopBorderViewWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addDirectLeftBorderViewWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addDirectBottomBorderViewWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addDirectRightBorderViewWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;
- (void)addDirectAllBorderViewsWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth;

#pragma mark - OnePixel
#pragma mark Content
#pragma mark Static
- (void)addOnePixelTopBorder;
- (void)addOnePixelLeftBorder;
- (void)addOnePixelBottomBorder;
- (void)addOnePixelRightBorder;
- (void)addOnePixelAllBorder;
#pragma mark With Color
- (void)addOnePixelTopBorderWithColor:(UIColor *)color;
- (void)addOnePixelLeftBorderWithColor:(UIColor *)color;
- (void)addOnePixelBottomBorderWithColor:(UIColor *)color;
- (void)addOnePixelRightBorderWithColor:(UIColor *)color;
- (void)addOnePixelAllBorderWithColor:(UIColor *)color;
#pragma mark Direct
#pragma mark Static
- (void)addOnePixelDirectTopBorder;
- (void)addOnePixelDirectLeftBorder;
- (void)addOnePixelDirectBottomBorder;
- (void)addOnePixelDirectRightBorder;
- (void)addOnePixelDirectAllBorder;
#pragma mark With Color
- (void)addOnePixelDirectTopBorderWithColor:(UIColor *)color;
- (void)addOnePixelDirectLeftBorderWithColor:(UIColor *)color;
- (void)addOnePixelDirectBottomBorderWithColor:(UIColor *)color;
- (void)addOnePixelDirectRightBorderWithColor:(UIColor *)color;
- (void)addOnePixelDirectAllBorderWithColor:(UIColor *)color;

@end
