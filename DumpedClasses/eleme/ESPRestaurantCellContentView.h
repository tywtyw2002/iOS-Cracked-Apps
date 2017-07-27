//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPRatingView, ESPRestaurant, ESPRestaurantLogoView, NSString, NVMAsyncDisplayLabel, UIImageView;

@interface ESPRestaurantCellContentView : UIView
{
    ESPRestaurant *_restaurant;
    NSString *_highlightText;
    ESPRestaurantLogoView *_logoView;
    UIImageView *_logoDecorationView;
    NVMAsyncDisplayLabel *_distanceAndTimeLabel;
    NVMAsyncDisplayLabel *_nameLabel;
    ESPRatingView *_ratingView;
    NVMAsyncDisplayLabel *_ratingAndRecentSoldLabel;
    NVMAsyncDisplayLabel *_tipsLabel;
    UIImageView *_couponIndicator;
    NVMAsyncDisplayLabel *_couponLabel;
    UIImageView *_showReasonIndicator;
    NVMAsyncDisplayLabel *_showReasonLabel;
    UIImageView *_firstIcon;
    UIImageView *_secondIcon;
    UIImageView *_deliveryItemsImageView;
}

+ (double)promotionAndBrandsWidth;
@property(retain, nonatomic) UIImageView *deliveryItemsImageView; // @synthesize deliveryItemsImageView=_deliveryItemsImageView;
@property(retain, nonatomic) UIImageView *secondIcon; // @synthesize secondIcon=_secondIcon;
@property(retain, nonatomic) UIImageView *firstIcon; // @synthesize firstIcon=_firstIcon;
@property(retain, nonatomic) NVMAsyncDisplayLabel *showReasonLabel; // @synthesize showReasonLabel=_showReasonLabel;
@property(retain, nonatomic) UIImageView *showReasonIndicator; // @synthesize showReasonIndicator=_showReasonIndicator;
@property(retain, nonatomic) NVMAsyncDisplayLabel *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(retain, nonatomic) UIImageView *couponIndicator; // @synthesize couponIndicator=_couponIndicator;
@property(retain, nonatomic) NVMAsyncDisplayLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) NVMAsyncDisplayLabel *ratingAndRecentSoldLabel; // @synthesize ratingAndRecentSoldLabel=_ratingAndRecentSoldLabel;
@property(retain, nonatomic) ESPRatingView *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) NVMAsyncDisplayLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NVMAsyncDisplayLabel *distanceAndTimeLabel; // @synthesize distanceAndTimeLabel=_distanceAndTimeLabel;
@property(retain, nonatomic) UIImageView *logoDecorationView; // @synthesize logoDecorationView=_logoDecorationView;
@property(retain, nonatomic) ESPRestaurantLogoView *logoView; // @synthesize logoView=_logoView;
@property(copy, nonatomic) NSString *highlightText; // @synthesize highlightText=_highlightText;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (double)leftEdge;
- (double)rightEdge;
- (id)LogoDecorationViewImage;
- (id)showReasonIndicatorImage;
- (id)couponIndicatorImage;
- (void)loadLogoDecorationView;
- (void)loadLogoView;
- (void)loadLogoAndDecoration;
- (void)updateCouponInfo;
- (void)updateShowReasonInfo;
- (void)updateIcons;
- (void)updateDeliveryItems;
- (void)updateTipsAndDistanceWithUIModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

