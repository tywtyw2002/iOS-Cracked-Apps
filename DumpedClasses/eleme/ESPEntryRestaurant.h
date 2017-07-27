//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString, UIColor;

@interface ESPEntryRestaurant : NVMModel
{
    NSString *_restaurantId;
    NSString *_originImageURL;
    NSString *_name;
    NSString *_recommendReason;
    NSString *_actionURL;
    UIColor *_reasonColor;
    UIColor *_reasonBackgroundColor;
    NSString *_reasonColorString;
    NSString *_reasonBackgroundColorString;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *reasonBackgroundColorString; // @synthesize reasonBackgroundColorString=_reasonBackgroundColorString;
@property(copy, nonatomic) NSString *reasonColorString; // @synthesize reasonColorString=_reasonColorString;
@property(retain, nonatomic) UIColor *reasonBackgroundColor; // @synthesize reasonBackgroundColor=_reasonBackgroundColor;
@property(retain, nonatomic) UIColor *reasonColor; // @synthesize reasonColor=_reasonColor;
@property(copy, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *originImageURL; // @synthesize originImageURL=_originImageURL;
@property(copy, nonatomic) NSString *restaurantId; // @synthesize restaurantId=_restaurantId;
- (void).cxx_destruct;

@end

