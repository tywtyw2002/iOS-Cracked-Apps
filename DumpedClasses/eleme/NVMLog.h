//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface NVMLog : NSObject
{
    long long _type;
    NSDictionary *_params;
}

+ (long long)logId;
+ (id)startId;
+ (void)checkKeysCollisionInDic1:(id)arg1 dic2:(id)arg2;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)logContent;
- (id)childDetailLog;

@end

