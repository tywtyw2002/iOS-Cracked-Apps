//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NVMBreakfastDayDish;

@interface NVMBreakfastCartDishItem : NSObject <NSCoding>
{
    _Bool _isActivityPreferential;
    int _status;
    long long _id;
    long long _dishId;
    unsigned long long _count;
    NVMBreakfastDayDish *_dayDish;
    double _totalAmount;
    double _totalDiscountedAmount;
    long long _itemGiftType;
}

@property(nonatomic) long long itemGiftType; // @synthesize itemGiftType=_itemGiftType;
@property(nonatomic) _Bool isActivityPreferential; // @synthesize isActivityPreferential=_isActivityPreferential;
@property(nonatomic) double totalDiscountedAmount; // @synthesize totalDiscountedAmount=_totalDiscountedAmount;
@property(nonatomic) double totalAmount; // @synthesize totalAmount=_totalAmount;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NVMBreakfastDayDish *dayDish; // @synthesize dayDish=_dayDish;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) long long dishId; // @synthesize dishId=_dishId;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;
- (double)giftTotalDiscountedAmount;
- (double)giftTotalAmount;
- (double)marketTotalDiscountedAmount;
- (double)marketTotalAmount;
- (double)factoryTotalDiscountedAmount;
- (double)facatortPromotionTotalDiscountedAmount;
- (double)facatortPromotionTotalAmount;
- (double)factoryTotalAmount;
- (double)normalTotalDiscouted;
- (double)normalTotalAmount;
- (_Bool)isValidDish;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

