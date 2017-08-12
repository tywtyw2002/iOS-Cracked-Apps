//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBClassProvidable-Protocol.h"
#import "FBNetworkerRequestDelegate-Protocol.h"

@class FBMessengerChatFavoriteListNetworkUpdater, FBSyncStore, FBSyncStoreWriter, FBUserSession, NSDate, NSString;
@protocol FBClock;

@interface FBMessengerChatFavoriteManager : NSObject <FBNetworkerRequestDelegate, FBClassProvidable>
{
    FBSyncStore *_syncStore;
    FBSyncStoreWriter *_syncStoreWriter;
    NSDate *_lastSetCompleted;
    FBUserSession *_userSession;
    FBMessengerChatFavoriteListNetworkUpdater *_networkUpdater;
    id <FBClock> _clock;
}

+ (id)syncPeopleFromUserIds:(id)arg1 inStore:(id)arg2;
@property(retain, nonatomic) id <FBClock> clock; // @synthesize clock=_clock;
@property(retain, nonatomic) FBMessengerChatFavoriteListNetworkUpdater *networkUpdater; // @synthesize networkUpdater=_networkUpdater;
@property(retain, nonatomic) FBUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) NSDate *lastSetCompleted; // @synthesize lastSetCompleted=_lastSetCompleted;
@property(retain, nonatomic) FBSyncStoreWriter *syncStoreWriter; // @synthesize syncStoreWriter=_syncStoreWriter;
@property(retain, nonatomic) FBSyncStore *syncStore; // @synthesize syncStore=_syncStore;
- (void).cxx_destruct;
- (void)_cleanUpState;
- (_Bool)pendingSetOperation;
- (void)setFavoriteFriends:(id)arg1 removedFriends:(id)arg2 withResult:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithSyncStore:(id)arg1 syncStoreWriter:(id)arg2 userSession:(id)arg3 clock:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
