//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMPersonalListActionModel.h"

@class NSArray, NSString;

@interface FMPersonalListActionRateModel : FMPersonalListActionModel
{
    _Bool _goodFeedback;
    NSString *_feedback;
    NSArray *_imageUrls;
    NSString *_rateInfo;
    NSString *_userId;
    NSString *_tradeId;
    NSString *_ratedUid;
    NSString *_itemId;
}

@property(nonatomic) _Bool goodFeedback; // @synthesize goodFeedback=_goodFeedback;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *ratedUid; // @synthesize ratedUid=_ratedUid;
@property(copy, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *rateInfo; // @synthesize rateInfo=_rateInfo;
@property(retain, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(copy, nonatomic) NSString *feedback; // @synthesize feedback=_feedback;
- (void).cxx_destruct;
- (double)getContHeight;
- (double)height;

@end
