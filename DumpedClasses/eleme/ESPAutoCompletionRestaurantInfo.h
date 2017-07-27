//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ESPAutoCompletionInfo.h"

@class NSArray, NSString, UIImage;

@interface ESPAutoCompletionRestaurantInfo : ESPAutoCompletionInfo
{
    NSString *_restaurantID;
    NSString *_imageHash;
    NSString *_nextBusinessTime;
    unsigned long long _restaurantType;
    UIImage *_tagsImage;
    NSString *_name;
    double _rating;
    NSArray *_tags;
}

+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) UIImage *tagsImage; // @synthesize tagsImage=_tagsImage;
@property(nonatomic) unsigned long long restaurantType; // @synthesize restaurantType=_restaurantType;
@property(copy, nonatomic) NSString *nextBusinessTime; // @synthesize nextBusinessTime=_nextBusinessTime;
@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)detailText;
- (id)title;

@end

