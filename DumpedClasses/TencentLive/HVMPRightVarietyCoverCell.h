//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLVideoSeriesBaseTableViewCell.h"

@class UIImageView, UILabel;

@interface HVMPRightVarietyCoverCell : QLVideoSeriesBaseTableViewCell
{
    UIImageView *_separator;
    _Bool _hideTopLine;
    _Bool _hideBottomLine;
    UILabel *_dateLabel;
}

+ (double)cellHeight;
@property(nonatomic) _Bool hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(nonatomic) _Bool hideTopLine; // @synthesize hideTopLine=_hideTopLine;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void)setCoverSelected:(_Bool)arg1;
- (void)setDateString:(id)arg1;
- (void)setSeparatorHide:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
