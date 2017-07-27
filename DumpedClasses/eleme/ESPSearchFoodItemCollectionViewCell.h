//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ESPSearchFood, ESPSearchFoodActivityLabel, NSString, UIImageView, UILabel, UIView;

@interface ESPSearchFoodItemCollectionViewCell : UICollectionViewCell
{
    _Bool _showBottomSeparator;
    NSString *_highlight;
    double _separatorLeft;
    ESPSearchFood *_food;
    UIImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_tipsLabel;
    UILabel *_priceLabel;
    ESPSearchFoodActivityLabel *_foodActivityLabel;
    UIView *_dashSeparator;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *dashSeparator; // @synthesize dashSeparator=_dashSeparator;
@property(retain, nonatomic) ESPSearchFoodActivityLabel *foodActivityLabel; // @synthesize foodActivityLabel=_foodActivityLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) ESPSearchFood *food; // @synthesize food=_food;
@property(nonatomic) double separatorLeft; // @synthesize separatorLeft=_separatorLeft;
@property(nonatomic) _Bool showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(copy, nonatomic) NSString *highlight; // @synthesize highlight=_highlight;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)tipsFromFood:(id)arg1;
- (void)refreshViews;
- (void)loadFoodActivityLabel;
- (void)loadPriceLabel;
- (void)loadDashSeparator;
- (void)loadTipsLabel;
- (void)loadNameLabel;
- (void)loadIconView;
- (void)loadSubviews;
- (void)updateWithFood:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

