//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDevice.h"

@interface UIDevice (ELMFoundation)
+ (_Bool)elm_isSimulator;
+ (_Bool)elm_isJailBroken;
+ (struct CGRect)elm_fullScreenRect;
+ (id)elm_OSVersion;
+ (id)elm_screenResolution;
+ (double)elm_screenHeight;
+ (double)elm_screenWidth;
+ (id)elm_httpAgentWithAppName:(id)arg1;
+ (unsigned long long)elm_systemFreeMemory;
+ (id)elm_machineModel;
+ (_Bool)elm_isConnectedToWifi;
+ (id)elm_networkOperator;
+ (id)elm_mobileNetworkCode;
+ (id)elm_mobileCountryCode;
+ (id)elm_networkTypeAsString;
+ (id)elm_deviceID;
+ (id)elm_appID;
+ (void)reachabilityChanged:(id)arg1;
+ (void)starteNetworkTypeNotifier;
+ (long long)elm_networkType;
@end

