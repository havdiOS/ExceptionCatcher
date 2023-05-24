//
//  ExceptionCatcher.h
//  UserAttributeService
//
//  Created by Le Nguyen Hoai Phong on 9/9/20.
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
