//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface NVMBreakfastBuildingHistoryBean : NSObject <NSCoding>
{
    _Bool _pack;
    _Bool _isSelected;
    _Bool _isShowMoreTakeaway;
    NSString *_buildingId;
    long long _createTime;
    NSString *_name;
    double _longitude;
    double _latitude;
    NSArray *_takeawayName;
    long long _distance;
    long long _buildingNumber;
    double _chooseListCellHeight;
}

@property(nonatomic) double chooseListCellHeight; // @synthesize chooseListCellHeight=_chooseListCellHeight;
@property(nonatomic) _Bool isShowMoreTakeaway; // @synthesize isShowMoreTakeaway=_isShowMoreTakeaway;
@property(nonatomic) long long buildingNumber; // @synthesize buildingNumber=_buildingNumber;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSArray *takeawayName; // @synthesize takeawayName=_takeawayName;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) _Bool pack; // @synthesize pack=_pack;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

