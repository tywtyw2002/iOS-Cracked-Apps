//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@interface NVMContextURLProtocol : NSURLProtocol
{
}

+ (_Bool)isRequestValiad:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)canInitWithTask:(id)arg1;
- (id)contextJSON;
- (id)userInfo;
- (id)contextInfo;
- (id)canonicalResponseWithURL:(id)arg1 withOrigin:(id)arg2;
- (void)stopLoading;
- (void)startLoading;

@end

