//
//  ZDKConstants.h
//  ZaloSDK.CoreKit
//
//  Created by Hoang Nguyen on 9/22/15.
//  Copyright © 2015 VNG. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ZOLoginType){
    ZOLoginTypeUnknown,
    ZOLoginTypeFacebook,
    ZOLoginTypeApple,
    ZOLoginTypeZalo,
    ZOLoginTypeGooglePlus,
    ZOLoginTypeZingMe,
    ZOLoginTypeGuest
};



typedef NS_ENUM(NSInteger, ZDKErrorCode) {
    ZDKNoneErrorCode,
    ZDKUnknownErrorCode,
    ZDKInvalidErrorCode,
    ZDKTimeoutErrorCode,
    ZDKNetworkErrorCode,
    ZDKEncryptionErrorCode,
    ZDKInvalidParamsErrorCode
};


@interface ZDKConstants : NSObject

@end

#define ZDK_CORE_VERSION @"2.5.0204"
#define kZDKSDKDidFinishGetSDKIDAndPrivateKeyNotification   @"kZDKSDKDidFinishGetSDKIDAndPrivateKeyNotification"
