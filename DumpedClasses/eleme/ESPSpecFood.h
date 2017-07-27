//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

#import "NVMSpecFoodDelegate.h"

@class ESPCategoryPromotion, NSArray, NSNumber, NSString;

@interface ESPSpecFood : NVMModel <NVMSpecFoodDelegate>
{
    _Bool _isNewRetailGoods;
    _Bool _inPromotionContext;
    _Bool _removeFromStock;
    _Bool _mustSuperVIP;
    unsigned long long _weight;
    long long _minPurchase;
    NSString *_foodID;
    NSString *_skuID;
    NSString *_restaurantID;
    NSString *_name;
    NSString *_detail;
    NSNumber *_price;
    NSNumber *_originPrice;
    NSArray *_specs;
    unsigned long long _stock;
    double _boxesFee;
    double _rating;
    NSString *_tips;
    ESPCategoryPromotion *_promotion;
    unsigned long long _checkoutMode;
    long long _promotionStock;
    unsigned long long _minQuantity;
    unsigned long long _maxCondition;
    unsigned long long _maxDiscountTimes;
    unsigned long long _minimumDeliveryRule;
}

+ (id)specsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool mustSuperVIP; // @synthesize mustSuperVIP=_mustSuperVIP;
@property(nonatomic) unsigned long long minimumDeliveryRule; // @synthesize minimumDeliveryRule=_minimumDeliveryRule;
@property(nonatomic) unsigned long long maxDiscountTimes; // @synthesize maxDiscountTimes=_maxDiscountTimes;
@property(nonatomic) unsigned long long maxCondition; // @synthesize maxCondition=_maxCondition;
@property(nonatomic) unsigned long long minQuantity; // @synthesize minQuantity=_minQuantity;
@property(nonatomic) _Bool removeFromStock; // @synthesize removeFromStock=_removeFromStock;
@property(nonatomic) _Bool inPromotionContext; // @synthesize inPromotionContext=_inPromotionContext;
@property(nonatomic) long long promotionStock; // @synthesize promotionStock=_promotionStock;
@property(nonatomic) unsigned long long checkoutMode; // @synthesize checkoutMode=_checkoutMode;
@property(retain, nonatomic) ESPCategoryPromotion *promotion; // @synthesize promotion=_promotion;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) double boxesFee; // @synthesize boxesFee=_boxesFee;
@property(nonatomic) unsigned long long stock; // @synthesize stock=_stock;
@property(copy, nonatomic) NSArray *specs; // @synthesize specs=_specs;
@property(copy, nonatomic) NSNumber *originPrice; // @synthesize originPrice=_originPrice;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(copy, nonatomic) NSString *skuID; // @synthesize skuID=_skuID;
@property(copy, nonatomic) NSString *foodID; // @synthesize foodID=_foodID;
@property(nonatomic) long long minPurchase; // @synthesize minPurchase=_minPurchase;
@property(nonatomic) _Bool isNewRetailGoods; // @synthesize isNewRetailGoods=_isNewRetailGoods;
@property(nonatomic) unsigned long long weight; // @synthesize weight=_weight;
- (void).cxx_destruct;
- (id)stockDescription;
- (id)stockImageDescription;
- (id)attributedPriceWithOriginalPrice;
- (id)attributedPrice;
- (double)originPriceIfHave;
@property(readonly, nonatomic) NSArray *specValues;
- (_Bool)isEqual:(id)arg1;
@property(copy, nonatomic) NSString *activityID; // @dynamic activityID;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

