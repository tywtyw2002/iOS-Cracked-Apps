//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface NVMBatchResult : NVMModel
{
    long long _code;
    NSString *_body;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (_Bool)isRequestSucceed;

@end

