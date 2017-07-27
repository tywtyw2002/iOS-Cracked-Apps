//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NSString;

@interface NVMOrderFavoriteShop : NVMModel
{
    NSString *_shopName;
    NSString *_shopID;
    NSString *_shopImageURL;
    NSString *_reason;
    long long _status;
    NSString *_nextBusinessTime;
    NSArray *_activities;
    unsigned long long _shopType;
    NSString *_trackContent;
    double _initTime;
    double _closingCountDown;
    NSString *_bidding;
}

+ (id)activitiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *bidding; // @synthesize bidding=_bidding;
@property(nonatomic) double closingCountDown; // @synthesize closingCountDown=_closingCountDown;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
@property(copy, nonatomic) NSString *trackContent; // @synthesize trackContent=_trackContent;
@property(nonatomic) unsigned long long shopType; // @synthesize shopType=_shopType;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(copy, nonatomic) NSString *nextBusinessTime; // @synthesize nextBusinessTime=_nextBusinessTime;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *shopImageURL; // @synthesize shopImageURL=_shopImageURL;
@property(copy, nonatomic) NSString *shopID; // @synthesize shopID=_shopID;
@property(copy, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
- (void).cxx_destruct;
- (id)trackType;
- (id)activityIconInfo;
- (_Bool)shopAvailable;
- (id)unavailableDescription;
- (id)statusColor;
- (long long)localStatus;
- (double)existDuration;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;

@end

