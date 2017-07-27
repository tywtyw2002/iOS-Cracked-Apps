//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

@class NVMFeedBackPaintingView, UIButton, UIImage, UILabel, UITextView, UIView;

@interface NVMShakeFeedBackViewController : NVMViewController
{
    _Bool _userPainted;
    UIImage *_screenImage;
    UIView *_naviBar;
    UIButton *_rightBarButtonItem;
    UIButton *_leftBarButtonItem;
    NVMFeedBackPaintingView *_paintView;
    UIView *_bottomToolView;
    UIView *_editIndicator;
    UIView *_feedBackBackGroundView;
    UITextView *_feedBackTextView;
    UILabel *_tipLabel;
    UIButton *_clearButton;
}

@property(nonatomic) _Bool userPainted; // @synthesize userPainted=_userPainted;
@property(nonatomic) __weak UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UITextView *feedBackTextView; // @synthesize feedBackTextView=_feedBackTextView;
@property(nonatomic) __weak UIView *feedBackBackGroundView; // @synthesize feedBackBackGroundView=_feedBackBackGroundView;
@property(nonatomic) __weak UIView *editIndicator; // @synthesize editIndicator=_editIndicator;
@property(nonatomic) __weak UIView *bottomToolView; // @synthesize bottomToolView=_bottomToolView;
@property(nonatomic) __weak NVMFeedBackPaintingView *paintView; // @synthesize paintView=_paintView;
@property(nonatomic) __weak UIButton *leftBarButtonItem; // @synthesize leftBarButtonItem=_leftBarButtonItem;
@property(nonatomic) __weak UIButton *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(nonatomic) __weak UIView *naviBar; // @synthesize naviBar=_naviBar;
@property(retain, nonatomic) UIImage *screenImage; // @synthesize screenImage=_screenImage;
- (void).cxx_destruct;
- (void)constraintToMaxLengthAndShowToast:(id)arg1;
- (void)compressImage:(id)arg1 toMaxSizeKB:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool firstLoad;
- (_Bool)feedBackTextCheck;
- (void)setTipStatus:(_Bool)arg1;
- (void)textChange:(id)arg1;
- (void)updateEditIndicator:(_Bool)arg1;
- (void)startWrite;
- (void)startPaint;
- (void)feedBackSuccess;
- (void)submit;
- (void)quit;
- (void)loadUserGuideIfNeeded;
- (void)didTappedBackgroundView;
- (void)loadFeedBackInputView;
- (void)showOptionMenuWithAnimation;
- (void)loadOptionMenu;
- (void)snapshotAnimation;
- (void)showFullEditScreen:(id)arg1;
- (void)hideOptionMenu;
- (void)showOptionMenu;
- (void)loadPaintView;
- (void)dealloc;
- (void)viewDidFirstAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

