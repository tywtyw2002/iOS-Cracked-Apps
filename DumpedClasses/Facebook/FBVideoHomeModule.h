//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBDeferredJobsConfiguringModule-Protocol.h"
#import "FBIntentHandlerConfiguringModule-Protocol.h"
#import "FBJewelConfiguringModule-Protocol.h"
#import "FBMenuItemConfiguringModule-Protocol.h"
#import "FBURLSegueConfiguringModule-Protocol.h"
#import "FBVideoHomeTabBarNuxEligibility-Protocol.h"

@class NSString;

@interface FBVideoHomeModule : NSObject <FBDeferredJobsConfiguringModule, FBIntentHandlerConfiguringModule, FBJewelConfiguringModule, FBMenuItemConfiguringModule, FBURLSegueConfiguringModule, FBVideoHomeTabBarNuxEligibility>
{
}

+ (id)deferredJobs;
+ (struct NSDictionary *)menuItemHandlers:(id)arg1;
+ (id)URLSegues:(id)arg1;
+ (id)intentHandlers:(id)arg1 providerMap:(id)arg2;
+ (id)jewelManager:(id)arg1;
- (_Bool)eligibleForTabNux:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
