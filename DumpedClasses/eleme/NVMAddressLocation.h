//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface NVMAddressLocation : NVMModel <NSCopying>
{
    NSNumber *_addressID;
    NSNumber *_cityID;
    NSString *_address;
    NSString *_addressDetail;
    NSString *_geoHash;
    long long _POIType;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long POIType; // @synthesize POIType=_POIType;
@property(copy, nonatomic) NSString *geoHash; // @synthesize geoHash=_geoHash;
@property(copy, nonatomic) NSString *addressDetail; // @synthesize addressDetail=_addressDetail;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSNumber *cityID; // @synthesize cityID=_cityID;
@property(copy, nonatomic) NSNumber *addressID; // @synthesize addressID=_addressID;
- (void).cxx_destruct;
- (id)locationFromAddress;

@end

