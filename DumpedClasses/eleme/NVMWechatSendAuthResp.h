//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMWechatBaseResp.h"

@class NSString;

@interface NVMWechatSendAuthResp : NVMWechatBaseResp
{
    NSString *_code;
    NSString *_state;
    NSString *_lang;
    NSString *_country;
}

@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

