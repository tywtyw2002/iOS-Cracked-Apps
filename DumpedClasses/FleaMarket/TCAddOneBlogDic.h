//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCAPIRequest.h"

@class NSString;

@interface TCAddOneBlogDic : TCAPIRequest
{
    NSString *_paramTitle;
    NSString *_paramContent;
    int _xo;
}

+ (id)dictionary;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *paramContent; // @dynamic paramContent;
@property(retain, nonatomic) NSString *paramTitle; // @dynamic paramTitle;

@end
