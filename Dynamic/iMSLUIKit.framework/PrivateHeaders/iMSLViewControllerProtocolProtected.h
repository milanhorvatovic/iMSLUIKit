//
//  CustomRootProtocol.h
//  Droppie
//
//  Created by Milan Horvatovic on 07/01/15.
//  Copyright (c) 2015 Martin Herman. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@protocol iMSLUIInitProtocolProtected;
@protocol iMSLViewControllerProtocol;
@protocol iMSLViewControllerFetchedResultsControllerResourcesProtocol;

@class NSManagedObjectContext;
@class NSEntityDescription;
@class NSFetchedResultsController;

@class iMSLViewControllerTransitionManager;
@class iMSLViewControllerTransitionAnimatorBase;

@class iMSLTableViewCell;
@class iMSLCollectionViewCell;

@protocol iMSLViewControllerProtocolProtected <iMSLUIInitProtocolProtected, iMSLViewControllerProtocol>

@property (nonatomic, strong, readwrite) iMSLViewControllerTransitionManager *transitionManager;

#pragma mark - Protected
#pragma mark TransitionAnimator
- (void)_setTransitionAnimator:(iMSLViewControllerTransitionAnimatorBase *)transitionAnimator;

@end

#pragma mark - UINavigationBar
@protocol iMSLNavigationBarProtocolProtected <NSObject>

#pragma mark Class
#pragma mark BackButton
@optional
+ (BOOL)_allowedReplaceTitleFromBarBackButtonForPushedController;
+ (NSString *)_textToReplaceTitleFromBarBackButtonForPushedController;

@end

#pragma mark - NSFetchedResultsController
@protocol iMSLViewControllerFetchedResultsControllerProtocolProtected <iMSLViewControllerFetchedResultsControllerResourcesProtocol>

@property (nonatomic, assign, readwrite) BOOL autoCreateFetchedResultsController;
@property (nonatomic, assign, readwrite) BOOL autoPerformFetchAfterCreateFetchedResultsController;
@property (nonatomic, assign, readwrite) BOOL reloadContentViewAfterChangeContext;

@property (nonatomic, strong, readwrite) NSFetchedResultsController *fetchedResultsController;

@optional
- (NSManagedObjectContext *)_contextForFetchedResultsController;
- (NSEntityDescription *)_entityDescriptionForFetchedResultsController;
- (NSString *)_entityNameForFetchedResultsController;
- (NSPredicate *)_predicateForFetchedResultsController;
- (NSArray *)_sortDescriptorsForFetchedResultsController;
- (NSString *)_sectionNameKeyForFetchedResultsController;
- (NSString *)_cacheNameForFetchedResultsController;

- (void)_loadFetchedResultsController;

@required;
- (NSFetchedResultsController *)_fetchedResultsControllerImmediatelly;

@end

#pragma mark - Collections
@protocol iMSLViewControllerCollectionsProtocolProtected <NSObject>

@required
- (NSString *)_dequequeReusableIdentifierForCollectionsView:(UIView *)collectionsView atIndexPath:(NSIndexPath *)indexPath;

- (NSInteger)_numberOfFetchedObjects;
- (NSInteger)_numberOfFetchedObjectsInSection:(NSInteger)section;

@end

#pragma mark |-> UITableView
@protocol iMSLViewControllerTableViewProtocolProtected <iMSLViewControllerCollectionsProtocolProtected>

@required
@property (nonatomic, weak, readwrite) IBOutlet UITableView *tableView;

@optional
- (UITableViewCell *)_createCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath;
- (NSString *)_nibNameForCellNibForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath;
- (Class)_classOfKindOfClassCellNibForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath;

@optional
- (void)_tableView:(UITableView *)tableView initCell:(UITableViewCell *)cell cellForRowAtIndexPath:(NSIndexPath *)indexPath;
@required
- (void)_tableView:(UITableView *)tableView configureCell:(UITableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;

@end

#pragma mark |-> UICollectionView
@protocol iMSLViewControllerCollectionViewProtocolProtected <iMSLViewControllerCollectionsProtocolProtected>

@required
@property (nonatomic, weak, readwrite) IBOutlet UICollectionView *collectionView;

@optional
- (UICollectionViewCell *)_createCellForCollectionView:(UICollectionView *)collectionView atIndexPath:(NSIndexPath *)indexPath;
- (NSString *)_nibNameForCellNibForCollectionView:(UICollectionView *)collectionView atIndexPath:(NSIndexPath *)indexPath;
- (Class)_classOfKindOfClassCellNibForCollectionView:(UICollectionView *)collectionView atIndexPath:(NSIndexPath *)indexPath;

@optional
- (void)_collectionView:(UICollectionView *)collectionView initCell:(UICollectionViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;
@required
- (void)_collectionView:(UICollectionView *)collectionView configureCell:(UICollectionViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;

@required
@property (atomic, strong, readonly) NSMutableArray *_sectionChanges;
@property (atomic, strong, readonly) NSMutableArray *_itemChanges;
- (void)_initCollectionChanges;
- (void)_clearCollectionChanges;

@end
