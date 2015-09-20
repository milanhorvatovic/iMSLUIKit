//
//  CustomTableViewCell.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 01/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iMSLTableViewCell : UITableViewCell

@property (nonatomic, weak, readonly) UITableView *tableView;

@property (nonatomic, weak, readonly) UIView *topSeparatorView;
@property (nonatomic, weak, readonly) UIView *bottomSeparatorView;

@end
