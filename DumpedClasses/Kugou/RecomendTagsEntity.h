//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface RecomendTagsEntity : NSObject
{
    unsigned long long _status;
    long long _ts;
    NSString *_msg;
    NSMutableArray *_list;
}

+ (id)getRecomendTagsWithDic:(id)arg1;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long ts; // @synthesize ts=_ts;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

