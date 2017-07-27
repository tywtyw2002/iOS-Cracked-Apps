//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NVMAuthManager : NSObject
{
}

+ (id)authAppInfoPathForClientID:(id)arg1 bundleID:(id)arg2;
+ (void)saveAuthAppInfo:(id)arg1 clientID:(id)arg2 bundleID:(id)arg3;
+ (id)authAppInfoForClientID:(id)arg1 bundleID:(id)arg2;
+ (void)callbackToApp:(id)arg1 authToken:(id)arg2 statusCode:(long long)arg3 errorMessage:(id)arg4;
+ (void)requestUserAuthWithScope:(id)arg1 token:(id)arg2 appInfo:(id)arg3;
+ (void)goAuthWithRoute:(id)arg1;
+ (void)handleAuthRoute:(id)arg1;
+ (id)authBaseRouteString;

@end

