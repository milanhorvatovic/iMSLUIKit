//
//  CustomRootWithTableViewController_Extension.h
//  Droppie
//
//  Created by Milan Horvatovic on 14/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import <iMSLUIKit/iMSLViewControllerWithTableView.h>
#import <iMSLUIKit/iMSLProtocolProtected.h>
#import <iMSLUIKit/iMSLViewController_Extension.h>

#import <iMSLUIKit/iMSLViewControllerTransition.h>

@protocol NSFetchedResultsControllerDelegate;

@interface iMSLViewControllerWithTableView ()
<
iMSLViewControllerTableViewProtocolProtected,
iMSLViewControllerFetchedResultsControllerProtocolProtected,
NSFetchedResultsControllerDelegate
>

@end
