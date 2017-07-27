//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class EODRateContainerModel, NSArray, NSDictionary, NSString;

@interface EODFoodRateModel : NVMModel
{
    _Bool _isRatable;
    unsigned long long _index;
    NSString *_name;
    NSString *_foodID;
    long long _ratePoint;
    NSString *_content;
    NSArray *_tags;
    NSString *_replyContent;
    NSString *_replyDate;
    NSDictionary *_rateTags;
    EODRateContainerModel *_container;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) __weak EODRateContainerModel *container; // @synthesize container=_container;
@property(copy, nonatomic) NSDictionary *rateTags; // @synthesize rateTags=_rateTags;
@property(copy, nonatomic) NSString *replyDate; // @synthesize replyDate=_replyDate;
@property(copy, nonatomic) NSString *replyContent; // @synthesize replyContent=_replyContent;
@property(nonatomic) _Bool isRatable; // @synthesize isRatable=_isRatable;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long ratePoint; // @synthesize ratePoint=_ratePoint;
@property(copy, nonatomic) NSString *foodID; // @synthesize foodID=_foodID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *submitInfo;
- (void)setRatingTags:(id)arg1;
- (id)tagArrayWithPoint:(unsigned long long)arg1;
- (id)combinedComment;

@end

