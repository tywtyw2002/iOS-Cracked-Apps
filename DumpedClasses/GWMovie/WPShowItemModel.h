//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSArray, NSDictionary, NSString, WPShowVenueModel;

@interface WPShowItemModel : GWObject
{
    _Bool _hasRealNameTag;
    _Bool _needCaptcha;
    _Bool _isStaticApi;
    _Bool _canUseVCard;
    NSString *_itemId;
    NSString *_itemName;
    NSString *_itemNameEm;
    NSString *_venueName;
    NSString *_itemTag;
    NSString *_itemShortName;
    NSString *_itemImageUrl;
    NSString *_itemPicUrl;
    NSString *_itemShowTime;
    long long _itemStatus;
    NSString *_itemStatusName;
    NSString *_itemTypeId;
    NSString *_itemTypeName;
    NSString *_itemTypePid;
    NSString *_itemTypePname;
    NSString *_desString;
    NSString *_cityId;
    NSString *_cityName;
    NSString *_onlineId;
    NSString *_onlineTime;
    NSString *_basePrice;
    NSString *_maxPrice;
    NSString *_minPrice;
    NSString *_startTime;
    NSString *_endTime;
    long long _modularType;
    long long _showDuration;
    NSString *_buyNotice;
    long long _orderLimitNum;
    long long _itemUserLimitNum;
    long long _showUserLimitNum;
    NSString *_ticketAreaPicUrl;
    WPShowVenueModel *_venueModel;
    long long _voteType;
    NSString *_voteTypeName;
    NSString *_xiaoBianSaid;
    NSString *_detailButtonShow;
    NSString *_tourName;
    NSArray *_tourItemArray;
    NSArray *_activitieArray;
    NSArray *_couponArray;
    NSArray *_adArray;
    NSArray *_imageArray;
    NSArray *_videoArray;
    NSDictionary *_groupBuying;
    NSString *_customTag;
    long long _saleCountdownStatus;
    long long _saleCountdownTime;
    long long _saleReminderStatus;
    long long _isNeedAnswer;
    NSArray *_problemList;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic) _Bool canUseVCard; // @synthesize canUseVCard=_canUseVCard;
@property(retain, nonatomic) NSArray *problemList; // @synthesize problemList=_problemList;
@property(nonatomic) long long isNeedAnswer; // @synthesize isNeedAnswer=_isNeedAnswer;
@property(nonatomic) long long saleReminderStatus; // @synthesize saleReminderStatus=_saleReminderStatus;
@property(nonatomic) long long saleCountdownTime; // @synthesize saleCountdownTime=_saleCountdownTime;
@property(nonatomic) long long saleCountdownStatus; // @synthesize saleCountdownStatus=_saleCountdownStatus;
@property(nonatomic) _Bool isStaticApi; // @synthesize isStaticApi=_isStaticApi;
@property(retain, nonatomic) NSString *customTag; // @synthesize customTag=_customTag;
@property(retain, nonatomic) NSDictionary *groupBuying; // @synthesize groupBuying=_groupBuying;
@property(retain, nonatomic) NSArray *videoArray; // @synthesize videoArray=_videoArray;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NSArray *adArray; // @synthesize adArray=_adArray;
@property(retain, nonatomic) NSArray *couponArray; // @synthesize couponArray=_couponArray;
@property(retain, nonatomic) NSArray *activitieArray; // @synthesize activitieArray=_activitieArray;
@property(retain, nonatomic) NSArray *tourItemArray; // @synthesize tourItemArray=_tourItemArray;
@property(nonatomic) _Bool needCaptcha; // @synthesize needCaptcha=_needCaptcha;
@property(retain, nonatomic) NSString *tourName; // @synthesize tourName=_tourName;
@property(retain, nonatomic) NSString *detailButtonShow; // @synthesize detailButtonShow=_detailButtonShow;
@property(retain, nonatomic) NSString *xiaoBianSaid; // @synthesize xiaoBianSaid=_xiaoBianSaid;
@property(retain, nonatomic) NSString *voteTypeName; // @synthesize voteTypeName=_voteTypeName;
@property(nonatomic) long long voteType; // @synthesize voteType=_voteType;
@property(retain, nonatomic) WPShowVenueModel *venueModel; // @synthesize venueModel=_venueModel;
@property(retain, nonatomic) NSString *ticketAreaPicUrl; // @synthesize ticketAreaPicUrl=_ticketAreaPicUrl;
@property(nonatomic) long long showUserLimitNum; // @synthesize showUserLimitNum=_showUserLimitNum;
@property(nonatomic) long long itemUserLimitNum; // @synthesize itemUserLimitNum=_itemUserLimitNum;
@property(nonatomic) long long orderLimitNum; // @synthesize orderLimitNum=_orderLimitNum;
@property(retain, nonatomic) NSString *buyNotice; // @synthesize buyNotice=_buyNotice;
@property(nonatomic) long long showDuration; // @synthesize showDuration=_showDuration;
@property(nonatomic) long long modularType; // @synthesize modularType=_modularType;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *minPrice; // @synthesize minPrice=_minPrice;
@property(retain, nonatomic) NSString *maxPrice; // @synthesize maxPrice=_maxPrice;
@property(retain, nonatomic) NSString *basePrice; // @synthesize basePrice=_basePrice;
@property(retain, nonatomic) NSString *onlineTime; // @synthesize onlineTime=_onlineTime;
@property(retain, nonatomic) NSString *onlineId; // @synthesize onlineId=_onlineId;
@property(nonatomic) _Bool hasRealNameTag; // @synthesize hasRealNameTag=_hasRealNameTag;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *desString; // @synthesize desString=_desString;
@property(retain, nonatomic) NSString *itemTypePname; // @synthesize itemTypePname=_itemTypePname;
@property(retain, nonatomic) NSString *itemTypePid; // @synthesize itemTypePid=_itemTypePid;
@property(retain, nonatomic) NSString *itemTypeName; // @synthesize itemTypeName=_itemTypeName;
@property(retain, nonatomic) NSString *itemTypeId; // @synthesize itemTypeId=_itemTypeId;
@property(retain, nonatomic) NSString *itemStatusName; // @synthesize itemStatusName=_itemStatusName;
@property(nonatomic) long long itemStatus; // @synthesize itemStatus=_itemStatus;
@property(retain, nonatomic) NSString *itemShowTime; // @synthesize itemShowTime=_itemShowTime;
@property(retain, nonatomic) NSString *itemPicUrl; // @synthesize itemPicUrl=_itemPicUrl;
@property(retain, nonatomic) NSString *itemImageUrl; // @synthesize itemImageUrl=_itemImageUrl;
@property(retain, nonatomic) NSString *itemShortName; // @synthesize itemShortName=_itemShortName;
@property(retain, nonatomic) NSString *itemTag; // @synthesize itemTag=_itemTag;
@property(retain, nonatomic) NSString *venueName; // @synthesize venueName=_venueName;
@property(retain, nonatomic) NSString *itemNameEm; // @synthesize itemNameEm=_itemNameEm;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)initWithDrama:(id)arg1;

@end
