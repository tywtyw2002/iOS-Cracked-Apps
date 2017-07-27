//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NSString;

@interface NVMOpenAppRedEnvelope : NVMModel
{
    NSString *_title;
    double _amount;
    NSString *_ruleDescription;
    NSString *_serialNumber;
    long long _type;
    NSArray *_tags;
    NSString *_useTip;
    NSString *_scheme;
}

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *useTip; // @synthesize useTip=_useTip;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *ruleDescription; // @synthesize ruleDescription=_ruleDescription;
@property(nonatomic) double amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

