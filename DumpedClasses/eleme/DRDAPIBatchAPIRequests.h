//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface DRDAPIBatchAPIRequests : NSObject
{
    NSMutableSet *_apiRequestsSet;
    id <DRDAPIBatchAPIRequestsProtocol> _delegate;
}

@property(nonatomic) __weak id <DRDAPIBatchAPIRequestsProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *apiRequestsSet; // @synthesize apiRequestsSet=_apiRequestsSet;
- (void).cxx_destruct;
- (void)start;
- (void)addBatchAPIRequests:(id)arg1;
- (void)addAPIRequest:(id)arg1;
- (id)init;

@end

