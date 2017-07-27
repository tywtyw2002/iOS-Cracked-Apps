//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface NVMRetailGoodActivityView : UIView
{
    UILabel *_iconLabel;
    UILabel *_titleLabel;
    UIView *_iconBackgroundView;
    UIView *_titleBackgroundView;
}

@property(retain, nonatomic) UIView *titleBackgroundView; // @synthesize titleBackgroundView=_titleBackgroundView;
@property(retain, nonatomic) UIView *iconBackgroundView; // @synthesize iconBackgroundView=_iconBackgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *iconText;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

