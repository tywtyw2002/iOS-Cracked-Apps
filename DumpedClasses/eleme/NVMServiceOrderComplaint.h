//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMHTTPRequestData.h"

@class NSString;

@interface NVMServiceOrderComplaint : NVMHTTPRequestData
{
    long long _complaint_type;
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long complaint_type; // @synthesize complaint_type=_complaint_type;
- (void).cxx_destruct;
- (id)extraParameters;
- (id)initWithOrderID:(id)arg1;

@end

