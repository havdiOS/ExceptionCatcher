//
//  ExceptionCatcher.h
//  ExceptionCatcher
//
//  Created by OMC-HAVU1-M on 12/3/25.
//

#import <Foundation/Foundation.h>

//! Project version number for ExceptionCatcher.
FOUNDATION_EXPORT double ExceptionCatcherVersionNumber;

//! Project version string for ExceptionCatcher.
FOUNDATION_EXPORT const unsigned char ExceptionCatcherVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ExceptionCatcher/PublicHeader.h>

NS_INLINE NSException * _Nullable tryBlock(void(^_Nonnull tryBlock)(void)) {
    @try {
        tryBlock();
    }
    @catch (NSException *exception) {
        return exception;
    }
    return nil;
}
