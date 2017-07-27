//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXDynamicDebuggerDomain.h"

@interface WXDebuggerDomain : WXDynamicDebuggerDomain
{
}

+ (id)domainName;
- (void)handleMethodWithName:(id)arg1 parameters:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)resumed;
- (void)pausedWithCallFrames:(id)arg1 reason:(id)arg2 data:(id)arg3;
- (void)breakpointResolvedWithBreakpointId:(id)arg1 location:(id)arg2;
- (void)scriptFailedToParseWithUrl:(id)arg1 scriptSource:(id)arg2 startLine:(id)arg3 errorLine:(id)arg4 errorMessage:(id)arg5;
- (void)scriptParsedWithScriptId:(id)arg1 url:(id)arg2 startLine:(id)arg3 startColumn:(id)arg4 endLine:(id)arg5 endColumn:(id)arg6 isContentScript:(id)arg7 sourceMapURL:(id)arg8;
- (void)globalObjectCleared;

// Remaining properties
@property(nonatomic) id <WXDebuggerCommandDelegate><WXCommandDelegate> delegate; // @dynamic delegate;

@end

