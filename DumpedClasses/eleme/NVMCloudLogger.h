//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDAbstractLogger.h"

@class NVMLoggerFormatter;

@interface NVMCloudLogger : DDAbstractLogger
{
    NVMLoggerFormatter *_loggerFormatter;
}

@property(retain, nonatomic) NVMLoggerFormatter *loggerFormatter; // @synthesize loggerFormatter=_loggerFormatter;
- (void).cxx_destruct;
- (void)logToRemoteWithError:(id)arg1;
- (void)logToRemoteWithMessage:(id)arg1 code:(id)arg2;
- (void)logMessage:(id)arg1;
- (id)init;

@end

