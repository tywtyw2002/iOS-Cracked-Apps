//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMRetailPullUpViewContentView.h"

@class CAShapeLayer, UILabel, UIView;

@interface NVMRetailPullUpArrowView : NVMRetailPullUpViewContentView
{
    UIView *_backgroundView;
    UIView *_containerView;
    UILabel *_textLabel;
    CAShapeLayer *_shapeLayer;
}

@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (id)pathForProgress:(double)arg1;
- (void)configureWithState:(long long)arg1 visibleHeight:(double)arg2;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

