//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NVMBreakfastAmountInfoOutDTO, NVMBreakfastMyOrderMenuInfo;

@interface NVMBreakfastShoppingData : NSObject
{
    _Bool _isAdmin;
    _Bool _isNewUser;
    _Bool _isOnlyBf;
    NVMBreakfastAmountInfoOutDTO *_amountInfoOutDTO;
    NVMBreakfastMyOrderMenuInfo *_myOrderMenuInfo;
}

@property(retain, nonatomic) NVMBreakfastMyOrderMenuInfo *myOrderMenuInfo; // @synthesize myOrderMenuInfo=_myOrderMenuInfo;
@property(nonatomic) _Bool isOnlyBf; // @synthesize isOnlyBf=_isOnlyBf;
@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(retain, nonatomic) NVMBreakfastAmountInfoOutDTO *amountInfoOutDTO; // @synthesize amountInfoOutDTO=_amountInfoOutDTO;
- (void).cxx_destruct;

@end

