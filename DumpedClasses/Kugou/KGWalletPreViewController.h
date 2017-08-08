//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGAllCloseDelegate.h"

@class KGDefaultNetErrorView, KGThemeButton, KGThemeLabel, NSString, UIView;

@interface KGWalletPreViewController : KGViewController <KGAllCloseDelegate>
{
    long long _balance;
    id _delegate;
    UIView *_contentview;
    KGDefaultNetErrorView *_errorview;
    KGThemeLabel *_walletlabel;
    KGThemeButton *_rechargBtn;
}

@property(retain, nonatomic) KGThemeButton *rechargBtn; // @synthesize rechargBtn=_rechargBtn;
@property(retain, nonatomic) KGThemeLabel *walletlabel; // @synthesize walletlabel=_walletlabel;
@property(retain, nonatomic) KGDefaultNetErrorView *errorview; // @synthesize errorview=_errorview;
@property(retain, nonatomic) UIView *contentview; // @synthesize contentview=_contentview;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
- (void).cxx_destruct;
- (long long)showPlayBarWay;
- (void)didReceiveMemoryWarning;
- (void)JumpToIntruduction;
- (void)closeCancelWithTag:(long long)arg1;
- (void)closeSuccessWithTag:(long long)arg1;
- (void)rechargeAction:(id)arg1;
- (void)initSubViews;
- (void)requestWalletBalanceThreadFinished:(id)arg1;
- (void)refreshWalletBalance;
- (void)requestWalletBalance;
- (void)requestWalletBalanceThread;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
