//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol TBLiveMediatorProtocol <NSObject>
- (void)execute:(NSString *)arg1 params:(NSDictionary *)arg2 callback:(void (^)(NSDictionary *))arg3;
- (void)checkin:(id <TBLiveColleagueProtocol>)arg1;
@end
