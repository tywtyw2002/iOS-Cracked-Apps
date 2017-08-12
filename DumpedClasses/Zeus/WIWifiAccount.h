//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WIWifiAccount : NSObject
{
    int apId;
    int type;
    int accountId;
    NSString *account;
    NSString *password;
    NSArray *authRegionArray;
    NSString *code;
    NSString *msg;
    NSString *region;
    NSString *_nation;
    NSString *_province;
    NSString *_city;
}

@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *nation; // @synthesize nation=_nation;
@property(retain, nonatomic) NSString *region; // @synthesize region;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(retain, nonatomic) NSString *code; // @synthesize code;
@property(retain, nonatomic) NSArray *authRegionArray; // @synthesize authRegionArray;
@property(retain, nonatomic) NSString *password; // @synthesize password;
@property(retain, nonatomic) NSString *account; // @synthesize account;
@property(nonatomic) int accountId; // @synthesize accountId;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) int apId; // @synthesize apId;
- (void)dealloc;
- (id)init;

@end
