//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUserSession, NSString;

@interface FBPageCreationWebsiteUpdateHandler : NSObject
{
    FBUserSession *_session;
    NSString *_serverSideWebsite;
}

@property(copy, nonatomic) NSString *serverSideWebsite; // @synthesize serverSideWebsite=_serverSideWebsite;
- (void).cxx_destruct;
- (void)updateWebsiteWithPageId:(id)arg1 webAddress:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (id)initWithSession:(id)arg1;

@end

