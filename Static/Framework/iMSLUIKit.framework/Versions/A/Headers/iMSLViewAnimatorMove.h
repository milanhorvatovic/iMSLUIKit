//
//  ViewAnimatorMoveBottom.h
//  Droppie
//
//  Created by Milan Horvatovic on 28/11/14.
//  Copyright (c) 2014 Martin Herman. All rights reserved.
//

#import "iMSLViewAnimatorBase.h"

typedef NS_ENUM(NSUInteger, iMSLViewAnimatorMoveDirectionType) {
    iMSLViewAnimatorMoveDirectionTypeTop,
    iMSLViewAnimatorMoveDirectionTypeLeft,
    iMSLViewAnimatorMoveDirectionTypeBottom,
    iMSLViewAnimatorMoveDirectionTypeRight
};

@interface iMSLViewAnimatorMove : iMSLViewAnimatorBase

@property (nonatomic, assign, readonly) iMSLViewAnimatorMoveDirectionType direction;

- (instancetype)initWithDirection:(iMSLViewAnimatorMoveDirectionType)direction;

@end
