//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EBKAnimationLabel, NSAttributedString, NSMutableDictionary, NVMAddress, UIButton, UILabel;

@interface EBKConfirmOrderAddressView : UIView
{
    CDUnknownBlockType _didClickAddress;
    UILabel *_titleLabel;
    EBKAnimationLabel *_addressLabel;
    UILabel *_contactLabel;
    UIButton *_addButton;
    UILabel *_noAddressLabel;
    NVMAddress *_address;
    NSAttributedString *_emptyAddressTitle;
    NSMutableDictionary *_tagIcons;
}

+ (double)heightForAddress:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *tagIcons; // @synthesize tagIcons=_tagIcons;
@property(copy, nonatomic) NSAttributedString *emptyAddressTitle; // @synthesize emptyAddressTitle=_emptyAddressTitle;
@property(retain, nonatomic) NVMAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) UILabel *noAddressLabel; // @synthesize noAddressLabel=_noAddressLabel;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UILabel *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(retain, nonatomic) EBKAnimationLabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType didClickAddress; // @synthesize didClickAddress=_didClickAddress;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)contactString;
- (id)tagIconWithName:(id)arg1;
- (id)attributedAddressString;
- (void)udpateLayoutAnimated:(_Bool)arg1;
- (void)updateAddress:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)commonSettings;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

