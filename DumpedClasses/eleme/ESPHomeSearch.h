//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString, NSURL;

@interface ESPHomeSearch : NVMModel
{
    _Bool _isHighlight;
    NSString *_word;
    NSString *_searchWord;
    NSURL *_schema;
    unsigned long long _type;
    NSString *_source;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isHighlight; // @synthesize isHighlight=_isHighlight;
@property(retain, nonatomic) NSURL *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needShow;

@end
