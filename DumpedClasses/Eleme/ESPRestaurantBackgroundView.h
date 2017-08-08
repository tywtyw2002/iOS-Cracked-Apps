//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPRestaurant, ESPRestaurantInfoView, UIImageView;

@interface ESPRestaurantBackgroundView : UIView
{
    ESPRestaurant *_restaurant;
    ESPRestaurantInfoView *_infoView;
    UIImageView *_blurBackgroundView;
}

@property(retain, nonatomic) UIImageView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) ESPRestaurantInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (void)presetWithRestaurant:(id)arg1;
- (void)updateBlurViewWithOriginImage:(id)arg1;
- (void)updateAlpha:(double)arg1;
- (id)getCropedImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end
