//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WXBridgeManager, WXThreadSafeMutableDictionary;

@interface WXSDKManager : NSObject
{
    WXBridgeManager *_bridgeMgr;
    WXThreadSafeMutableDictionary *_instanceDict;
}

+ (id)moduleMgr;
+ (void)unload;
+ (void)removeInstanceforID:(id)arg1;
+ (void)storeInstance:(id)arg1 forID:(id)arg2;
+ (id)instanceForID:(id)arg1;
+ (id)bridgeMgr;
+ (id)sharedInstance;
@property(retain, nonatomic) WXThreadSafeMutableDictionary *instanceDict; // @synthesize instanceDict=_instanceDict;
@property(retain, nonatomic) WXBridgeManager *bridgeMgr; // @synthesize bridgeMgr=_bridgeMgr;
- (void).cxx_destruct;

@end

