//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface NRMAInteractionDataStamp : NSObject <NSCopying>
{
    NSString *_name;
    NSNumber *_startTimestamp;
    NSNumber *_duration;
}

@property(retain) NSNumber *duration; // @synthesize duration=_duration;
@property(retain) NSNumber *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)JSONObject;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
