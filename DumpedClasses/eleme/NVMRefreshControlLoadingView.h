//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImageView;

@interface NVMRefreshControlLoadingView : UIView
{
    _Bool _loading;
    double _fillPercent;
    NSArray *_elements;
    UIImageView *_box;
    UIImageView *_shade;
    UIImageView *_leftHandle;
    UIImageView *_rightHandle;
    UIView *_boxWrapper;
    UIImageView *_slogan;
}

@property(retain, nonatomic) UIImageView *slogan; // @synthesize slogan=_slogan;
@property(retain, nonatomic) UIView *boxWrapper; // @synthesize boxWrapper=_boxWrapper;
@property(retain, nonatomic) UIImageView *rightHandle; // @synthesize rightHandle=_rightHandle;
@property(retain, nonatomic) UIImageView *leftHandle; // @synthesize leftHandle=_leftHandle;
@property(retain, nonatomic) UIImageView *shade; // @synthesize shade=_shade;
@property(retain, nonatomic) UIImageView *box; // @synthesize box=_box;
@property(retain, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(nonatomic) double fillPercent; // @synthesize fillPercent=_fillPercent;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (void)setSloganHidden:(_Bool)arg1;
- (id)imageNameWithOriginalImageName:(id)arg1 modifiedForMode:(unsigned long long)arg2;
- (long long)randomYTranslationValue;
- (long long)randomXTranslationValueWithDirectionFlag:(_Bool)arg1;
- (id)imageViewWithAutoBoundsForImageName:(id)arg1;
- (double)percentForSloganAlphaWithPercent:(double)arg1;
- (struct CGPoint)sloganCenterForPercent:(double)arg1;
- (void)updateSloganWithFillPercent:(double)arg1;
- (struct CGAffineTransform)transformForRightHandleWithFillPercent:(double)arg1;
- (void)updateRightHandleWithFillPercent:(double)arg1;
- (struct CGAffineTransform)transformForLeftHandleWithFillPercent:(double)arg1;
- (void)updateLeftHandleWithFillPercent:(double)arg1;
- (double)boxHandleRotationPercentForPercent:(double)arg1;
- (struct CGPoint)boxWrapperCenterForPercent:(double)arg1;
- (double)alphaForFillPercent:(double)arg1;
- (void)updateWithFillPercent:(double)arg1;
- (void)animationForStoppingLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateEjection;
- (void)animationForLoading;
- (void)didMoveToWindow;
- (void)updateUIForPullToRefreshViewBackgroundMode:(unsigned long long)arg1;
- (void)initElements;
- (id)init;

@end

