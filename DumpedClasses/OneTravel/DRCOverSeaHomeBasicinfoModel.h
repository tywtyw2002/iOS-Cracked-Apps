//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseModel.h"

@class DRCOverSeaHomePointModel, NSArray<DRCOverSeaHomefunctionListModel><Optional>, NSString;

@interface DRCOverSeaHomeBasicinfoModel : DRCBaseModel
{
    NSArray<DRCOverSeaHomefunctionListModel><Optional> *_functionList;
    DRCOverSeaHomePointModel *_fetchPoint;
    DRCOverSeaHomePointModel *_returnPoint;
    NSString *_startFetchDate;
    NSString *_endFetchDate;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_defaultFetchTime;
    NSString *_defaultReturnTime;
    long long _defaultRentMinutes;
    long long _longestRentMinutes;
    long long _shortestRentMinutes;
    NSString *_differentCityHint;
    long long _timeslot;
    NSString *_submitText;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *submitText; // @synthesize submitText=_submitText;
@property(nonatomic) long long timeslot; // @synthesize timeslot=_timeslot;
@property(copy, nonatomic) NSString *differentCityHint; // @synthesize differentCityHint=_differentCityHint;
@property(nonatomic) long long shortestRentMinutes; // @synthesize shortestRentMinutes=_shortestRentMinutes;
@property(nonatomic) long long longestRentMinutes; // @synthesize longestRentMinutes=_longestRentMinutes;
@property(nonatomic) long long defaultRentMinutes; // @synthesize defaultRentMinutes=_defaultRentMinutes;
@property(copy, nonatomic) NSString *defaultReturnTime; // @synthesize defaultReturnTime=_defaultReturnTime;
@property(copy, nonatomic) NSString *defaultFetchTime; // @synthesize defaultFetchTime=_defaultFetchTime;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *endFetchDate; // @synthesize endFetchDate=_endFetchDate;
@property(copy, nonatomic) NSString *startFetchDate; // @synthesize startFetchDate=_startFetchDate;
@property(retain, nonatomic) DRCOverSeaHomePointModel *returnPoint; // @synthesize returnPoint=_returnPoint;
@property(retain, nonatomic) DRCOverSeaHomePointModel *fetchPoint; // @synthesize fetchPoint=_fetchPoint;
@property(retain, nonatomic) NSArray<DRCOverSeaHomefunctionListModel><Optional> *functionList; // @synthesize functionList=_functionList;
- (void).cxx_destruct;

@end
