//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableFooterView.h"

@class UILabel;

@interface NVMCallingFooterView : NVMTableFooterView
{
    _Bool _callEnable;
    CDUnknownBlockType _tapBlcok;
    UILabel *_tipLabel;
}

+ (void)successAlert;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) _Bool callEnable; // @synthesize callEnable=_callEnable;
@property(copy, nonatomic) CDUnknownBlockType tapBlcok; // @synthesize tapBlcok=_tapBlcok;
- (void).cxx_destruct;
- (id)attributedTitleString;
- (void)voiceCodeTapped:(id)arg1;
- (void)addGesture;
- (void)loadTipLabel;
- (id)initWithReuseIdentifier:(id)arg1;

@end

