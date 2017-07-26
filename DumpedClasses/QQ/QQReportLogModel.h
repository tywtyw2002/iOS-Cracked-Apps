//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQReportLogModel : NSObject
{
    NSString *_senderUin;
    NSString *_receiverUin;
    NSString *_opsType;
    NSString *_opsName;
    NSString *_opsEntry;
    NSString *_opsCount;
    NSString *_opsResult;
    NSString *_reserved2;
    NSString *_reserved3;
    NSString *_reserved4;
    NSString *_reserved5;
    int _xo;
}

+ (id)keyList;
- (void).cxx_destruct;
- (id)description;
- (id)logString;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *opsCount; // @dynamic opsCount;
@property(copy, nonatomic) NSString *opsEntry; // @dynamic opsEntry;
@property(copy, nonatomic) NSString *opsName; // @dynamic opsName;
@property(copy, nonatomic) NSString *opsResult; // @dynamic opsResult;
@property(copy, nonatomic) NSString *opsType; // @dynamic opsType;
@property(copy, nonatomic) NSString *receiverUin; // @dynamic receiverUin;
@property(copy, nonatomic) NSString *reserved2; // @dynamic reserved2;
@property(copy, nonatomic) NSString *reserved3; // @dynamic reserved3;
@property(copy, nonatomic) NSString *reserved4; // @dynamic reserved4;
@property(copy, nonatomic) NSString *reserved5; // @dynamic reserved5;
@property(copy, nonatomic) NSString *senderUin; // @dynamic senderUin;

@end
