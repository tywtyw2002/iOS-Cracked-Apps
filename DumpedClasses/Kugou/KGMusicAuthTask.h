//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class KGMusicAuthInfo, NSString;

@interface KGMusicAuthTask : NSOperation
{
    unsigned long long _behavior;
    unsigned long long _relate;
    KGMusicAuthInfo *_autoInfo;
    NSString *_moduleStr;
    double _operationValidTime;
    CDUnknownBlockType _completeCallBack;
    CDUnknownBlockType _errorCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType errorCallBack; // @synthesize errorCallBack=_errorCallBack;
@property(copy, nonatomic) CDUnknownBlockType completeCallBack; // @synthesize completeCallBack=_completeCallBack;
@property(nonatomic) double operationValidTime; // @synthesize operationValidTime=_operationValidTime;
@property(copy, nonatomic) NSString *moduleStr; // @synthesize moduleStr=_moduleStr;
@property(retain, nonatomic) KGMusicAuthInfo *autoInfo; // @synthesize autoInfo=_autoInfo;
@property(nonatomic) unsigned long long relate; // @synthesize relate=_relate;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
- (void).cxx_destruct;
- (void)main;
- (id)init;

@end
