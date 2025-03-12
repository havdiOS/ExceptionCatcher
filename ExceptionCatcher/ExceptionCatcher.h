//
//  ExceptionCatcher.h
//  ExceptionCatcher
//
//  Created by OMC-HAVU1-M on 12/3/25.
//

#import <Foundation/Foundation.h>

NS_INLINE NSException * _Nullable tryBlock(void(^_Nonnull tryBlock)(void)) {
    @try {
        tryBlock();
    }
    @catch (NSException *exception) {
        return exception;
    }
    return nil;
}
