//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRWKNavigationDelegateBase : NSObject
{
    NSObject *_realDelegate;
}

+ (void)navigation:(id)arg1 setTimer:(id)arg2;
+ (id)navigationTimer:(id)arg1;
+ (void)navigation:(id)arg1 setURL:(id)arg2;
+ (id)navigationURL:(id)arg1;
@property __weak NSObject *realDelegate; // @synthesize realDelegate=_realDelegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)initWithOriginalDelegate:(id)arg1;

@end
