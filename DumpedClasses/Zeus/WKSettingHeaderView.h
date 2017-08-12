//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WKSettingHeaderView : UIView
{
    CDUnknownBlockType _headHandler;
    UIImageView *_logoImgView;
    UILabel *_titleLabel;
    UIImageView *_rImageView;
    struct CGSize _fixedSize;
    struct CGSize _headerSize;
}

@property(retain, nonatomic) UIImageView *rImageView; // @synthesize rImageView=_rImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property(copy, nonatomic) CDUnknownBlockType headHandler; // @synthesize headHandler=_headHandler;
- (void).cxx_destruct;
- (void)headClick:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
