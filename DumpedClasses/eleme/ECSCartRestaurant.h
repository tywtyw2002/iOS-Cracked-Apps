//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface ECSCartRestaurant : NVMModel
{
    NSString *_restaurantID;
    NSString *_name;
    NSString *_imageHash;
    unsigned long long _status;
    long long _type;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
- (void).cxx_destruct;

@end

