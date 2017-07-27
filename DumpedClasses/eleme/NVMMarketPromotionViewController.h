//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

@class NVMPopLayerModel, UIImageView, UIView;

@interface NVMMarketPromotionViewController : NVMViewController
{
    CDUnknownBlockType _confirmAction;
    CDUnknownBlockType _closeAction;
    NVMPopLayerModel *_promotionModel;
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_promotionView;
}

@property(retain, nonatomic) UIImageView *promotionView; // @synthesize promotionView=_promotionView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NVMPopLayerModel *promotionModel; // @synthesize promotionModel=_promotionModel;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) CDUnknownBlockType confirmAction; // @synthesize confirmAction=_confirmAction;
- (void).cxx_destruct;
- (void)tapToCheck:(id)arg1;
- (void)closeButtonDidPressed:(id)arg1;
- (void)hideAnimation;
- (void)showAnimation;
- (void)loadContentView;
- (void)loadBackgroundView;
- (void)viewDidLoad;

@end

