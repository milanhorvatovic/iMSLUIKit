//
//  iMSLContainerViewControllerProtocol.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 19/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol iMSLContainerViewControllerProtocol <NSObject>

@end

@protocol iMSLContainerViewControllerResourcesProtocol <NSObject>

@optional

- (BOOL)needsTopLayoutGuide;

- (BOOL)needsBottomLayoutGuide;

@end