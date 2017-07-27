//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMHTTPRequestData.h"

@class ESPTag, NSString;

@interface ESPServiceRestaurantRatings : NVMHTTPRequestData
{
    _Bool _hasText;
    ESPTag *_tag;
    NSString *_restaurantID;
}

@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(copy, nonatomic) ESPTag *tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool hasText; // @synthesize hasText=_hasText;
- (void).cxx_destruct;
- (id)extraParameters;
- (id)initWithRestaurantID:(id)arg1;

@end

