//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString, NVMBreakfastCartDishItem1;

@interface NVMBreakfastShoppingCarDateItem1 : NSObject <NSCoding>
{
    _Bool _isDeadline;
    NSString *_date;
    NSString *_day;
    NSMutableArray *_orders;
    double _priceAmount;
    unsigned long long _totalCount;
    NSMutableArray *_selectoneItems;
    NVMBreakfastCartDishItem1 *_selectItem;
    NSMutableArray *_shoppingListes;
    NSMutableArray *_giftDayItems;
    NSMutableArray *_giftActivityItems;
}

@property(retain, nonatomic) NSMutableArray *giftActivityItems; // @synthesize giftActivityItems=_giftActivityItems;
@property(retain, nonatomic) NSMutableArray *giftDayItems; // @synthesize giftDayItems=_giftDayItems;
@property(retain, nonatomic) NSMutableArray *shoppingListes; // @synthesize shoppingListes=_shoppingListes;
@property(retain, nonatomic) NVMBreakfastCartDishItem1 *selectItem; // @synthesize selectItem=_selectItem;
@property(retain, nonatomic) NSMutableArray *selectoneItems; // @synthesize selectoneItems=_selectoneItems;
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

