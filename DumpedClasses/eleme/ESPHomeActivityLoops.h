//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NSURL;

@interface ESPHomeActivityLoops : NVMModel
{
    NSArray *_notices;
    NSURL *_scheme;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSURL *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSArray *notices; // @synthesize notices=_notices;
- (void).cxx_destruct;
- (id)noticesInfo;

@end

