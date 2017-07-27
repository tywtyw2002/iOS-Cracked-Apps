//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString, NSURL;

@interface ESPWishesInfo : NVMModel
{
    NSString *_imageHash;
    NSString *_titleHash;
    NSURL *_schema;
    NSString *_greetings;
    NSString *_calendarTip;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *calendarTip; // @synthesize calendarTip=_calendarTip;
@property(copy, nonatomic) NSString *greetings; // @synthesize greetings=_greetings;
@property(retain, nonatomic) NSURL *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString *titleHash; // @synthesize titleHash=_titleHash;
@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
- (void).cxx_destruct;
- (_Bool)needShow;

@end

