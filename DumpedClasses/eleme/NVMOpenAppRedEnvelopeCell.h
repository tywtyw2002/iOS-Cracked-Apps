//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class NVMOpenAppRedEnvelope, UILabel, UIView;

@interface NVMOpenAppRedEnvelopeCell : NVMTableViewCell
{
    NVMOpenAppRedEnvelope *_redEnvelope;
    UILabel *_faceValueLabel;
    UILabel *_restrictLabel;
    UILabel *_titleLabel;
    UIView *_categoryView;
    UIView *_useBgView;
}

@property(retain, nonatomic) UIView *useBgView; // @synthesize useBgView=_useBgView;
@property(retain, nonatomic) UIView *categoryView; // @synthesize categoryView=_categoryView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *restrictLabel; // @synthesize restrictLabel=_restrictLabel;
@property(retain, nonatomic) UILabel *faceValueLabel; // @synthesize faceValueLabel=_faceValueLabel;
@property(retain, nonatomic) NVMOpenAppRedEnvelope *redEnvelope; // @synthesize redEnvelope=_redEnvelope;
- (void).cxx_destruct;
- (id)labelForCategory:(id)arg1;
- (void)configureAccessibilityLabel:(id)arg1;
- (void)loadUseActionViewForEnvelope:(id)arg1;
- (void)loadCategoryLabel:(id)arg1;
- (void)setAmount:(double)arg1;
- (void)loadBackground;
- (void)loadContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

