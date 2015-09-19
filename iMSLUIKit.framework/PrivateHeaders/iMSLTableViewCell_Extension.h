//
//  CustomTableViewCell_Extension.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 01/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLUIKit/iMSLTableViewCell.h>
#import <iMSLUIKit/iMSLProtocolProtected.h>

@interface iMSLTableViewCell () <
iMSLUIInitProtocolProtected
>

@property (nonatomic, weak, readwrite) IBOutlet UITableView *tableView;

@property (nonatomic, weak, readwrite) IBOutlet UIView *topSeparatorView;
@property (nonatomic, weak, readwrite) IBOutlet UIView *bottomSeparatorView;

@property (nonatomic, weak, readwrite) IBOutlet NSLayoutConstraint *_topSeparatorViewLayoutConstraintHeight;
@property (nonatomic, weak, readwrite) IBOutlet NSLayoutConstraint *_bottomSeparatorViewLayoutConstraintHeight;

@property (nonatomic, assign, readwrite) CGFloat _topSeparatorHeight;
@property (nonatomic, assign, readwrite) CGFloat _bottomSeparatorHeight;

@end
