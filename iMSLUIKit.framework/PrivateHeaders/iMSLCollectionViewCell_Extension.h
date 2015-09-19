//
//  CustomCollectionViewCell_Extension.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 05/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLUIKit/iMSLCollectionViewCell.h>
#import <iMSLUIKit/iMSLProtocolProtected.h>

@interface iMSLCollectionViewCell () <
iMSLUIInitProtocolProtected
>

@property (nonatomic, weak, readwrite) IBOutlet UICollectionView *collectionView;

//@property (nonatomic, weak, readwrite) IBOutlet UIView *topSeparatorView;
//@property (nonatomic, weak, readwrite) IBOutlet UIView *leftSeparatorView;
//@property (nonatomic, weak, readwrite) IBOutlet UIView *bottomSeparatorView;
//@property (nonatomic, weak, readwrite) IBOutlet UIView *rightSeparatorView;
//
//@property (nonatomic, weak, readwrite) IBOutlet NSLayoutConstraint *_topSeparatorViewLayoutConstraintHeight;
//@property (nonatomic, weak, readwrite) IBOutlet NSLayoutConstraint *_leftSeparatorViewLayoutConstraintHeight;
//@property (nonatomic, weak, readwrite) IBOutlet NSLayoutConstraint *_bottomSeparatorViewLayoutConstraintHeight;
//@property (nonatomic, weak, readwrite) IBOutlet NSLayoutConstraint *_rightSeparatorViewLayoutConstraintHeight;
//
//@property (nonatomic, assign, readwrite) CGFloat _topSeparatorHeight;
//@property (nonatomic, assign, readwrite) CGFloat _leftSeparatorHeight;
//@property (nonatomic, assign, readwrite) CGFloat _bottomSeparatorHeight;
//@property (nonatomic, assign, readwrite) CGFloat _rightSeparatorHeight;

@end
