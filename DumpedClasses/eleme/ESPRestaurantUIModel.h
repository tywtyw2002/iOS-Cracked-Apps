//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESPIcon, ESPRestaurant, ESPShowReasonViewModel, NSArray, NSAttributedString, NSString, UIImage;

@interface ESPRestaurantUIModel : NSObject
{
    ESPRestaurant *_restaurant;
    UIImage *_deliverImage;
    ESPIcon *_discountActivity;
    NSAttributedString *_attributedDeliverAmountAndAgentFee;
    NSAttributedString *_attributedDeliverAmountAndAgentFeeForSearch;
    NSAttributedString *_attributedDistanceAndDeliverSpent;
    NSAttributedString *_attributedRatingAndRecentSold;
    NSAttributedString *_attributedDeliverAmountAndSpent;
    NSAttributedString *_attributedPromotionInfo;
    NSAttributedString *_attributedAgentFeeInfo;
    NSAttributedString *_attributedSmallSizedName;
    NSAttributedString *_attributedSmallSizeAgentFeeInfo;
    NSAttributedString *_attributedName;
    NSAttributedString *_attributedCateName;
    NSArray *_iconImages;
    NSString *_firstIconText;
    NSString *_secondIconText;
    ESPShowReasonViewModel *_showReason;
    NSAttributedString *_attributedCateTips;
    NSAttributedString *_attributeNameWithNoAwesome;
}

@property(copy, nonatomic) NSAttributedString *attributeNameWithNoAwesome; // @synthesize attributeNameWithNoAwesome=_attributeNameWithNoAwesome;
@property(copy, nonatomic) NSAttributedString *attributedCateTips; // @synthesize attributedCateTips=_attributedCateTips;
@property(retain, nonatomic) ESPShowReasonViewModel *showReason; // @synthesize showReason=_showReason;
@property(copy, nonatomic) NSString *secondIconText; // @synthesize secondIconText=_secondIconText;
@property(copy, nonatomic) NSString *firstIconText; // @synthesize firstIconText=_firstIconText;
@property(copy, nonatomic) NSArray *iconImages; // @synthesize iconImages=_iconImages;
@property(copy, nonatomic) NSAttributedString *attributedCateName; // @synthesize attributedCateName=_attributedCateName;
@property(copy, nonatomic) NSAttributedString *attributedName; // @synthesize attributedName=_attributedName;
@property(copy, nonatomic) NSAttributedString *attributedSmallSizeAgentFeeInfo; // @synthesize attributedSmallSizeAgentFeeInfo=_attributedSmallSizeAgentFeeInfo;
@property(copy, nonatomic) NSAttributedString *attributedSmallSizedName; // @synthesize attributedSmallSizedName=_attributedSmallSizedName;
@property(copy, nonatomic) NSAttributedString *attributedAgentFeeInfo; // @synthesize attributedAgentFeeInfo=_attributedAgentFeeInfo;
@property(copy, nonatomic) NSAttributedString *attributedPromotionInfo; // @synthesize attributedPromotionInfo=_attributedPromotionInfo;
@property(copy, nonatomic) NSAttributedString *attributedDeliverAmountAndSpent; // @synthesize attributedDeliverAmountAndSpent=_attributedDeliverAmountAndSpent;
@property(copy, nonatomic) NSAttributedString *attributedRatingAndRecentSold; // @synthesize attributedRatingAndRecentSold=_attributedRatingAndRecentSold;
@property(copy, nonatomic) NSAttributedString *attributedDistanceAndDeliverSpent; // @synthesize attributedDistanceAndDeliverSpent=_attributedDistanceAndDeliverSpent;
@property(copy, nonatomic) NSAttributedString *attributedDeliverAmountAndAgentFeeForSearch; // @synthesize attributedDeliverAmountAndAgentFeeForSearch=_attributedDeliverAmountAndAgentFeeForSearch;
@property(copy, nonatomic) NSAttributedString *attributedDeliverAmountAndAgentFee; // @synthesize attributedDeliverAmountAndAgentFee=_attributedDeliverAmountAndAgentFee;
@property(retain, nonatomic) ESPIcon *discountActivity; // @synthesize discountActivity=_discountActivity;
@property(copy, nonatomic) UIImage *deliverImage; // @synthesize deliverImage=_deliverImage;
@property(nonatomic) __weak ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)footprintHasCouponImage;
- (id)footprintOrderedImage;
- (id)iconWithText:(id)arg1;
- (id)gradientStatusColors;
- (id)attributedSmallBrandIcon;
- (id)attributedPraiseRestaurant;
- (id)attributedQualityIcon;
- (id)attributedBrandIcon;
- (id)attributedNameWithHighlight:(id)arg1;
- (id)distanceText;
- (id)attributedDistanceText;
- (id)attributedAverageDeliverSpent;
- (id)attributedDeliverSpent;
- (id)attributedRating;
- (id)attributedRecentSold;
- (id)slashWithSize:(double)arg1 color:(id)arg2;
- (id)feeText;
- (id)initWithRestaurant:(id)arg1;

@end

