//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMSNSController.h"

@interface NVMTaobaoController : NVMSNSController
{
    CDUnknownBlockType _getOpenIdCallBack;
}

+ (void)loadUserProfile;
+ (_Bool)handleOpenURL:(id)arg1;
+ (void)login;
+ (_Bool)isTaobaoAppInstalled;
+ (void)registApp;
+ (id)defaultController;
@property(copy, nonatomic) CDUnknownBlockType getOpenIdCallBack; // @synthesize getOpenIdCallBack=_getOpenIdCallBack;
- (void).cxx_destruct;

@end

