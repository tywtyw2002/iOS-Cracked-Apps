//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WIEventInfo : NSObject
{
    NSString *_distinct_id;
    NSString *_time;
    NSString *_type;
    NSString *_event;
    NSString *_project;
    NSString *_project_version;
    NSMutableDictionary *_properties;
    NSString *_os;
}

@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *project_version; // @synthesize project_version=_project_version;
@property(retain, nonatomic) NSString *project; // @synthesize project=_project;
@property(retain, nonatomic) NSString *event; // @synthesize event=_event;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *distinct_id; // @synthesize distinct_id=_distinct_id;
- (void)dealloc;

@end
