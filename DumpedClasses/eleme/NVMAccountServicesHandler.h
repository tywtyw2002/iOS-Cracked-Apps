//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMUserModuleServices.h"

@class NSString;

@interface NVMAccountServicesHandler : NSObject <NVMUserModuleServices>
{
}

- (void)showCameraViewControllerForFood:(id)arg1 animationType:(_Bool)arg2 upLoadCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setFlagForPushPermission;
- (Class)VIPGradeModelClass;
- (void)showUserGradePOP:(id)arg1;
- (_Bool)canShowGradePromotionWindowWithUserGrade:(id)arg1;
- (void)clearAllUserInfo;
- (Class)userModelClass;
- (void)loginSucceedWithUser:(id)arg1;
- (id)VIPViewController;
- (void)updateUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadUser;
- (id)userAvatar;
- (_Bool)isUserEmailValid;
- (id)userEmail;
- (id)userMobileMask;
- (_Bool)isUserMobileValid;
- (id)userMobile;
- (_Bool)isUserVIP;
- (id)userName;
- (_Bool)isLoggedIn;
- (_Bool)isGuest;
- (id)userID;
- (id)securePasswordCellForTable:(id)arg1;
- (Class)securePasswordCellClass;
- (id)phoneBindVerifyViewController;
- (void)configSetPasswordController:(id)arg1 shouldShowCancelButton:(_Bool)arg2 SuccessHandler:(CDUnknownBlockType)arg3;
- (id)setPasswordController;
- (id)userRedEnvelopesWebViewController;
- (id)userCenterViewController;
- (void)logoutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loginWithCompletion:(CDUnknownBlockType)arg1;
- (void)showNeedLoginAlertWithCompeletion:(CDUnknownBlockType)arg1;
- (void)showLoginViewController;
- (id)foodCameraViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

