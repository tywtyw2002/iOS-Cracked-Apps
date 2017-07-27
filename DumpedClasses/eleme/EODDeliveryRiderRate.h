//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class EODDeliveryTimeModel, NSArray, NSString;

@interface EODDeliveryRiderRate : NVMModel
{
    long long _point;
    NSString *_content;
    NSArray *_labels;
    EODDeliveryTimeModel *_time;
    NSArray *_displayLabels;
}

+ (id)labelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *displayLabels; // @synthesize displayLabels=_displayLabels;
@property(retain, nonatomic) EODDeliveryTimeModel *time; // @synthesize time=_time;
@property(copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long point; // @synthesize point=_point;
- (void).cxx_destruct;

@end

