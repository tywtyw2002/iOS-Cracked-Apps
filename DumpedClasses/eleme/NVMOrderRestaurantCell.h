//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class UIImageView, UILabel;

@interface NVMOrderRestaurantCell : NVMTableViewCell
{
    UIImageView *_logoView;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)configCellWithOrderRating:(id)arg1;
- (void)updateIcon:(id)arg1 name:(id)arg2;
- (void)loadViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

