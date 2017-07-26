//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMPBlockTask.h"

@class NSArray, NSString;

@interface AMPBindMobileUserBlockTask : NSObject <AMPBlockTask>
{
    _Bool _retryCount;
    CDUnknownBlockType _finishAction;
    NSString *_taskIdentify;
    NSArray *_users;
    NSArray *_phones;
    double _expiredTime;
}

@property(nonatomic) double expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(copy, nonatomic) NSString *taskIdentify; // @synthesize taskIdentify=_taskIdentify;
@property(nonatomic) _Bool retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) CDUnknownBlockType finishAction; // @synthesize finishAction=_finishAction;
- (void).cxx_destruct;
- (void)startTask;
- (id)initWithPhones:(id)arg1 expireTime:(double)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
