//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface NVMCartExtraIcon : NVMModel
{
    NSString *_iconName;
    NSString *_imageHash;
    NSString *_iconColorString;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *iconColorString; // @synthesize iconColorString=_iconColorString;
@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;
- (id)transformToIcon;

@end

