//
//  CustomRootWithCollectionViewController.h
//  Droppie
//
//  Created by Milan Horvatovic on 08/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import <iMSLUIKit/iMSLViewController.h>

#import <iMSLUIKit/iMSLViewControllerProtocol.h>

@interface iMSLViewControllerWithCollectionView : iMSLViewController
<
iMSLViewControllerProtocol,
iMSLViewControllerPresentatingProtocol,
iMSLViewControllerFetchedResultsControllerResourcesProtocol,
iMSLViewControllerCollectionViewProtocol,
UICollectionViewDelegate,
UICollectionViewDataSource
>

@end
