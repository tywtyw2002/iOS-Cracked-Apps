//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBBasicParam.h"

@class NSString;

@interface TBDetailParam : TBBasicParam
{
    NSString *_itemId;
}

@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)parseToDirectString;
- (id)isLegalParam;
- (id)parseToH5URL;
- (id)init;
- (id)initWithItemId:(id)arg1;

@end

