//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CCWIError, NSMutableDictionary, NSString, WIHttpClient;

@interface JiAnLuAuthentication : NSObject
{
    CCWIError *error;
    WIHttpClient *_httpClient;
    NSString *_loginURL;
    NSString *_logOutURL;
    NSMutableDictionary *_potalParmDic;
}

@property(retain, nonatomic) NSMutableDictionary *potalParmDic; // @synthesize potalParmDic=_potalParmDic;
@property(retain, nonatomic) NSString *logOutURL; // @synthesize logOutURL=_logOutURL;
@property(retain, nonatomic) NSString *loginURL; // @synthesize loginURL=_loginURL;
@property(retain, nonatomic) WIHttpClient *httpClient; // @synthesize httpClient=_httpClient;
- (id)creatLoginOrLogOutParm:(id)arg1;
- (void)jiAnLuAuWifiDisconnect;
- (void)jiAnLuAuWifiConnect;
- (void)initJiAnLuAuWifiProder:(id)arg1;
- (id)init;

@end
