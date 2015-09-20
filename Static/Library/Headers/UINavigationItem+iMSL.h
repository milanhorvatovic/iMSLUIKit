//
//  UINavigationItem+Category.h
//
//  Created by Milan Horvatovic on 25/11/14.
//  Copyright (c) 2014 Milan Horvatovič. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationItem (MultipleButtonsAddition)

@property (nonatomic, strong) IBOutletCollection(UIBarButtonItem) NSArray *rightBarButtonItemsCollection;
@property (nonatomic, strong) IBOutletCollection(UIBarButtonItem) NSArray *leftBarButtonItemsCollection;

@end
