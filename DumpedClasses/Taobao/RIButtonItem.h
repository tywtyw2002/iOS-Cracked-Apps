//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RIButtonItem : NSObject
{
    NSString *label;
    CDUnknownBlockType action;
}

+ (id)itemWithLabel:(id)arg1;
+ (id)item;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action;
@property(retain, nonatomic) NSString *label; // @synthesize label;
- (void).cxx_destruct;

@end
