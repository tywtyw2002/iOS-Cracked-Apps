//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WIHttpClient;

@interface ZCLAuthentication : NSObject
{
    WIHttpClient *_httpClient;
}

@property(retain, nonatomic) WIHttpClient *httpClient; // @synthesize httpClient=_httpClient;
- (void)dealloc;
- (void)zclWifiDisconnect;
- (void)zclWifiConnect:(id)arg1 password:(id)arg2;
- (void)initZclWifiProder:(id)arg1;
- (id)init;

@end
