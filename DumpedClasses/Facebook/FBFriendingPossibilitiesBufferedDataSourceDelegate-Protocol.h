//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFriendingPossibilitiesBufferedDataSource, NSArray;

@protocol FBFriendingPossibilitiesBufferedDataSourceDelegate <NSObject>
- (void)friendingPossibilitiesDidChangeTotalCount:(long long)arg1 andUnseenCount:(long long)arg2;
- (void)friendingPossibilitiesBufferedDataSource:(FBFriendingPossibilitiesBufferedDataSource *)arg1 didUpdateEdges:(NSArray *)arg2 isReloading:(_Bool)arg3;
- (void)friendingPossibilitiesBufferedDataSource:(FBFriendingPossibilitiesBufferedDataSource *)arg1 didRemoveEdges:(NSArray *)arg2 isReloading:(_Bool)arg3;
- (void)friendingPossibilitiesBufferedDataSource:(FBFriendingPossibilitiesBufferedDataSource *)arg1 didInsertEdgesAtTail:(NSArray *)arg2;
- (void)friendingPossibilitiesBufferedDataSource:(FBFriendingPossibilitiesBufferedDataSource *)arg1 didInsertEdgesAtHead:(NSArray *)arg2;
- (void)friendingPossibilitiesBufferedDataSourceDidFinishReloading:(FBFriendingPossibilitiesBufferedDataSource *)arg1;
@end
