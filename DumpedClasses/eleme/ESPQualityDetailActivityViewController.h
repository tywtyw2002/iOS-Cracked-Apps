//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class ESPQualityActivityView, NSArray, NSString, NVMBlurView, UILabel, UIView;

@interface ESPQualityDetailActivityViewController : NVMViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    ESPQualityActivityView *_activityView;
    UILabel *_titleLabel;
    UIView *_containerView;
    NVMBlurView *_blurView;
    NSArray *_promotions;
}

@property(copy, nonatomic) NSArray *promotions; // @synthesize promotions=_promotions;
@property(retain, nonatomic) NVMBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ESPQualityActivityView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissView;
- (void)setupView;
- (void)viewDidLoad;
- (id)initWithPromotions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

