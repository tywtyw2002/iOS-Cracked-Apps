//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (NVMRequestMetrics)
+ (void)load;
- (void)setNvm_initDate:(id)arg1;
- (id)nvm_initDate;
- (void)setNvm_isFirstLoad:(_Bool)arg1;
- (_Bool)nvm_isFirstLoad;
- (void)nvm_beginTracePageNoneInitialLoad:(id)arg1 withRequestData:(id)arg2;
- (void)nvm_beginTracePageNoneInitialLoad:(id)arg1 withSessionTask:(id)arg2;
- (void)nvm_beginTracePageLoad:(id)arg1 withSessionTask:(id)arg2;
- (void)nvm_beginTracePageLoad:(id)arg1 withRequestData:(id)arg2;
- (void)nvm_beginTracePageLoad:(id)arg1 isInitialLoad:(_Bool)arg2 withRequestData:(id)arg3;
- (id)initWith_network_hook_NibName:(id)arg1 bundle:(id)arg2;
@end

