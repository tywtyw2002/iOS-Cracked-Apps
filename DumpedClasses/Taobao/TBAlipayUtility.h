//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBAlipayUtility : NSObject
{
}

+ (void)processPayResult:(id)arg1;
+ (void)gotoSimplePayWithSignStr:(id)arg1 fromController:(id)arg2 needPop:(_Bool)arg3 alipayURL:(id)arg4 backURL:(id)arg5 unsuccessURL:(id)arg6 simplePay:(_Bool)arg7 callbackBlock:(CDUnknownBlockType)arg8;
+ (void)gotoWapPayWithAlipayURL:(id)arg1 fromController:(id)arg2 needPop:(_Bool)arg3 callbackBlock:(CDUnknownBlockType)arg4;
+ (void)processWithStatus:(int)arg1 fromController:(id)arg2 needPop:(_Bool)arg3 alipayURL:(id)arg4 backURL:(id)arg5 unsuccessURL:(id)arg6 resultStr:(id)arg7;
+ (void)defaultOpenUrl:(id)arg1 viewController:(id)arg2;
+ (void)oldDefaultOpenUrl:(id)arg1;
+ (void)popController:(id)arg1;
+ (id)getTargetController:(id)arg1;
+ (int)recordResults:(id)arg1;
+ (void)openOrderWithController:(id)arg1 alipayURL:(id)arg2;
+ (id)addParam:(id)arg1 toURL:(id)arg2;

@end
