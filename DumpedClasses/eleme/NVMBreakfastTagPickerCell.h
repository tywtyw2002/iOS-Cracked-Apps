//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface NVMBreakfastTagPickerCell : UICollectionViewCell
{
    UILabel *_textLabel;
    UIView *_separableView;
    UIImageView *_selectedImageView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UIView *separableView; // @synthesize separableView=_separableView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)setPickerViewModel:(id)arg1;
- (void)setTagSelected:(_Bool)arg1;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

