//
//  CustomRootWithCollectionViewController_Extension.h
//  Droppie
//
//  Created by Milan Horvatovic on 08/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import "iMSLViewControllerWithCollectionView.h"
#import "iMSLProtocolProtected.h"
#import "iMSLViewController_Extension.h"

#import "iMSLViewControllerTransitionManager.h"

@protocol NSFetchedResultsControllerDelegate;

@interface iMSLViewControllerWithCollectionView ()
<
iMSLViewControllerCollectionViewProtocolProtected,
iMSLViewControllerFetchedResultsControllerProtocolProtected,
NSFetchedResultsControllerDelegate
>

@end
