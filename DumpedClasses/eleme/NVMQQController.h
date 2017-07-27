//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMSNSController.h"

#import "QQApiInterfaceDelegate.h"
#import "TencentSessionDelegate.h"

@class NSString, TencentOAuth;

@interface NVMQQController : NVMSNSController <TencentSessionDelegate, QQApiInterfaceDelegate>
{
    TencentOAuth *_OAuthInstance;
    CDUnknownBlockType _getOpenIdCallBack;
}

+ (_Bool)handleOpenURL:(id)arg1;
+ (void)loadUserProfile;
+ (void)gotoInstallQQWithMessage:(id)arg1;
+ (void)login;
+ (_Bool)isQQAppInstalled;
+ (void)registApp;
+ (id)defaultController;
@property(copy, nonatomic) CDUnknownBlockType getOpenIdCallBack; // @synthesize getOpenIdCallBack=_getOpenIdCallBack;
@property(retain, nonatomic) TencentOAuth *OAuthInstance; // @synthesize OAuthInstance=_OAuthInstance;
- (void).cxx_destruct;
- (void)onReq:(id)arg1;
- (void)isOnlineResponse:(id)arg1;
- (void)onResp:(id)arg1;
- (void)getUserInfoResponse:(id)arg1;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(_Bool)arg1;
- (void)tencentDidLogin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

