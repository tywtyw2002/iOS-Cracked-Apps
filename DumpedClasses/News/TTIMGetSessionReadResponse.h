//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseMessage.h"

@class NSMutableArray;

@interface TTIMGetSessionReadResponse : TTResponseMessage
{
    NSMutableArray *_sessionsReadList;
}

@property(retain, nonatomic) NSMutableArray *sessionsReadList; // @synthesize sessionsReadList=_sessionsReadList;
- (void).cxx_destruct;
- (void)extractProto:(id)arg1;
- (id)init;

@end
