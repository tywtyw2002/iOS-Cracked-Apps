//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CCWIError, CCWINetProvider, CCWINetWifiManager;

@protocol CCNetWifiManagerDelegate
- (void)didConnect:(CCWINetProvider *)arg1;
- (void)willConnect:(CCWINetProvider *)arg1;
- (void)didScanning:(CCWINetWifiManager *)arg1 error:(CCWIError *)arg2;
- (void)willScanning:(CCWINetWifiManager *)arg1;
@end
