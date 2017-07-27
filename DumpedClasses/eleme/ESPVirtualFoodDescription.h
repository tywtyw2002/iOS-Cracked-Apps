//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESPVirtualFood, NSAttributedString, NSString, UIColor, UIImage;

@interface ESPVirtualFoodDescription : NSObject
{
    ESPVirtualFood *_food;
    UIColor *_promotionColor;
    NSAttributedString *_attributedName;
    NSAttributedString *_attributedDetailText;
    NSAttributedString *_attributedTips;
    NSAttributedString *_attributedNameAndStock;
    NSAttributedString *_minPriceDescptionInFoodList;
    NSAttributedString *_minPriceDescptionInAdvanceMenu;
    NSAttributedString *_attributedPromotion;
    NSAttributedString *_attributedPrice;
    NSString *_accessibilityPriceString;
    NSString *_stockText;
    UIImage *_vipPromotionImage;
}

@property(retain, nonatomic) UIImage *vipPromotionImage; // @synthesize vipPromotionImage=_vipPromotionImage;
@property(copy, nonatomic) NSString *stockText; // @synthesize stockText=_stockText;
@property(copy, nonatomic) NSString *accessibilityPriceString; // @synthesize accessibilityPriceString=_accessibilityPriceString;
@property(copy, nonatomic) NSAttributedString *attributedPrice; // @synthesize attributedPrice=_attributedPrice;
@property(copy, nonatomic) NSAttributedString *attributedPromotion; // @synthesize attributedPromotion=_attributedPromotion;
@property(copy, nonatomic) NSAttributedString *minPriceDescptionInAdvanceMenu; // @synthesize minPriceDescptionInAdvanceMenu=_minPriceDescptionInAdvanceMenu;
@property(copy, nonatomic) NSAttributedString *minPriceDescptionInFoodList; // @synthesize minPriceDescptionInFoodList=_minPriceDescptionInFoodList;
@property(copy, nonatomic) NSAttributedString *attributedNameAndStock; // @synthesize attributedNameAndStock=_attributedNameAndStock;
@property(copy, nonatomic) NSAttributedString *attributedTips; // @synthesize attributedTips=_attributedTips;
@property(copy, nonatomic) NSAttributedString *attributedDetailText; // @synthesize attributedDetailText=_attributedDetailText;
@property(copy, nonatomic) NSAttributedString *attributedName; // @synthesize attributedName=_attributedName;
@property(retain, nonatomic) UIColor *promotionColor; // @synthesize promotionColor=_promotionColor;
@property(nonatomic) __weak ESPVirtualFood *food; // @synthesize food=_food;
- (void).cxx_destruct;
- (id)promotionLimitImageWithQuality:(_Bool)arg1;
- (id)promotionDetailLimitImageWithQuality:(_Bool)arg1;
- (id)promotionImageWithQuality:(_Bool)arg1;
- (id)recommendImageWithQuality:(_Bool)arg1;
- (id)stockImageWithQuality:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *promotionDescription;
@property(readonly, copy, nonatomic) NSString *detailLimitationDescription;
@property(readonly, copy, nonatomic) NSString *limitationDescription;
- (id)limitColor;
- (_Bool)showDetailPromotionLimit;
- (_Bool)showPromotionLimit;
- (_Bool)showLimitation;
- (id)qualityHotImage;
- (id)qualityFoodSignImage;
- (id)qualityFoodNewImage;
- (id)foodHotImage;
- (id)foodSignImage;
- (id)foodNewImage;
- (id)attributePriceWithPrice:(double)arg1 originPrice:(double)arg2;
- (id)foodSalePrice;
- (id)initWithFood:(id)arg1;

@end

