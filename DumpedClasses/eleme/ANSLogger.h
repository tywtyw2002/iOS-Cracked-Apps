//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ANSLogger : NSObject
{
    _Bool _debugMode;
}

+ (id)sharedLogger;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
- (void)internalLog:(id)arg1 args:(char *)arg2;
- (void)logWithLabel:(id)arg1 format:(id)arg2;
- (void)log:(id)arg1;

@end

