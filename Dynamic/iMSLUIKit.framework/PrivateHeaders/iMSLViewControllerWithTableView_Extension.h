//
//  CustomRootWithTableViewController_Extension.h
//  Droppie
//
//  Created by Milan Horvatovic on 14/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import "iMSLViewControllerWithTableView.h"
#import "iMSLProtocolProtected.h"
#import "iMSLViewController_Extension.h"

#import "iMSLViewControllerTransition.h"

@protocol NSFetchedResultsControllerDelegate;

@interface iMSLViewControllerWithTableView ()
<
iMSLViewControllerTableViewProtocolProtected,
iMSLViewControllerFetchedResultsControllerProtocolProtected,
NSFetchedResultsControllerDelegate
>

@end
