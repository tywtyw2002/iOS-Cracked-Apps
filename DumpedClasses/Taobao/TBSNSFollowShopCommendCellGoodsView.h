//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, TBSNSFollowShopRecommendShop;

@interface TBSNSFollowShopCommendCellGoodsView : UIView
{
    NSArray *_goods;
    NSMutableArray *_threeGoodImageViews;
    TBSNSFollowShopRecommendShop *_shop;
}

+ (double)getGoodImageWidthHeight;
@property(retain, nonatomic) TBSNSFollowShopRecommendShop *shop; // @synthesize shop=_shop;
@property(retain, nonatomic) NSMutableArray *threeGoodImageViews; // @synthesize threeGoodImageViews=_threeGoodImageViews;
@property(retain, nonatomic) NSArray *goods; // @synthesize goods=_goods;
- (void).cxx_destruct;
- (void)imageViewTap:(id)arg1;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end
