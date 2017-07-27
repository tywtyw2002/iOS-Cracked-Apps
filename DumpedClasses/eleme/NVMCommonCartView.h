//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NVMCartDataSubscriber.h"

@class MASConstraint, NSString, NVMCartResult, NVMCartView, UIButton;

@interface NVMCommonCartView : UIView <NVMCartDataSubscriber>
{
    _Bool _hiddenEssential;
    _Bool _hiddenCoudan;
    _Bool _alwaysHiddenEssential;
    _Bool _alwaysHideCoudanButton;
    _Bool _disableUpdateFromCartNotification;
    NVMCartView *_cartView;
    CDUnknownBlockType _cartViewTappedAction;
    CDUnknownBlockType _confirmButtonPressedAction;
    CDUnknownBlockType _coudanButtonPressedAction;
    CDUnknownBlockType _essentialButtonPressedAction;
    UIButton *_coudanButton;
    UIButton *_essentialButton;
    MASConstraint *_essentialButtonBottomConstraint;
    MASConstraint *_coudanBottomConstraint;
    id <NVMCartContextDataSource> _restaurantInfo;
    NVMCartResult *_lastCartData;
}

@property(retain, nonatomic) NVMCartResult *lastCartData; // @synthesize lastCartData=_lastCartData;
@property(retain, nonatomic) id <NVMCartContextDataSource> restaurantInfo; // @synthesize restaurantInfo=_restaurantInfo;
@property(retain, nonatomic) MASConstraint *coudanBottomConstraint; // @synthesize coudanBottomConstraint=_coudanBottomConstraint;
@property(retain, nonatomic) MASConstraint *essentialButtonBottomConstraint; // @synthesize essentialButtonBottomConstraint=_essentialButtonBottomConstraint;
@property(retain, nonatomic) UIButton *essentialButton; // @synthesize essentialButton=_essentialButton;
@property(retain, nonatomic) UIButton *coudanButton; // @synthesize coudanButton=_coudanButton;
@property(copy, nonatomic) CDUnknownBlockType essentialButtonPressedAction; // @synthesize essentialButtonPressedAction=_essentialButtonPressedAction;
@property(copy, nonatomic) CDUnknownBlockType coudanButtonPressedAction; // @synthesize coudanButtonPressedAction=_coudanButtonPressedAction;
@property(copy, nonatomic) CDUnknownBlockType confirmButtonPressedAction; // @synthesize confirmButtonPressedAction=_confirmButtonPressedAction;
@property(copy, nonatomic) CDUnknownBlockType cartViewTappedAction; // @synthesize cartViewTappedAction=_cartViewTappedAction;
@property(nonatomic) _Bool disableUpdateFromCartNotification; // @synthesize disableUpdateFromCartNotification=_disableUpdateFromCartNotification;
@property(nonatomic) _Bool alwaysHideCoudanButton; // @synthesize alwaysHideCoudanButton=_alwaysHideCoudanButton;
@property(nonatomic) _Bool alwaysHiddenEssential; // @synthesize alwaysHiddenEssential=_alwaysHiddenEssential;
@property(nonatomic) _Bool hiddenCoudan; // @synthesize hiddenCoudan=_hiddenCoudan;
@property(nonatomic) _Bool hiddenEssential; // @synthesize hiddenEssential=_hiddenEssential;
@property(retain, nonatomic) NVMCartView *cartView; // @synthesize cartView=_cartView;
- (void).cxx_destruct;
- (void)didCompleteCartResultCalculate:(id)arg1;
- (_Bool)isInCoudanRange:(id)arg1;
- (_Bool)foodCanShowInCoudanView:(id)arg1;
- (id)coudanFoods;
- (_Bool)showEssentialInfo;
- (_Bool)showAgentFee;
- (_Bool)canCoudan;
- (_Bool)reachMinDeliver;
- (void)cartViewTappedAction:(id)arg1;
@property(readonly, copy, nonatomic) NSString *restaurantID;
- (void)trackCoudanConditionChange;
- (void)dimCartCurrentButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateessentialButtonVisibility;
- (void)updateCoudanButtonVisibility;
- (void)updateSummaryInfoInCartView;
- (void)updateConfirmButtonInCartView;
- (void)updateCartView;
- (void)updateView;
- (void)updateWithRestaurantDataSource:(id)arg1;
- (void)updateWithCartContext:(id)arg1;
- (void)updateViewIfNeed:(id)arg1;
- (void)loadessentialButton;
- (void)updateCoudanConstraintWithConstant:(double)arg1;
- (void)loadCoudanButton;
- (void)loadCartView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

