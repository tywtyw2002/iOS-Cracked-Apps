//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class ESPCapacityToolTipView, ESPRestaurant, UIImageView, UILabel;

@interface ESPRestaurantPromotionView : UIControl
{
    ESPRestaurant *_restaurant;
    CDUnknownBlockType _didTouchedPromotionViewAction;
    UILabel *_contentLabel;
    UILabel *_notificationLabel;
    UIImageView *_moreImageView;
    ESPCapacityToolTipView *_toolTipView;
    UIImageView *_capacityImageView;
}

@property(retain, nonatomic) UIImageView *capacityImageView; // @synthesize capacityImageView=_capacityImageView;
@property(retain, nonatomic) ESPCapacityToolTipView *toolTipView; // @synthesize toolTipView=_toolTipView;
@property(retain, nonatomic) UIImageView *moreImageView; // @synthesize moreImageView=_moreImageView;
@property(retain, nonatomic) UILabel *notificationLabel; // @synthesize notificationLabel=_notificationLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(copy, nonatomic) CDUnknownBlockType didTouchedPromotionViewAction; // @synthesize didTouchedPromotionViewAction=_didTouchedPromotionViewAction;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (void)dismissToolTipAnimated;
- (void)startAnimateIfNeeded;
- (void)touchAction:(id)arg1;
- (void)layoutSubviews;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;
- (id)initWithRestaurant:(id)arg1;

@end

