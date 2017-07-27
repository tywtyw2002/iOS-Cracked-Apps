//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXPrettyStringPrinting.h"

@class NSString;

@interface WXTextPrettyStringPrinter : NSObject <WXPrettyStringPrinting>
{
}

- (id)prettyStringForData:(id)arg1 forResponse:(id)arg2 request:(id)arg3;
- (id)prettyStringForData:(id)arg1 forRequest:(id)arg2;
- (id)prettyStringForData:(id)arg1;
- (_Bool)canPrettyStringPrintResponse:(id)arg1 withRequest:(id)arg2;
- (_Bool)canPrettyStringPrintRequest:(id)arg1;
- (_Bool)canPrettyStringPrintContentType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

