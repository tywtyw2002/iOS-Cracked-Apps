//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface NVMBreakfastHomeDishMenusCategory1 : NSObject
{
    long long _id;
    NSString *_name;
    NSMutableArray *_dishIds;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *dishIds; // @synthesize dishIds=_dishIds;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

