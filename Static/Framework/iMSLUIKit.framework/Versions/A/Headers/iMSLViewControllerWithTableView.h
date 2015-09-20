//
//  CustomRootWithTableViewController.h
//  Droppie
//
//  Created by Milan Horvatovic on 14/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import "iMSLViewController.h"

#import "iMSLViewControllerProtocol.h"

@interface iMSLViewControllerWithTableView : iMSLViewController
<
iMSLViewControllerProtocol,
iMSLViewControllerPresentatingProtocol,
iMSLViewControllerFetchedResultsControllerResourcesProtocol,
iMSLViewControllerTableViewProtocol,
UITableViewDelegate,
UITableViewDataSource
>

@end
