//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, NVMViewController;

@interface EODFavoritesAndCollectionTracker : NSObject
{
    NSString *_UUIDString;
    NVMViewController *_sourceViewController;
    NSMutableDictionary *_shopAndFoods;
    long long _maxTrackedIndex;
    long long _source;
}

@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long maxTrackedIndex; // @synthesize maxTrackedIndex=_maxTrackedIndex;
@property(retain, nonatomic) NSMutableDictionary *shopAndFoods; // @synthesize shopAndFoods=_shopAndFoods;
@property(nonatomic) __weak NVMViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
- (void).cxx_destruct;
- (id)shopDicWithFoodID:(id)arg1 favoriteShopAndFoods:(id)arg2 indexNumber:(id)arg3;
- (void)track;
- (void)registerOrderRecommendShopAndFood:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)resetWithSource:(long long)arg1;
- (void)appWillResignAction;
- (void)addNotification;
- (void)dealloc;
- (id)initWithSourceViewController:(id)arg1;

@end

