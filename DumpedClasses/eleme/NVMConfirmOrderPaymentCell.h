//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMCheckMarkCell.h"

@class NVMBookingColoredTextLabelBar, NVMPayMethod, UILabel, UIView;

@interface NVMConfirmOrderPaymentCell : NVMCheckMarkCell
{
    NVMPayMethod *_payMethod;
    UILabel *_paymentLabel;
    UIView *_mask;
    NVMBookingColoredTextLabelBar *_labelsBar;
}

+ (double)cellHeightWithPayMethod:(id)arg1;
@property(retain, nonatomic) NVMBookingColoredTextLabelBar *labelsBar; // @synthesize labelsBar=_labelsBar;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) UILabel *paymentLabel; // @synthesize paymentLabel=_paymentLabel;
@property(retain, nonatomic) NVMPayMethod *payMethod; // @synthesize payMethod=_payMethod;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)removeLabelsBarMask;
- (void)loadLabelsBarMask;
- (void)loadLabelsBar;
- (void)updateLabel;
- (void)loadLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

