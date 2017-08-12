//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQSharkBaseRequest.h"

@class NSArray, NSDictionary;

@interface MQQShortcutScenesRequest : MQQSharkBaseRequest
{
    NSArray *_scenesList;
    NSDictionary *_scenesBuildNumberDict;
    NSDictionary *_scenesSystemDict;
}

@property(retain, nonatomic) NSDictionary *scenesSystemDict; // @synthesize scenesSystemDict=_scenesSystemDict;
@property(retain, nonatomic) NSDictionary *scenesBuildNumberDict; // @synthesize scenesBuildNumberDict=_scenesBuildNumberDict;
@property(retain, nonatomic) NSArray *scenesList; // @synthesize scenesList=_scenesList;
- (void)didSharkDataFinish:(const vector_aa1d262e *)arg1;
- (_Bool)getCmdId:(int *)arg1 requestData:(vector_aa1d262e *)arg2;
- (void)fetchShortcutScenesList;
- (id)shortcutScenesList;
- (void)dealloc;

@end
