//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class ESPRestaurant, NSArray, NSString, NVMCartContext, UICollectionView;

@interface ESPRecommendFoodCell : NVMTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    CDUnknownBlockType _didSelectItemAction;
    NSArray *_foods;
    UICollectionView *_collectionView;
    ESPRestaurant *_restaurant;
    NVMCartContext *_cartContext;
}

+ (double)cellHeight;
@property(retain, nonatomic) NVMCartContext *cartContext; // @synthesize cartContext=_cartContext;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSArray *foods; // @synthesize foods=_foods;
@property(copy, nonatomic) CDUnknownBlockType didSelectItemAction; // @synthesize didSelectItemAction=_didSelectItemAction;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)indexPathForFood:(id)arg1;
- (id)transitionViewForFood:(id)arg1;
- (void)updateWithFoods:(id)arg1 cartContext:(id)arg2;
- (void)loadSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

