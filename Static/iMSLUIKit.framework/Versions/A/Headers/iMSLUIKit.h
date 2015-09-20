//
//  UIKit.h
//  UIKit
//
//  Created by Milan Horvatovic on 16/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

//! Project version number for UIKit.
//#ifdef UI_DEPENDENCY
extern double UIKitVersionNumber;
//#else
//FOUNDATION_EXPORT double UIKitVersionNumber;
//#endif

//! Project version string for UIKit.
//#ifdef UI_DEPENDENCY
extern const unsigned char UIKitVersionString[];
//#else
//FOUNDATION_EXPORT const unsigned char UIKitVersionString[];
//#endif

// In this header, you should import all the public headers of your framework using statements like #import <UIKit/PublicHeader.h>

#pragma mark - Common -
#import <iMSLUIKit/iMSLUIKitDefines.h>
#import <iMSLUIKit/iMSLUIValidatesFunctions.h>

#pragma mark - ApplicationDelegate
#import <iMSLUIKit/iMSLApplicationDelegate.h>

#pragma mark - Responder
#import <iMSLUIKit/iMSLResponder.h>

#pragma mark - Category -
#pragma mark UIColor
#import <iMSLUIKit/UIColor+iMSL.h>
#pragma mark UIView
#import <iMSLUIKit/UIView+iMSL.h>
#pragma mark UIImage
#import <iMSLUIKit/UIImage+iMSL.h>
#pragma mark UINavigation
#import <iMSLUIKit/UINavigationBar+iMSL.h>
#import <iMSLUIKit/UINavigationItem+iMSL.h>

#pragma mark - Manager -
#import <iMSLUIKit/iMSLViewControllersManager.h>
#pragma mark UIFont
#import <iMSLUIKit/iMSLUIFontManager.h>

#pragma mark - Component -
#pragma mark Textable
#pragma mark |-> Button
#import <iMSLUIKit/iMSLButton.h>
#import <iMSLUIKit/iMSLRoundedButton.h>
#import <iMSLUIKit/iMSLAttributedButton.h>
#import <iMSLUIKit/iMSLAttributedRoundedButton.h>
#pragma mark |-> Label
#import <iMSLUIKit/iMSLLabel.h>
#import <iMSLUIKit/iMSLRoundedLabel.h>
#import <iMSLUIKit/iMSLAttributedLabel.h>
#import <iMSLUIKit/iMSLAttributedRoundedLabel.h>
#pragma mark |-> TextView
#import <iMSLUIKit/iMSLTextView.h>
#import <iMSLUIKit/iMSLAttributedTextView.h>
#pragma mark |-> TextField
#import <iMSLUIKit/iMSLTextField.h>
#import <iMSLUIKit/iMSLAttributedTextField.h>
#pragma mark Collections
#pragma mark |-> UITableViewCell
#import <iMSLUIKit/iMSLTableViewCell.h>
#pragma mark |-> UICollectionViewCell
#import <iMSLUIKit/iMSLCollectionViewCell.h>
#pragma mark ImageView
#import <iMSLUIKit/iMSLImageView.h>
#pragma mark |-> Circle
#import <iMSLUIKit/iMSLCircleImageView.h>
#pragma mark Bar
#pragma mark |-> NavigationBar
#import <iMSLUIKit/iMSLNavigationBar.h>
#pragma mark |-> Toolbar
#import <iMSLUIKit/iMSLToolbar.h>
#pragma mark Map
#import <iMSLUIKit/iMSLMapView.h>

#pragma mark - View -
#import <iMSLUIKit/iMSLView.h>
#pragma mark KenBurns
#import <iMSLUIKit/iMSLKenBurnsView.h>
#pragma mark Animator
#import <iMSLUIKit/iMSLViewAnimator.h>
//#pragma mark |-> Base
//#import <iMSLUIKit/iMSLViewAnimatorBase.h>
//#pragma mark |-> Specific
//#import <iMSLUIKit/iMSLViewAnimatorCrossDissolve.h>
//#import <iMSLUIKit/iMSLViewAnimatorMove.h>
//#import <iMSLUIKit/iMSLViewAnimatorFlightBack.h>
//#import <iMSLUIKit/iMSLViewAnimatorSuckedToBackground.h>

#pragma mark - Controller
#import <iMSLUIKit/iMSLViewControllerProtocol.h>
#import <iMSLUIKit/iMSLViewController.h>
#pragma mark |-> PageViewController
#import <iMSLUIKit/iMSLPageViewControllerProtocol.h>
#pragma mark |-> Collections
#import <iMSLUIKit/iMSLTableViewController.h>
#import <iMSLUIKit/iMSLViewControllerWithTableView.h>
#import <iMSLUIKit/iMSLCollectionViewController.h>
#import <iMSLUIKit/iMSLViewControllerWithCollectionView.h>
#pragma mark |-> Container
#import <iMSLUIKit/iMSLContainerViewControllerProtocol.h>
#import <iMSLUIKit/iMSLContainerViewController.h>
#import <iMSLUIKit/iMSLStoryboardLinkViewController.h>
#import <iMSLUIKit/iMSLReplaceableContainerViewController.h>
#import <iMSLUIKit/iMSLModalContainerViewController.h>
#pragma mark |-> Content
#import <iMSLUIKit/iMSLNavigationController.h>
#import <iMSLUIKit/iMSLTabBarController.h>
#pragma mark Transition
#import <iMSLUIKit/iMSLViewControllerTransition.h>
//#pragma mark |-> Manager
//#import <iMSLUIKit/iMSLViewControllerTransitionManager.h>
//#pragma mark |-> Interactive
//#import <iMSLUIKit/iMSLViewControllerCommonTransitionInteractive.h>
//#pragma mark |-> Presentation
//#import <iMSLUIKit/iMSLViewControllerTransitionCommonPresentationController.h>
//#import <iMSLUIKit/iMSLViewControllerTransitionDimmingPresentationController.h>
//#import <iMSLUIKit/iMSLViewControllerTransitionPushPresentationController.h>
//#pragma mark |-> Animator
//#pragma mark |--> Base
//#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorBase.h>
//#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorSpringBase.h>
//#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorCombined.h>
//#pragma mark |--> Specific
//#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorCrossDissolve.h>
//#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorMove.h>
//#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorMoveFrom.h>
//#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorTurn.h>
//#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorPush.h>
//#import <iMSLUIKit/iMSLViewControllerTransitionAnimatorVerticalCard.h>
