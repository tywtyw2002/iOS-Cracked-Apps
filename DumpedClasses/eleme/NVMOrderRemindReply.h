//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface NVMOrderRemindReply : NVMModel
{
    long long _replyID;
    NSString *_createdTime;
    NSString *_content;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *createdTime; // @synthesize createdTime=_createdTime;
@property(nonatomic) long long replyID; // @synthesize replyID=_replyID;
- (void).cxx_destruct;

@end

