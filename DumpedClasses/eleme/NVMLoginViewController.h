//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

@class NSString, NVMLoginView;

@interface NVMLoginViewController : NVMViewController
{
    CDUnknownBlockType _didLoginCompeletionHandler;
    NVMLoginView *_loginView;
    NSString *_captchaID;
}

@property(copy, nonatomic) NSString *captchaID; // @synthesize captchaID=_captchaID;
@property(retain, nonatomic) NVMLoginView *loginView; // @synthesize loginView=_loginView;
@property(copy, nonatomic) CDUnknownBlockType didLoginCompeletionHandler; // @synthesize didLoginCompeletionHandler=_didLoginCompeletionHandler;
- (void).cxx_destruct;
- (void)callOnePassword;
- (void)enableNavigationBarButtons;
- (void)disableNavigationBarButtons;
- (void)redirectToMobileLogin;
- (CDUnknownBlockType)userCompletionHandler;
- (_Bool)isUserNameAndPasswordValid;
- (void)dismissView:(_Bool)arg1;
- (void)loginWithUserName:(id)arg1 password:(id)arg2 captchaCode:(id)arg3;
- (void)dismissSelfAndNotify;
- (void)refreshCaptchasView;
- (void)findPassword;
- (void)loginAction;
- (void)viewDidFirstAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end

