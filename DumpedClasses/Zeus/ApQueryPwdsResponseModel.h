//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface ApQueryPwdsResponseModel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *aps; // @dynamic aps;
@property(readonly, nonatomic) unsigned long long aps_Count; // @dynamic aps_Count;
@property(copy, nonatomic) NSString *cvs; // @dynamic cvs;
@property(copy, nonatomic) NSString *icp; // @dynamic icp;
@property(copy, nonatomic) NSString *pet; // @dynamic pet;
@property(copy, nonatomic) NSString *qid; // @dynamic qid;

@end

