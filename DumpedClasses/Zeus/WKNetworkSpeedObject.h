//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WKNetworkSpeedObject : NSObject
{
    _Bool _isFinished;
    double _speed;
    NSString *_speedFormat;
    NSString *_networkDelay;
    id _otherInfo;
}

@property(retain, nonatomic) id otherInfo; // @synthesize otherInfo=_otherInfo;
@property(retain, nonatomic) NSString *networkDelay; // @synthesize networkDelay=_networkDelay;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) NSString *speedFormat; // @synthesize speedFormat=_speedFormat;
@property(nonatomic) double speed; // @synthesize speed=_speed;
- (void).cxx_destruct;

@end
