//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMDynamicComponentProvider.h"

@class NSArray, NSMutableDictionary, NSString;

@interface ESPQualitySelectionComponent : NSObject <NVMDynamicComponentProvider>
{
    _Bool _needLoadMore;
    long long _fetchStatus;
    NSString *_fetchAPI;
    NSString *_restaurantID;
    NSArray *_restaurantFoodsItems;
    NSMutableDictionary *_heightCache;
}

+ (_Bool)isOptional;
+ (id)vendoredCellClasses;
@property(retain, nonatomic) NSMutableDictionary *heightCache; // @synthesize heightCache=_heightCache;
@property(copy, nonatomic) NSArray *restaurantFoodsItems; // @synthesize restaurantFoodsItems=_restaurantFoodsItems;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(copy, nonatomic) NSString *fetchAPI; // @synthesize fetchAPI=_fetchAPI;
@property(nonatomic) _Bool needLoadMore; // @synthesize needLoadMore=_needLoadMore;
@property(nonatomic) long long fetchStatus; // @synthesize fetchStatus=_fetchStatus;
- (void).cxx_destruct;
- (void)updateDataSourceWithObject:(id)arg1 error:(id)arg2;
- (void)willDisplayCell:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)doLoadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)supportsLoadMore;
- (void)configAttributes:(id)arg1 atIndex:(long long)arg2 startingYCoordinate:(double)arg3;
- (struct CGRect)frameForItemAtIndex:(long long)arg1 startingYCoordinate:(double)arg2 layoutWidth:(double)arg3;
- (double)componentHeightWithWidth:(double)arg1;
- (void)configCell:(id)arg1 forIndex:(long long)arg2 layoutWidth:(double)arg3;
- (Class)cellClassForIndex:(long long)arg1;
- (long long)numberOfCellsInComponent;
- (void)doAPIFetchWithCompletion:(CDUnknownBlockType)arg1;
- (long long)apiFetchStatus;
- (void)setupWithParams:(id)arg1;
- (_Bool)setupWithComponentJSON:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

