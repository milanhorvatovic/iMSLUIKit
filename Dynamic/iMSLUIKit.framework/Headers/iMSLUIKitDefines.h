//
//  iMSLUIKitDefines.h
//  iMSLUIKit
//
//  Created by Milan Horvatovic on 07/09/15.
//  Copyright (c) 2015 iMSoft Labs. All rights reserved.
//

#import <iMSLCoreKit/iMSLObject.h>

typedef NS_ENUM(NSInteger, iMSLUIAddStateBase) {
    iMSLUIAddStateBaseUnknown,
    iMSLUIAddStateBaseAdded,
    iMSLUIAddStateBaseAlreadyExists,
    iMSLUIAddStateBaseInconstence
};

typedef NS_ENUM(NSInteger, iMSLUIRemoveStateBase) {
    iMSLUIRemoveStateBaseUnknown,
    iMSLUIRemoveStateBaseRemoved,
    iMSLUIRemoveStateBaseNotExists
};

@interface iMSLUIKitDefines : iMSLObject

@end
