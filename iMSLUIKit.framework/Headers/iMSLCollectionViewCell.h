//
//  CustomCollectionViewCell.h
//  iMSotf Labs Kit
//
//  Created by Milan Horvatovic on 05/01/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iMSLCollectionViewCell : UICollectionViewCell

@property (nonatomic, weak, readonly) UICollectionView *collectionView;

@property (nonatomic, weak, readonly) UIView *topSeparatorView;
@property (nonatomic, weak, readonly) UIView *leftSeparatorView;
@property (nonatomic, weak, readonly) UIView *bottomSeparatorView;
@property (nonatomic, weak, readonly) UIView *rightSeparatorView;

@end
