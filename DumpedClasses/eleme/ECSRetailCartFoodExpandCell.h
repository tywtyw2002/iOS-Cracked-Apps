//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class UIButton, UIImageView, UITapGestureRecognizer;

@interface ECSRetailCartFoodExpandCell : NVMTableViewCell
{
    long long _foodCount;
    CDUnknownBlockType _didClickAction;
    UIButton *_expandButton;
    UITapGestureRecognizer *_tapGR;
    UIImageView *_arrow;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UITapGestureRecognizer *tapGR; // @synthesize tapGR=_tapGR;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(copy, nonatomic) CDUnknownBlockType didClickAction; // @synthesize didClickAction=_didClickAction;
@property(nonatomic) long long foodCount; // @synthesize foodCount=_foodCount;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)expandAction:(id)arg1;
- (void)setupSubviews;
- (void)setupSelf;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

