//
//  CustomRootWithCollectionViewController_Extension.h
//  Droppie
//
//  Created by Milan Horvatovic on 08/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import <iMSLUIKit/iMSLViewControllerWithCollectionView.h>
#import <iMSLUIKit/iMSLProtocolProtected.h>
#import <iMSLUIKit/iMSLViewController_Extension.h>

#import <iMSLUIKit/iMSLViewControllerTransitionManager.h>

@protocol NSFetchedResultsControllerDelegate;

@interface iMSLViewControllerWithCollectionView ()
<
iMSLViewControllerCollectionViewProtocolProtected,
iMSLViewControllerFetchedResultsControllerProtocolProtected,
NSFetchedResultsControllerDelegate
>

@end
