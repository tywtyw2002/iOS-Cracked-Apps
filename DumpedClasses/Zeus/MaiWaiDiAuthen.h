//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCWINetProvider.h"

@class NSString;

@interface MaiWaiDiAuthen : CCWINetProvider
{
    _Bool _isNormalMWD;
    int _apid;
    NSString *_url;
    NSString *_inputPhone;
    NSString *_inputIdentify;
    NSString *_partnerarg;
    NSString *_portalHtml;
    NSString *_redirectStr;
    NSString *_ssid;
    NSString *_businessName;
    NSString *_auth;
    NSString *_language;
    NSString *_phoneCode;
}

+ (_Bool)isMaiWaiDiWiFiWithResponseData:(id)arg1;
@property(nonatomic) int apid; // @synthesize apid=_apid;
@property(nonatomic) _Bool isNormalMWD; // @synthesize isNormalMWD=_isNormalMWD;
@property(retain, nonatomic) NSString *phoneCode; // @synthesize phoneCode=_phoneCode;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *auth; // @synthesize auth=_auth;
@property(retain, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(retain, nonatomic) NSString *redirectStr; // @synthesize redirectStr=_redirectStr;
@property(retain, nonatomic) NSString *portalHtml; // @synthesize portalHtml=_portalHtml;
@property(retain, nonatomic) NSString *partnerarg; // @synthesize partnerarg=_partnerarg;
@property(retain, nonatomic) NSString *inputIdentify; // @synthesize inputIdentify=_inputIdentify;
@property(retain, nonatomic) NSString *inputPhone; // @synthesize inputPhone=_inputPhone;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void)MaiWaiDiCheckSMSWithError:(id)arg1;
- (void)MaiWaiDiConnectWithError:(id)arg1;
- (void)MaiWaiDiGetSMSWithError:(id)arg1 phoneNumber:(id)arg2;
- (void)initMaiWaiDiProder:(id)arg1 partnerarg:(id)arg2 ssid:(id)arg3 apid:(int)arg4;
- (id)init;

@end
