//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSMutableArray, NSString, NVMBreakfastDateViewModel, UICollectionView;

@interface NVMBreakfastDishWrapCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_wrapCollectionView;
    NSMutableArray *_typeNameSort;
    NVMBreakfastDateViewModel *_dateViewModel;
    NSArray *_data;
    id <NVMBreakfastDishWrapCollectionViewDelegate> _delegate;
    id <NVMBreakfastDishWrapCellDelegate> _dishCollectionViewDelegate;
}

@property(nonatomic) __weak id <NVMBreakfastDishWrapCellDelegate> dishCollectionViewDelegate; // @synthesize dishCollectionViewDelegate=_dishCollectionViewDelegate;
@property(nonatomic) __weak id <NVMBreakfastDishWrapCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NVMBreakfastDateViewModel *dateViewModel; // @synthesize dateViewModel=_dateViewModel;
@property(nonatomic) __weak NSMutableArray *typeNameSort; // @synthesize typeNameSort=_typeNameSort;
@property(retain, nonatomic) UICollectionView *wrapCollectionView; // @synthesize wrapCollectionView=_wrapCollectionView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollToIndex:(unsigned long long)arg1;
- (void)scrollToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

