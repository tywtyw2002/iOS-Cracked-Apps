//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface ProtoBizSyncData : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasPf;
    _Bool _hasHasMore;
    _Bool _hasSyncKey;
    _Bool _hasBizName;
    _Bool _hasMultiDevice;
    _Bool _hasPersistentBiz;
    _Bool _hasMore;
    _Bool _multiDevice;
    _Bool _persistentBiz;
    int _bizType;
    int _pf;
    long long _syncKey;
    NSMutableArray *_oplog;
    NSString *_bizName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool persistentBiz; // @synthesize persistentBiz=_persistentBiz;
@property(nonatomic) _Bool multiDevice; // @synthesize multiDevice=_multiDevice;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSMutableArray *oplog; // @synthesize oplog=_oplog;
@property(nonatomic) long long syncKey; // @synthesize syncKey=_syncKey;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) int pf; // @synthesize pf=_pf;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasPersistentBiz; // @synthesize hasPersistentBiz=_hasPersistentBiz;
@property(readonly) _Bool hasMultiDevice; // @synthesize hasMultiDevice=_hasMultiDevice;
@property(readonly) _Bool hasBizName; // @synthesize hasBizName=_hasBizName;
@property(readonly) _Bool hasSyncKey; // @synthesize hasSyncKey=_hasSyncKey;
@property(readonly) _Bool hasHasMore; // @synthesize hasHasMore=_hasHasMore;
@property(readonly) _Bool hasPf; // @synthesize hasPf=_hasPf;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addOplog:(id)arg1;
- (void)setOplogArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

