//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMRatingStarWithTextViewCell.h"

@class NSArray, NVMCheckBoxListView, NVMOrderRating, UILabel;

@interface NVMRateRiderCell : NVMRatingStarWithTextViewCell
{
    CDUnknownBlockType _onChangedBlock;
    NVMCheckBoxListView *_checkboxListView;
    NVMOrderRating *_orderRating;
    UILabel *_unRateLabel;
    NSArray *_riderLabels;
}

@property(copy, nonatomic) NSArray *riderLabels; // @synthesize riderLabels=_riderLabels;
@property(retain, nonatomic) UILabel *unRateLabel; // @synthesize unRateLabel=_unRateLabel;
@property(retain, nonatomic) NVMOrderRating *orderRating; // @synthesize orderRating=_orderRating;
@property(retain, nonatomic) NVMCheckBoxListView *checkboxListView; // @synthesize checkboxListView=_checkboxListView;
@property(copy, nonatomic) CDUnknownBlockType onChangedBlock; // @synthesize onChangedBlock=_onChangedBlock;
- (void).cxx_destruct;
- (_Bool)hasTextInput;
- (double)cellHeight;
- (void)updateRiderLabelsForRank:(long long)arg1;
- (void)configCellWithOrderRating:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

