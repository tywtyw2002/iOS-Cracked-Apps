//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURLSession;

@interface NVMUBTPoster : NSObject
{
    NSString *_sessionID;
    NSString *_serverUrl;
    NSURLSession *_session;
}

+ (void)setEnabled:(_Bool)arg1;
+ (_Bool)enabled;
+ (void)loadUBTPoster;
+ (id)sharedInstance;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSString *serverUrl; // @synthesize serverUrl=_serverUrl;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)closeUBTValidation;
- (void)openUBTValidation:(id)arg1;
- (void)addNotifications;
- (void)postUBTLog:(id)arg1;
- (void)dealloc;
- (id)init;

@end

