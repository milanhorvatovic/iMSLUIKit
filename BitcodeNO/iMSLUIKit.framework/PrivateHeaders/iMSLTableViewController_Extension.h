//
//  CustomRootTableViewController_Extension.h
//  Droppie
//
//  Created by Milan Horvatovic on 07/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import "iMSLTableViewController.h"
#import "iMSLProtocolProtected.h"
#import "iMSLViewControllerProtocolProtected.h"

#import "iMSLViewControllerTransition.h"

@protocol NSFetchedResultsControllerDelegate;

@interface iMSLTableViewController ()
<
iMSLUIInitProtocolProtected,
iMSLViewControllerProtocolProtected,
iMSLViewControllerTableViewProtocolProtected,
iMSLViewControllerFetchedResultsControllerProtocolProtected,
NSFetchedResultsControllerDelegate
>

@end
