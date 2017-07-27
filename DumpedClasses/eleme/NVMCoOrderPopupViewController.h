//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "NVMPresentationDelegate.h"

@class NSString, NVMCoOrderPopupItemView, NVMSeparatorView, UIView;

@interface NVMCoOrderPopupViewController : NVMViewController <NVMPresentationDelegate>
{
    CDUnknownBlockType _personTappedAction;
    CDUnknownBlockType _wechatTappedAction;
    UIView *_container;
    NVMCoOrderPopupItemView *_personView;
    NVMSeparatorView *_separator;
    NVMCoOrderPopupItemView *_wechatView;
}

@property(retain, nonatomic) NVMCoOrderPopupItemView *wechatView; // @synthesize wechatView=_wechatView;
@property(retain, nonatomic) NVMSeparatorView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) NVMCoOrderPopupItemView *personView; // @synthesize personView=_personView;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(copy, nonatomic) CDUnknownBlockType wechatTappedAction; // @synthesize wechatTappedAction=_wechatTappedAction;
@property(copy, nonatomic) CDUnknownBlockType personTappedAction; // @synthesize personTappedAction=_personTappedAction;
- (void).cxx_destruct;
- (void)animateAlongPresentation:(_Bool)arg1;
- (void)tapped;
- (void)addActions;
- (void)loadWechatView;
- (void)loadSeparator;
- (void)loadPersonView;
- (void)configConstraints;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

