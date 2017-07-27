//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESPCouponInfo, ESPFlashSellFood, ESPRebuyDescription, ESPRestaurant, ESPRestaurantLayoutConfiguration, NSArray, NSError, NSString;

@interface ESPRestautantBatchData : NSObject
{
    _Bool _isFavored;
    NSString *_restaurantID;
    ESPRestaurant *_restaurant;
    NSArray *_activies;
    ESPRestaurantLayoutConfiguration *_layout;
    ESPCouponInfo *_coupon;
    NSArray *_menu;
    ESPRebuyDescription *_rebuyDescription;
    NSArray *_boughtFoodIDs;
    ESPFlashSellFood *_flashSellFood;
    NSError *_anyError;
    NSError *_restaurantError;
    NSError *_requestError;
    unsigned long long _deliveryStatus;
}

@property(nonatomic) unsigned long long deliveryStatus; // @synthesize deliveryStatus=_deliveryStatus;
@property(retain, nonatomic) NSError *requestError; // @synthesize requestError=_requestError;
@property(retain, nonatomic) NSError *restaurantError; // @synthesize restaurantError=_restaurantError;
@property(retain, nonatomic) NSError *anyError; // @synthesize anyError=_anyError;
@property(retain, nonatomic) ESPFlashSellFood *flashSellFood; // @synthesize flashSellFood=_flashSellFood;
@property(copy, nonatomic) NSArray *boughtFoodIDs; // @synthesize boughtFoodIDs=_boughtFoodIDs;
@property(retain, nonatomic) ESPRebuyDescription *rebuyDescription; // @synthesize rebuyDescription=_rebuyDescription;
@property(copy, nonatomic) NSArray *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) ESPCouponInfo *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) ESPRestaurantLayoutConfiguration *layout; // @synthesize layout=_layout;
@property(copy, nonatomic) NSArray *activies; // @synthesize activies=_activies;
@property(nonatomic) _Bool isFavored; // @synthesize isFavored=_isFavored;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
- (void).cxx_destruct;

@end

