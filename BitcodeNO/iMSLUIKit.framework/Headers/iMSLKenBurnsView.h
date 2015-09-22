//
//  KenBurnsView.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 19/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import "iMSLView.h"

@interface iMSLKenBurnsView : iMSLView

- (void)animateWithImages:(NSArray *)images duration:(NSTimeInterval)duration looped:(BOOL)isLooped;
- (void)stopAnimation;

@end
