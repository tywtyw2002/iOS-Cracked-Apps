//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WopcBasicApiService.h"

#import "WopcBasicRequestModelDelegate.h"

@class NSString, WopcBasicRequestModel;

@interface WopcMtopApiService : WopcBasicApiService <WopcBasicRequestModelDelegate>
{
    WopcBasicRequestModel *_request;
}

@property(retain, nonatomic) WopcBasicRequestModel *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)dealloc;
- (void)modelDidFailedLoad:(id)arg1;
- (void)modelDidFinishLoad:(id)arg1;
- (void)executeWithView:(id)arg1 withViewController:(id)arg2 withCallback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
