//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ESPFilterSection.h"

@class NSArray;

@interface ESPPropertyFilterSection : ESPFilterSection
{
    _Bool _isSpread;
    _Bool _needSpread;
}

+ (id)filterItemsJSONTransformer;
@property(nonatomic) _Bool needSpread; // @synthesize needSpread=_needSpread;
@property(nonatomic) _Bool isSpread; // @synthesize isSpread=_isSpread;
@property(readonly, copy, nonatomic) NSArray *showedItems;

@end

