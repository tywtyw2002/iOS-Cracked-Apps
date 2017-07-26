//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface MRecognizerResult : NSObject
{
    NSString *_asrText;
    NSArray *_nlpIntents;
    NSArray *_asrNBest;
    NSString *_uid;
    NSString *_asrData;
    NSString *_asrrn;
    NSArray *_tips;
    NSString *_sessionID;
    NSURL *_url;
}

+ (id)resultFromJSONString:(id)arg1 error:(id *)arg2;
+ (id)resultFromJSONString:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSArray *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *asrrn; // @synthesize asrrn=_asrrn;
@property(retain, nonatomic) NSString *asrData; // @synthesize asrData=_asrData;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSArray *asrNBest; // @synthesize asrNBest=_asrNBest;
@property(retain, nonatomic) NSArray *nlpIntents; // @synthesize nlpIntents=_nlpIntents;
@property(retain, nonatomic) NSString *asrText; // @synthesize asrText=_asrText;
- (void).cxx_destruct;
- (id)description;

@end
