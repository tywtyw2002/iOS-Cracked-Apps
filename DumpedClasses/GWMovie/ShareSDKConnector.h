//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ShareSDKConnector : NSObject
{
}

+ (_Bool)checkPlatformNeedConnect:(unsigned long long)arg1;
+ (void)registerConnector:(Class)arg1 forPlatformType:(unsigned long long)arg2;
+ (id)platformConnectors;
+ (void)callback:(id)arg1 resultData:(id)arg2;
+ (id)checkThumbImageSize:(id)arg1;
+ (void)getImage:(id)arg1 onResult:(CDUnknownBlockType)arg2;
+ (void)getImage:(id)arg1 thumbImagePath:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)connectMeiPai:(Class)arg1;
+ (void)connectLine:(Class)arg1;
+ (void)connectDingTalk:(Class)arg1;
+ (void)connectFacebookMessenger:(Class)arg1;
+ (void)connectYiXin:(Class)arg1;
+ (void)connectKaKao:(Class)arg1;
+ (void)connectAliPaySocial:(Class)arg1;
+ (void)connectRenren:(Class)arg1;
+ (void)connectQQ:(Class)arg1 tencentOAuthClass:(Class)arg2;
+ (void)connectWeibo:(Class)arg1;
+ (void)connectWeChat:(Class)arg1 delegate:(id)arg2;
+ (void)connectWeChat:(Class)arg1;

@end
