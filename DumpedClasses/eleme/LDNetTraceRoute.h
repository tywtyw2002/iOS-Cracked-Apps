//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LDNetTraceRoute : NSObject
{
    int udpPort;
    int maxTTL;
    int readTimeout;
    int maxAttempts;
    NSString *running;
    _Bool isrunning;
    id <LDNetTraceRouteDelegate> _delegate;
}

@property(nonatomic) __weak id <LDNetTraceRouteDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isRunning;
- (void)stopTrace;
- (unsigned char)doTraceRoute:(id)arg1;
- (id)initWithMaxTTL:(int)arg1 timeout:(int)arg2 maxAttempts:(int)arg3 port:(int)arg4;

@end

