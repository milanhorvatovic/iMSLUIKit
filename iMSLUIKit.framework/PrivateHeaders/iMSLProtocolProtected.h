//
//  iMSLProtocolProtected.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 18/07/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
//@import Foundation;

@protocol iMSLUIInitProtocolProtected <NSObject>

- (void)_willInit;
- (void)_becomeInit;
- (void)_didInit;

@end
