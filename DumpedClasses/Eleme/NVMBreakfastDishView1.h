//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NVMBreakfastCornerMarkView, NVMBreakfastCurrencyLabel, NVMBreakfastDayDish1, NVMBreakfastGoodsToolBar, NVMBreakfastRatingBar, NVMBreakfastTageLabel, UIImageView, UILabel;

@interface NVMBreakfastDishView1 : UIView
{
    UIImageView *_dishImageView;
    NVMBreakfastCornerMarkView *_markView;
    UILabel *_stockWarningLabel;
    UIImageView *_restaurantImageView;
    UILabel *_restaurantLabel;
    UILabel *_dishNameLabel;
    NVMBreakfastRatingBar *_ratingView;
    UILabel *_ratingLabel;
    UILabel *_noRatingLabel;
    UILabel *_soldNumLabel;
    UILabel *_promotionsoldNumLabel;
    NVMBreakfastRatingBar *_promotionRatingView;
    UILabel *_promotionRatingLabel;
    UILabel *_promotionNoRatingLabel;
    NVMBreakfastTageLabel *_messageTagLabel;
    NVMBreakfastTageLabel *_payTagLabel;
    NVMBreakfastGoodsToolBar *_goodsOperationBar;
    UILabel *_dishSoldOutLabel;
    NVMBreakfastCurrencyLabel *_priceLabel;
    NVMBreakfastCurrencyLabel *_discountLabel;
    UIView *_partingLineView;
    NVMBreakfastDayDish1 *_currentdayDish;
}

@property(nonatomic) __weak NVMBreakfastDayDish1 *currentdayDish; // @synthesize currentdayDish=_currentdayDish;
@property(retain, nonatomic) UIView *partingLineView; // @synthesize partingLineView=_partingLineView;
@property(retain, nonatomic) NVMBreakfastCurrencyLabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) NVMBreakfastCurrencyLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *dishSoldOutLabel; // @synthesize dishSoldOutLabel=_dishSoldOutLabel;
@property(retain, nonatomic) NVMBreakfastGoodsToolBar *goodsOperationBar; // @synthesize goodsOperationBar=_goodsOperationBar;
@property(retain, nonatomic) NVMBreakfastTageLabel *payTagLabel; // @synthesize payTagLabel=_payTagLabel;
@property(retain, nonatomic) NVMBreakfastTageLabel *messageTagLabel; // @synthesize messageTagLabel=_messageTagLabel;
@property(retain, nonatomic) UILabel *promotionNoRatingLabel; // @synthesize promotionNoRatingLabel=_promotionNoRatingLabel;
@property(retain, nonatomic) UILabel *promotionRatingLabel; // @synthesize promotionRatingLabel=_promotionRatingLabel;
@property(retain, nonatomic) NVMBreakfastRatingBar *promotionRatingView; // @synthesize promotionRatingView=_promotionRatingView;
@property(retain, nonatomic) UILabel *promotionsoldNumLabel; // @synthesize promotionsoldNumLabel=_promotionsoldNumLabel;
@property(retain, nonatomic) UILabel *soldNumLabel; // @synthesize soldNumLabel=_soldNumLabel;
@property(retain, nonatomic) UILabel *noRatingLabel; // @synthesize noRatingLabel=_noRatingLabel;
@property(retain, nonatomic) UILabel *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(retain, nonatomic) NVMBreakfastRatingBar *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) UILabel *dishNameLabel; // @synthesize dishNameLabel=_dishNameLabel;
@property(retain, nonatomic) UILabel *restaurantLabel; // @synthesize restaurantLabel=_restaurantLabel;
@property(retain, nonatomic) UIImageView *restaurantImageView; // @synthesize restaurantImageView=_restaurantImageView;
@property(retain, nonatomic) UILabel *stockWarningLabel; // @synthesize stockWarningLabel=_stockWarningLabel;
@property(retain, nonatomic) NVMBreakfastCornerMarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) UIImageView *dishImageView; // @synthesize dishImageView=_dishImageView;
- (void).cxx_destruct;
- (void)setPromotionLabelsHidden:(_Bool)arg1;
- (void)setTagLabelsHidden:(_Bool)arg1;
- (void)checkAndHiddenPriceAndDiscountedLabelWithDishCount:(unsigned long long)arg1;
- (void)checkAndHiddenPriceAndDiscountedLabel;
- (void)setDishModel:(id)arg1 imageSize:(struct CGSize)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)customUIStyle;
- (void)layoutUI;
- (id)init;

@end

