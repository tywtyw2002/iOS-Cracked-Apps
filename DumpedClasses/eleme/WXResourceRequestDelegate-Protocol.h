//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, WXResourceRequest, WXResourceResponse;

@protocol WXResourceRequestDelegate <NSObject>
- (void)request:(WXResourceRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidFinishLoading:(WXResourceRequest *)arg1;
- (void)request:(WXResourceRequest *)arg1 didReceiveData:(NSData *)arg2;
- (void)request:(WXResourceRequest *)arg1 didReceiveResponse:(WXResourceResponse *)arg2;
- (void)request:(WXResourceRequest *)arg1 didSendData:(unsigned long long)arg2 totalBytesToBeSent:(unsigned long long)arg3;
@end

