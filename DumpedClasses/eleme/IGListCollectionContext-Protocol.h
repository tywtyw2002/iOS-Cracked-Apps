//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGListSectionController, NSArray, NSBundle, NSString, UICollectionReusableView, UICollectionViewCell;

@protocol IGListCollectionContext <NSObject>
@property(readonly, nonatomic) struct CGSize insetContainerSize;
@property(readonly, nonatomic) struct UIEdgeInsets containerInset;
@property(readonly, nonatomic) struct CGSize containerSize;
- (void)scrollToSectionController:(IGListSectionController *)arg1 atIndex:(long long)arg2 scrollPosition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)performBatchAnimated:(_Bool)arg1 updates:(void (^)(id <IGListBatchContext>))arg2 completion:(void (^)(_Bool))arg3;
- (void)invalidateLayoutForSectionController:(IGListSectionController *)arg1 completion:(void (^)(_Bool))arg2;
- (UICollectionReusableView *)dequeueReusableSupplementaryViewOfKind:(NSString *)arg1 forSectionController:(IGListSectionController *)arg2 nibName:(NSString *)arg3 bundle:(NSBundle *)arg4 atIndex:(long long)arg5;
- (UICollectionReusableView *)dequeueReusableSupplementaryViewFromStoryboardOfKind:(NSString *)arg1 withIdentifier:(NSString *)arg2 forSectionController:(IGListSectionController *)arg3 atIndex:(long long)arg4;
- (UICollectionReusableView *)dequeueReusableSupplementaryViewOfKind:(NSString *)arg1 forSectionController:(IGListSectionController *)arg2 class:(Class)arg3 atIndex:(long long)arg4;
- (UICollectionViewCell *)dequeueReusableCellFromStoryboardWithIdentifier:(NSString *)arg1 forSectionController:(IGListSectionController *)arg2 atIndex:(long long)arg3;
- (UICollectionViewCell *)dequeueReusableCellWithNibName:(NSString *)arg1 bundle:(NSBundle *)arg2 forSectionController:(IGListSectionController *)arg3 atIndex:(long long)arg4;
- (UICollectionViewCell *)dequeueReusableCellOfClass:(Class)arg1 forSectionController:(IGListSectionController *)arg2 atIndex:(long long)arg3;
- (void)deselectItemAtIndex:(long long)arg1 sectionController:(IGListSectionController *)arg2 animated:(_Bool)arg3;
- (NSArray *)visibleIndexPathsForSectionController:(IGListSectionController *)arg1;
- (NSArray *)visibleCellsForSectionController:(IGListSectionController *)arg1;
- (UICollectionViewCell *)cellForItemAtIndex:(long long)arg1 sectionController:(IGListSectionController *)arg2;
- (long long)indexForCell:(UICollectionViewCell *)arg1 sectionController:(IGListSectionController *)arg2;
- (struct CGSize)containerSizeForSectionController:(IGListSectionController *)arg1;
@end

