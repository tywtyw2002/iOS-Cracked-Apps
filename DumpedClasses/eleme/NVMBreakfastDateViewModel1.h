//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NVMBreakfastDateViewModel1 : NSObject
{
    _Bool _hasGoods;
    _Bool _isSelected;
    _Bool _promotion;
    _Bool _hasGift;
    _Bool _isTimer;
    NSString *_weekString;
    NSString *_dayString;
    NSString *_date;
    unsigned long long _cellType;
    long long _leftTime;
    unsigned long long _leftType;
    long long _dishCount;
}

@property(nonatomic) _Bool isTimer; // @synthesize isTimer=_isTimer;
@property(nonatomic) long long dishCount; // @synthesize dishCount=_dishCount;
@property(nonatomic) unsigned long long leftType; // @synthesize leftType=_leftType;
@property(nonatomic) long long leftTime; // @synthesize leftTime=_leftTime;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) _Bool hasGift; // @synthesize hasGift=_hasGift;
@property(nonatomic) _Bool promotion; // @synthesize promotion=_promotion;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool hasGoods; // @synthesize hasGoods=_hasGoods;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *dayString; // @synthesize dayString=_dayString;
@property(copy, nonatomic) NSString *weekString; // @synthesize weekString=_weekString;
- (void).cxx_destruct;

@end

