//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class EPSOrder, UILabel;

@interface EPSOrderAmountCell : UITableViewCell
{
    EPSOrder *_order;
    UILabel *_titleLabel;
    UILabel *_showDetailLabel;
    UILabel *_amountLabel;
}

@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *showDetailLabel; // @synthesize showDetailLabel=_showDetailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) EPSOrder *order; // @synthesize order=_order;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)updateUI;
- (_Bool)showDetailText;
- (void)loadButton;
- (void)loadShowDetailLabel;
- (void)loadAmountLabel;
- (void)loadTitleLabel;
- (void)loadSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

