//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NVMUser;

@interface NVMUserStore : NSObject
{
    NVMUser *_user;
    NSObject<OS_dispatch_queue> *_userIOQueue;
}

+ (void)updateUserIDToGroupDefault:(id)arg1;
+ (void)removeLocalAvatarImage;
+ (id)localUserAvatarImage;
+ (void)saveLocalAvatarImage:(id)arg1;
+ (id)userFilePath;
+ (void)loadRemoteAvatarAndSaveWithAvatar:(id)arg1;
+ (void)updateUserAvatarIfNeeded:(id)arg1;
+ (void)updateUserWithCompletion:(CDUnknownBlockType)arg1;
+ (void)updateUser;
+ (void)saveUser:(id)arg1;
+ (id)localUser;
+ (void)loadUser;
+ (id)sharedStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *userIOQueue; // @synthesize userIOQueue=_userIOQueue;
@property(retain) NVMUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)init;

@end

