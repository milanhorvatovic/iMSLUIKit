//
//  CustomNavigationBar.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 29/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
//@import UIKit;

@interface iMSLNavigationBar : UINavigationBar

@property (nonatomic, weak, readonly) UIView *navigationItemView;
@property (nonatomic, weak, readonly) UILabel *navigationItemLabel;

@end
