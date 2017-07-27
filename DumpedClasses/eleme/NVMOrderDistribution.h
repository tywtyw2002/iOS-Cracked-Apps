//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString, NVMOrderLocationInfo, UIColor;

@interface NVMOrderDistribution : NVMModel
{
    _Bool _isRiderPositionAvailable;
    _Bool _isRiderValid;
    _Bool _hasDistributionInfo;
    _Bool _isHotDelivery;
    NSString *_riderName;
    NSString *_riderPhone;
    NSString *_deliveryStationPhone;
    NSString *_deliveryCompany;
    UIColor *_deliveryTypeColor;
    NVMOrderLocationInfo *_locationInfo;
    NSString *_promotionPicURL;
    NSString *_riderPageURL;
    NSString *_courierNameAndPhone;
}

+ (id)deliveryTypeColorJSONTransformer;
+ (id)locationInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isHotDelivery; // @synthesize isHotDelivery=_isHotDelivery;
@property(copy, nonatomic) NSString *courierNameAndPhone; // @synthesize courierNameAndPhone=_courierNameAndPhone;
@property(copy, nonatomic) NSString *riderPageURL; // @synthesize riderPageURL=_riderPageURL;
@property(copy, nonatomic) NSString *promotionPicURL; // @synthesize promotionPicURL=_promotionPicURL;
@property(retain, nonatomic) NVMOrderLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) UIColor *deliveryTypeColor; // @synthesize deliveryTypeColor=_deliveryTypeColor;
@property(copy, nonatomic) NSString *deliveryCompany; // @synthesize deliveryCompany=_deliveryCompany;
@property(nonatomic) _Bool hasDistributionInfo; // @synthesize hasDistributionInfo=_hasDistributionInfo;
@property(nonatomic) _Bool isRiderValid; // @synthesize isRiderValid=_isRiderValid;
@property(nonatomic) _Bool isRiderPositionAvailable; // @synthesize isRiderPositionAvailable=_isRiderPositionAvailable;
@property(copy, nonatomic) NSString *deliveryStationPhone; // @synthesize deliveryStationPhone=_deliveryStationPhone;
@property(copy, nonatomic) NSString *riderPhone; // @synthesize riderPhone=_riderPhone;
@property(copy, nonatomic) NSString *riderName; // @synthesize riderName=_riderName;
- (void).cxx_destruct;
- (_Bool)showRiderInfoCell;
- (_Bool)showRiderDetailPage;
- (_Bool)showHotDeliveryImage;
- (_Bool)showRiderLocationMap;
- (_Bool)showContactRiderButton;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

