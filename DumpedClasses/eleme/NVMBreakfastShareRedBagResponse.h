//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NVMBreakfastShareRedBagOut;

@interface NVMBreakfastShareRedBagResponse : NSObject
{
    long long _code;
    NSString *_message;
    NVMBreakfastShareRedBagOut *_out;
}

@property(retain, nonatomic) NVMBreakfastShareRedBagOut *out; // @synthesize out=_out;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

