//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface NVMCoShareInfo : NVMModel
{
    NSString *_url;
    NSString *_title;
    NSString *_content;
    NSString *_imageHash;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *imageURL;

@end

