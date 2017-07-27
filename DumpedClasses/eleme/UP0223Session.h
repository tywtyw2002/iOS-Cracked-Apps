//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface UP0223Session : NSObject <NSCoding>
{
    _Bool _isOffline;
    int _status;
    int _duration;
    int _launchDuration;
    NSString *_sessionId;
    long long _start;
    NSMutableArray *_activities;
    NSMutableArray *_activitieAutos;
    NSMutableArray *_appEvents;
}

@property(retain, nonatomic) NSMutableArray *appEvents; // @synthesize appEvents=_appEvents;
@property(retain, nonatomic) NSMutableArray *activitieAutos; // @synthesize activitieAutos=_activitieAutos;
@property(retain, nonatomic) NSMutableArray *activities; // @synthesize activities=_activities;
@property(nonatomic) int launchDuration; // @synthesize launchDuration=_launchDuration;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)messagePack:(struct msgpack_packer *)arg1;
- (id)init;

@end

