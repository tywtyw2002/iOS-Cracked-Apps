//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWLoginContentProvider : GWBaseInfoProvider
{
    NSString *_username;
    NSString *_password;
    NSString *_token;
    NSString *_pushstatus;
    NSString *_pushToken;
}

@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSString *pushstatus; // @synthesize pushstatus=_pushstatus;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)parseResponed:(id)arg1 error:(id *)arg2;
- (id)init;

@end
