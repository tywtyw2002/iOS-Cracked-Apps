//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ARMapTaskQueue : NSObject
{
    NSMutableArray *_operationQueue;
}

- (void).cxx_destruct;
- (void)cancelAll;
- (unsigned int)currentOperationCount;
- (void)finishOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)run;
- (id)init;

@end

