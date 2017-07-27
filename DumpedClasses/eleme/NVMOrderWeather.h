//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface NVMOrderWeather : NVMModel
{
    double _temperature;
    NSString *_weatherCode;
    NSString *_weatherDescription;
    NSString *_weatherImageHash;
    NSString *_riderGifImageURL;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *riderGifImageURL; // @synthesize riderGifImageURL=_riderGifImageURL;
@property(copy, nonatomic) NSString *weatherImageHash; // @synthesize weatherImageHash=_weatherImageHash;
@property(copy, nonatomic) NSString *weatherDescription; // @synthesize weatherDescription=_weatherDescription;
@property(copy, nonatomic) NSString *weatherCode; // @synthesize weatherCode=_weatherCode;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
- (void).cxx_destruct;
- (_Bool)isRiderGifURLAvailable;
- (_Bool)updateGifForRiderAnnotation;
- (id)gifImageName;

@end

