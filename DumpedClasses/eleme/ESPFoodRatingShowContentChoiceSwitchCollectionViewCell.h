//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NVMSeparatorView, UIButton;

@interface ESPFoodRatingShowContentChoiceSwitchCollectionViewCell : UICollectionViewCell
{
    CDUnknownBlockType _switcherPressedAction;
    UIButton *_switcher;
    NVMSeparatorView *_topSeparator;
    NVMSeparatorView *_bottomSeparator;
}

@property(retain, nonatomic) NVMSeparatorView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) NVMSeparatorView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) UIButton *switcher; // @synthesize switcher=_switcher;
@property(copy, nonatomic) CDUnknownBlockType switcherPressedAction; // @synthesize switcherPressedAction=_switcherPressedAction;
- (void).cxx_destruct;
- (void)showAllButtonAction:(id)arg1;
- (void)loadSwitcher;
- (void)loadSeparators;
- (id)initWithFrame:(struct CGRect)arg1;

@end

