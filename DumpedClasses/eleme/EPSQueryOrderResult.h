//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class EPSOrder, NSArray, NSString;

@interface EPSQueryOrderResult : NVMModel
{
    NSString *_token;
    EPSOrder *_order;
    NSArray *_paymethods;
}

+ (id)paymethodsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *paymethods; // @synthesize paymethods=_paymethods;
@property(retain, nonatomic) EPSOrder *order; // @synthesize order=_order;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end

