//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMJSInterface.h"

@class NSString, NVMWebViewController;

@interface NVMJSBridge : NSObject <NVMJSInterface>
{
    NVMWebViewController *_webViewController;
}

+ (id)__elm_export__hookGoback16215;
+ (id)__elm_export__defaultHeightOfTopBar15714;
+ (id)__elm_export__contactList14213;
+ (id)__elm_export__shouldShowNewRetailRedBadge13812;
+ (id)__elm_export__exitConfirm10111;
+ (id)__elm_export__networkType9710;
+ (id)__elm_export__removeRightBarItems939;
+ (id)__elm_export__showRightBarItems898;
+ (id)__elm_export__getUserID817;
+ (id)__elm_export__closePage676;
+ (id)__elm_export__getLocateStatus635;
+ (id)__elm_export__setTitle474;
+ (id)__elm_export__selectCoupon413;
+ (id)__elm_export__selectHongbao352;
+ (id)__elm_export__getGlobalGeohash311;
+ (id)__elm_export__getUserLocation260;
@property(nonatomic) __weak NVMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (void)hookGoback:(id)arg1;
- (id)defaultHeightOfTopBar;
- (void)queryContactListMaxCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldShowNewRetailRedBadge;
- (void)exitConfirm:(id)arg1;
- (id)networkType;
- (void)removeRightBarItems;
- (void)showRightBarItems:(id)arg1;
- (id)getUserID;
- (void)closePage;
- (unsigned long long)getLocateStatus;
- (void)setTitle:(id)arg1;
- (void)selectCoupon:(id)arg1;
- (void)selectHongbao:(id)arg1;
- (id)getGlobalGeohash;
- (id)getUserLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

