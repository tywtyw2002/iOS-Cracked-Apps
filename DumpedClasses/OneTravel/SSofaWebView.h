//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSofaBaseWebView.h"

@class NewWebViewJavascriptBridge, SSofaWebViewJSHelper;

@interface SSofaWebView : SSofaBaseWebView
{
    SSofaWebViewJSHelper *_jsHelper;
    NewWebViewJavascriptBridge *_bridge;
}

@property(retain, nonatomic) NewWebViewJavascriptBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) SSofaWebViewJSHelper *jsHelper; // @synthesize jsHelper=_jsHelper;
- (void).cxx_destruct;
- (void)loadBridgeAndHandler;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;

@end
