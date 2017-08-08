//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FAThemeImageView, FAThemeLabel, FAThemeView;

@interface FASearchHistoryCell : UICollectionViewCell
{
    id <FASearchHistoryCellDelegate> _delegate;
    FAThemeImageView *_iconImageView;
    FAThemeLabel *_titleLabel;
    FAThemeView *_sepratorView;
}

@property(retain, nonatomic) FAThemeView *sepratorView; // @synthesize sepratorView=_sepratorView;
@property(retain, nonatomic) FAThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FAThemeImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <FASearchHistoryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)createSubViews;
- (void)reloadItemModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
