//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface AppGuideViewPage2 : UIView
{
    CDUnknownBlockType _whenClickEnter;
    CDUnknownBlockType _whenClickUserPro;
    UIImageView *_bgView;
    UIButton *_btnEnter;
    UIButton *_btnChecked;
    UIButton *_btnUserPro;
    UIView *_bottomView;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *btnUserPro; // @synthesize btnUserPro=_btnUserPro;
@property(retain, nonatomic) UIButton *btnChecked; // @synthesize btnChecked=_btnChecked;
@property(retain, nonatomic) UIButton *btnEnter; // @synthesize btnEnter=_btnEnter;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType whenClickUserPro; // @synthesize whenClickUserPro=_whenClickUserPro;
@property(copy, nonatomic) CDUnknownBlockType whenClickEnter; // @synthesize whenClickEnter=_whenClickEnter;
- (void).cxx_destruct;
- (void)doUserPro;
- (void)doEnter;
- (void)doCheck:(id)arg1;
- (void)setup;
- (id)init;

@end
