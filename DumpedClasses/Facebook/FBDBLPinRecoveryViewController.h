//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBDBLPinRecoveryViewControllerProtocol-Protocol.h"
#import "FBKeyboardObserverDelegate-Protocol.h"

@class FBDBLPinRecoveryView, FBDBLStoredUser, FBKeyboardObserver, NSString, UITapGestureRecognizer;
@protocol FBDBLPinRecoveryAuthenticating;

@interface FBDBLPinRecoveryViewController : UIViewController <FBKeyboardObserverDelegate, FBDBLPinRecoveryViewControllerProtocol>
{
    FBDBLStoredUser *_userInfo;
    UITapGestureRecognizer *_recognizer;
    id <FBDBLPinRecoveryAuthenticating> _authDelegate;
    FBDBLPinRecoveryView *_pinRecoveryView;
    FBKeyboardObserver *_keyboardObserver;
    struct UIEdgeInsets _minimumEdgeInsets;
    struct CGRect _keyboardFrame;
    struct CGRect _statusBarFrame;
}

@property(nonatomic) struct CGRect statusBarFrame; // @synthesize statusBarFrame=_statusBarFrame;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(readonly, nonatomic) FBKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(readonly, nonatomic) struct UIEdgeInsets minimumEdgeInsets; // @synthesize minimumEdgeInsets=_minimumEdgeInsets;
@property(readonly, nonatomic) FBDBLPinRecoveryView *pinRecoveryView; // @synthesize pinRecoveryView=_pinRecoveryView;
@property(nonatomic) __weak id <FBDBLPinRecoveryAuthenticating> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)_updateRecoverViewEdgeInsets;
- (_Bool)_canSubmitPin;
- (void)_textChanged:(id)arg1;
- (void)_removePinTapped:(id)arg1;
- (id)analyticsModule;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_resignAnyFirstResponder;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
