//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class NVMOrderRemindReply, UILabel;

@interface NVMOrderReplyCell : NVMTableViewCell
{
    NVMOrderRemindReply *_reply;
    UILabel *_contentLabel;
    UILabel *_timeLabel;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) NVMOrderRemindReply *reply; // @synthesize reply=_reply;
- (void).cxx_destruct;
- (void)configViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

