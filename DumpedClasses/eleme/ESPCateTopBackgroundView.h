//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPCateSegmentTitleView, UIButton, UIImageView, UILabel;

@interface ESPCateTopBackgroundView : UIView
{
    CDUnknownBlockType _backButtonAction;
    CDUnknownBlockType _searchButtonAction;
    CDUnknownBlockType _showAllButtonAction;
    CDUnknownBlockType _didSelectIndexAction;
    ESPCateSegmentTitleView *_segmentView;
    UILabel *_titleLabel;
    UIButton *_showAllButton;
    UIButton *_backButton;
    UIButton *_searchButton;
    UIImageView *_shadow;
}

@property(retain, nonatomic) UIImageView *shadow; // @synthesize shadow=_shadow;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *showAllButton; // @synthesize showAllButton=_showAllButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ESPCateSegmentTitleView *segmentView; // @synthesize segmentView=_segmentView;
@property(copy, nonatomic) CDUnknownBlockType didSelectIndexAction; // @synthesize didSelectIndexAction=_didSelectIndexAction;
@property(copy, nonatomic) CDUnknownBlockType showAllButtonAction; // @synthesize showAllButtonAction=_showAllButtonAction;
@property(copy, nonatomic) CDUnknownBlockType searchButtonAction; // @synthesize searchButtonAction=_searchButtonAction;
@property(copy, nonatomic) CDUnknownBlockType backButtonAction; // @synthesize backButtonAction=_backButtonAction;
- (void).cxx_destruct;
- (void)showAllButtonDidTouchUpInside:(id)arg1;
- (void)searchButtonDidTouchUpInside:(id)arg1;
- (void)backButtonDidTouchUpInside:(id)arg1;
- (void)syncBackButtonWithProgress:(double)arg1;
- (void)syncSearchButtonWithProgress:(double)arg1;
- (void)syncTitleWithProgress:(double)arg1;
- (void)syncShowAllButtonWithProgress:(double)arg1;
- (void)syncSegmentWithProgress:(double)arg1;
- (void)syncSelfHeightWithProgress:(double)arg1;
- (void)updateWithProgress:(double)arg1;
- (void)loadShadow;
- (void)loadShowAllButton;
- (void)loadSegmentView;
- (void)loadTitleLabel;
- (void)loadSearchButton;
- (void)loadBackButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

