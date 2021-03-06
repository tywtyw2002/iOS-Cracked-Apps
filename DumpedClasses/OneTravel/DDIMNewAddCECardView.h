//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class CALayer, DDIMMessageTextView, DDIMNewMessageTextView, NSString, UIButton, UILabel;

@interface DDIMNewAddCECardView : UIView <UITextViewDelegate>
{
    _Bool _isShow;
    UILabel *_titleLabel;
    UIView *_separatorLine;
    UILabel *_subTitleLabel;
    UIButton *_deletBtn;
    CALayer *_deletLayer;
    UILabel *_subLabel;
    DDIMNewMessageTextView *_subTextView;
    DDIMMessageTextView *_textView;
    CALayer *_backLayer;
    long long _maxLeng;
    UILabel *_tipLabel;
}

+ (id)cardViewWithTitleText:(id)arg1 contentText:(id)arg2 contentPlacehold:(id)arg3;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) long long maxLeng; // @synthesize maxLeng=_maxLeng;
@property(retain, nonatomic) CALayer *backLayer; // @synthesize backLayer=_backLayer;
@property(retain, nonatomic) DDIMMessageTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) DDIMNewMessageTextView *subTextView; // @synthesize subTextView=_subTextView;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) CALayer *deletLayer; // @synthesize deletLayer=_deletLayer;
@property(retain, nonatomic) UIButton *deletBtn; // @synthesize deletBtn=_deletBtn;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (_Bool)containsChinese:(id)arg1;
- (void)setupTipLabelStr:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)deleteBackward;
- (id)addCECardViewPlaceholdWithFont:(id)arg1 placehold:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 titleText:(id)arg2 contentText:(id)arg3 contentPlacehold:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

