//
//  CustomRootProtocol.h
//  Droppie
//
//  Created by Milan Horvatovic on 07/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@protocol iMSLViewControllerPresentatingDelegate;
@protocol iMSLViewControllerCollectionsProtocol;

@class NSFetchedResultsController;

@class iMSLViewControllerTransitionManager;

#pragma mark - Base
@protocol iMSLViewControllerProtocol <NSObject>

@property (nonatomic, strong, readonly) iMSLViewControllerTransitionManager *transitionManager;

@end

@protocol iMSLViewControllerPresentatingProtocol <NSObject>

@required
@property (nonatomic, weak, readwrite) id<iMSLViewControllerPresentatingDelegate> presentatingDelegate;

@end

#pragma mark - NSFetchedResultsController
@protocol iMSLViewControllerFetchedResultsControllerResourcesProtocol <NSObject>

@property (nonatomic, assign, readonly) BOOL autoCreateFetchedResultsController;
@property (nonatomic, assign, readonly) BOOL autoPerformFetchAfterCreateFetchedResultsController;
@property (nonatomic, assign, readonly) BOOL reloadContentViewAfterChangeContext;

@property (nonatomic, strong, readonly) NSFetchedResultsController *fetchedResultsController;

@end

#pragma mark - Collections
@protocol iMSLViewControllerCollectionsProtocol <NSObject>

@end

#pragma mark UITableView
@protocol iMSLViewControllerTableViewProtocol <iMSLViewControllerCollectionsProtocol>

@required
@property (nonatomic, weak, readonly) UITableView *tableView;

@end

#pragma mark UICollectionView
@protocol iMSLViewControllerCollectionViewProtocol <iMSLViewControllerCollectionsProtocol>

@required
@property (nonatomic, weak, readonly) UICollectionView *collectionView;

@end
