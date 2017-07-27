//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIButton, UIImageView;

@interface ESPRestaurantOverflowMenuView : UIView
{
    _Bool _isFavored;
    CDUnknownBlockType _buttonAction;
    UIButton *_multiOrderButton;
    UIButton *_inShopSearchButton;
    UIButton *_shareShopButton;
    UIImageView *_couponBadge;
    UIView *_redNote;
    UIButton *_restaurantDetailButton;
    UIButton *_favorButton;
    unsigned long long _types;
    NSArray *_accessibleElements;
}

@property(copy, nonatomic) NSArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(nonatomic) unsigned long long types; // @synthesize types=_types;
@property(retain, nonatomic) UIButton *favorButton; // @synthesize favorButton=_favorButton;
@property(retain, nonatomic) UIButton *restaurantDetailButton; // @synthesize restaurantDetailButton=_restaurantDetailButton;
@property(retain, nonatomic) UIView *redNote; // @synthesize redNote=_redNote;
@property(retain, nonatomic) UIImageView *couponBadge; // @synthesize couponBadge=_couponBadge;
@property(retain, nonatomic) UIButton *shareShopButton; // @synthesize shareShopButton=_shareShopButton;
@property(retain, nonatomic) UIButton *inShopSearchButton; // @synthesize inShopSearchButton=_inShopSearchButton;
@property(retain, nonatomic) UIButton *multiOrderButton; // @synthesize multiOrderButton=_multiOrderButton;
@property(nonatomic) _Bool isFavored; // @synthesize isFavored=_isFavored;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
- (void).cxx_destruct;
- (void)hideCouponBadge;
- (void)showCouponBadge;
- (void)didMoveToWindow;
- (void)generateAccessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)buttonPressed:(id)arg1;
- (void)hideBagdeOnView:(id)arg1;
- (void)addBadgeOnView:(id)arg1;
- (void)addSeperatorLineWithTopPosition:(double)arg1;
- (id)templateButtonByTitle:(id)arg1 imageName:(id)arg2;
- (void)loadCouponBadge;
- (void)setupButtonsFrame:(id)arg1;
- (void)commontInit;
- (id)init;
- (id)initWithTypes:(unsigned long long)arg1;

@end

