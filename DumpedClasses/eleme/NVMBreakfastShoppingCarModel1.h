//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface NVMBreakfastShoppingCarModel1 : NSObject <NSCoding>
{
    NSMutableArray *_items;
    unsigned long long _count;
    double _priceAmount;
    double _discountAmount;
}

@property(nonatomic) double discountAmount; // @synthesize discountAmount=_discountAmount;
@property(nonatomic) double priceAmount; // @synthesize priceAmount=_priceAmount;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

