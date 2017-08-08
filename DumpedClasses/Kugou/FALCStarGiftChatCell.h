//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FALCBaseChatCell.h"

#import "FAOHAttributedLabelDelegate.h"

@class FALCMessage, FAOHAttributedLabel, NSDictionary, NSMutableAttributedString, NSString, UIButton, UIImageView, UILabel;

@interface FALCStarGiftChatCell : FALCBaseChatCell <FAOHAttributedLabelDelegate>
{
    id <FALCStarGiftChatCellDelegate> _delegate;
    FALCMessage *_fxMsg;
    NSDictionary *_msgDic;
    FAOHAttributedLabel *_attributedLabel;
    NSMutableAttributedString *_mutString;
    UIButton *_sendBtn;
    UILabel *_sgLabel;
    UIButton *_receiveBtn;
    UIImageView *_giftImgView;
    UILabel *_numLabel;
}

+ (double)senderHeightOfMsg:(id)arg1;
+ (double)cellHeight;
+ (id)parseData:(id)arg1;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UIImageView *giftImgView; // @synthesize giftImgView=_giftImgView;
@property(retain, nonatomic) UIButton *receiveBtn; // @synthesize receiveBtn=_receiveBtn;
@property(retain, nonatomic) UILabel *sgLabel; // @synthesize sgLabel=_sgLabel;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) NSMutableAttributedString *mutString; // @synthesize mutString=_mutString;
@property(retain, nonatomic) FAOHAttributedLabel *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
@property(retain, nonatomic) NSDictionary *msgDic; // @synthesize msgDic=_msgDic;
@property(retain, nonatomic) FALCMessage *fxMsg; // @synthesize fxMsg=_fxMsg;
@property(nonatomic) __weak id <FALCStarGiftChatCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)receiverAction;
- (void)senderAction;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)updateView;
- (id)getNewGiftUrlByGiftId:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)initView;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
