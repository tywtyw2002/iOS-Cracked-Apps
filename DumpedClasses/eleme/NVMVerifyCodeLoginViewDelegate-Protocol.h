//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NVMCallingFooterView, NVMTimerButton, UIButton, UITextField;

@protocol NVMVerifyCodeLoginViewDelegate <NSObject>

@optional
- (void)serviceAgreementButtonDidTouch;
- (void)verifyCodeLoginViewDidLoadCallingFooter:(NVMCallingFooterView *)arg1;
- (void)verifyCodeLoginViewDidLoadLoginButton:(UIButton *)arg1;
- (void)verifyCodeLoginViewDidLoadSendButton:(NVMTimerButton *)arg1;
- (void)verifyCodeLoginViewDidLoadCodeTextFiled:(UITextField *)arg1;
- (void)verifyCodeLoginViewDidLoadMobieTextFiled:(UITextField *)arg1;
@end

