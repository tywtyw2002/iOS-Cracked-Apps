//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMOTPAuthURL.h"

@class NSString;

@interface NVMHOTPAuthURL : NVMOTPAuthURL
{
    NSString *otpCode;
}

+ (_Bool)isValidCounter:(id)arg1;
@property(copy, nonatomic) NSString *otpCode; // @synthesize otpCode;
- (void).cxx_destruct;
- (id)URL;
- (void)generateNextOTPCode;
- (_Bool)scanUnsignedLongLong:(unsigned long long *)arg1 scanner:(id)arg2;
- (id)initWithName:(id)arg1 secret:(id)arg2 algorithm:(id)arg3 digits:(unsigned long long)arg4 query:(id)arg5;
- (id)initWithSecret:(id)arg1 name:(id)arg2;
- (id)initWithOTPGenerator:(id)arg1 name:(id)arg2;

@end

