//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLMomentUser;

@interface QLMomentNewMessage : NSObject
{
    QLMomentUser *_commentUser;
    NSString *_commentID;
    NSString *_publishID;
    NSString *_messageType;
    NSString *_publishDate;
    NSString *_publishText;
    NSString *_publishURL;
}

+ (id)message:(id)arg1;
@property(retain, nonatomic) NSString *publishURL; // @synthesize publishURL=_publishURL;
@property(retain, nonatomic) NSString *publishText; // @synthesize publishText=_publishText;
@property(retain, nonatomic) NSString *publishDate; // @synthesize publishDate=_publishDate;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID=_publishID;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(retain, nonatomic) QLMomentUser *commentUser; // @synthesize commentUser=_commentUser;
- (void).cxx_destruct;

@end

