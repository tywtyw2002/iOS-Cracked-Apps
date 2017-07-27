//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString, NVMBreakfastCartDishItem;

@interface NVMBreakfastShoppingCarDateItem : NSObject <NSCoding>
{
    _Bool _isDeadline;
    NSString *_date;
    NSString *_day;
    NSMutableArray *_orders;
    double _priceAmount;
    unsigned long long _totalCount;
    NVMBreakfastCartDishItem *_giftItem;
    NSMutableArray *_giftItems;
    NVMBreakfastCartDishItem *_promotionItem;
}

@property(retain, nonatomic) NVMBreakfastCartDishItem *promotionItem; // @synthesize promotionItem=_promotionItem;
@property(retain, nonatomic) NSMutableArray *giftItems; // @synthesize giftItems=_giftItems;
@property(retain, nonatomic) NVMBreakfastCartDishItem *giftItem; // @synthesize giftItem=_giftItem;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) double priceAmount; // @synthesize priceAmount=_priceAmount;
@property(nonatomic) _Bool isDeadline; // @synthesize isDeadline=_isDeadline;
@property(retain, nonatomic) NSMutableArray *orders; // @synthesize orders=_orders;
@property(retain, nonatomic) NSString *day; // @synthesize day=_day;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

