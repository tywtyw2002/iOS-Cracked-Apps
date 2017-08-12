//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MQQCallBlockerReporter : NSObject
{
    NSDate *_lastTimeForReportingEnabledStatus;
}

+ (id)defaultReporter;
@property(retain, nonatomic) NSDate *lastTimeForReportingEnabledStatus; // @synthesize lastTimeForReportingEnabledStatus=_lastTimeForReportingEnabledStatus;
- (void)dealloc;
- (id)init;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)reportSubstituteManagerEnabled;
- (void)reportEnabledStatusForManagersInBackground;
- (void)reportEnabledStatusForManagers;
- (void)reportEnabledStatusForManagersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reportIDBStatusForManager:(id)arg1;
- (void)manager:(id)arg1 didReloadDataWithError:(id)arg2;
- (void)managerWillReloadData:(id)arg1;
- (void)manager:(id)arg1 didUpdateIdentificationWithError:(id)arg2;
- (void)managerWillUpdateIdentification:(id)arg1;
- (void)manager:(id)arg1 didCheckIdentificationWithUpdateInfo:(id)arg2 error:(id)arg3;
- (void)deallocForApplication;
- (void)initForApplication;

@end
