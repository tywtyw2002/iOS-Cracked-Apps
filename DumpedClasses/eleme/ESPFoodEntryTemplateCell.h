//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class ESPEntryInfo, NSArray, NSString, UICollectionView;

@interface ESPFoodEntryTemplateCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    ESPEntryInfo *_entryInfo;
    UICollectionView *_collectionView;
    NSArray *_foods;
}

+ (double)cellHeight;
@property(retain, nonatomic) NSArray *foods; // @synthesize foods=_foods;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) ESPEntryInfo *entryInfo; // @synthesize entryInfo=_entryInfo;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)addLoadMoreViewIfNeed;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

