//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMCollectionViewCell.h"

@class NVMOrderRecommendFoodAndShop, NVMOrderRecommendView;

@interface NVMOrderRecommendCollectionViewCell : NVMCollectionViewCell
{
    NVMOrderRecommendFoodAndShop *_foodAndShop;
    CDUnknownBlockType _gotoRecommend;
    NVMOrderRecommendView *_recommendView;
}

@property(retain, nonatomic) NVMOrderRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(copy, nonatomic) CDUnknownBlockType gotoRecommend; // @synthesize gotoRecommend=_gotoRecommend;
@property(retain, nonatomic) NVMOrderRecommendFoodAndShop *foodAndShop; // @synthesize foodAndShop=_foodAndShop;
- (void).cxx_destruct;
- (void)configViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

