//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPaymentsCheckoutConfiguration-Protocol.h"

@class FBFundraiserPageToolbox, FBMemBasePriceSelectorConfig, FBMemFundraiserPersonForPerson, FBPaymentsPINController, FBPaymentsTouchIDController, NSString;

@interface FBFundraiserDonateCheckoutConfiguration : NSObject <FBPaymentsCheckoutConfiguration>
{
    FBFundraiserPageToolbox *_toolbox;
    FBMemFundraiserPersonForPerson *_fundraiser;
    FBPaymentsPINController *_pinController;
    FBPaymentsTouchIDController *_touchIDController;
    FBMemBasePriceSelectorConfig *_priceSelectorConfig;
}

- (void).cxx_destruct;
- (id)_contentConfiguration;
- (id)orderStatusController;
- (id)requestHandler;
- (id)paymentInfo;
- (id)initWithFundraiser:(id)arg1 priceSelectorConfig:(id)arg2 pinController:(id)arg3 touchIDController:(id)arg4 toolbox:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
