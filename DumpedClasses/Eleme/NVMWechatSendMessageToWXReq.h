//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMWechatBaseReq.h"

@class NSString, NVMWechatMediaMessage;

@interface NVMWechatSendMessageToWXReq : NVMWechatBaseReq
{
    _Bool _bText;
    NSString *_text;
    NVMWechatMediaMessage *_message;
    long long _scene;
}

@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool bText; // @synthesize bText=_bText;
@property(retain, nonatomic) NVMWechatMediaMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end
