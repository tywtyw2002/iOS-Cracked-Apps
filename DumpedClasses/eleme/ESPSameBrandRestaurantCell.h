//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class ESPSameBrandRestaurant, NVMSeparatorView, UILabel;

@interface ESPSameBrandRestaurantCell : NVMTableViewCell
{
    _Bool _hideSeparator;
    ESPSameBrandRestaurant *_restaurant;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    NVMSeparatorView *_separator;
}

@property(retain, nonatomic) NVMSeparatorView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) ESPSameBrandRestaurant *restaurant; // @synthesize restaurant=_restaurant;
@property(nonatomic) _Bool hideSeparator; // @synthesize hideSeparator=_hideSeparator;
- (void).cxx_destruct;
- (id)deliverSpentDescriptionFromRestaurant:(id)arg1;
- (id)distanceTextFromRestaurant:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

