//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ESPFoodListDataProvider, ESPRestaurant, NSMutableDictionary, NSString, NVMFoodIdentity, NVMPopoverView;

@interface ESPQualityFoodListTableView : NVMTableView <UITableViewDataSource, UITableViewDelegate>
{
    ESPRestaurant *_restaurant;
    NVMFoodIdentity *_targetFoodIdentity;
    CDUnknownBlockType _selectFoodActionBlock;
    CDUnknownBlockType _rebuyAction;
    CDUnknownBlockType _selectBounghtFoodAction;
    CDUnknownBlockType _currentSectionDidChangeBlock;
    NSMutableDictionary *_cachedCellHeightDic;
    ESPFoodListDataProvider *_foodListData;
    NVMPopoverView *_popupView;
}

@property(retain, nonatomic) NVMPopoverView *popupView; // @synthesize popupView=_popupView;
@property(retain, nonatomic) ESPFoodListDataProvider *foodListData; // @synthesize foodListData=_foodListData;
@property(retain, nonatomic) NSMutableDictionary *cachedCellHeightDic; // @synthesize cachedCellHeightDic=_cachedCellHeightDic;
@property(copy, nonatomic) CDUnknownBlockType currentSectionDidChangeBlock; // @synthesize currentSectionDidChangeBlock=_currentSectionDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBounghtFoodAction; // @synthesize selectBounghtFoodAction=_selectBounghtFoodAction;
@property(copy, nonatomic) CDUnknownBlockType rebuyAction; // @synthesize rebuyAction=_rebuyAction;
@property(copy, nonatomic) CDUnknownBlockType selectFoodActionBlock; // @synthesize selectFoodActionBlock=_selectFoodActionBlock;
@property(copy, nonatomic) NVMFoodIdentity *targetFoodIdentity; // @synthesize targetFoodIdentity=_targetFoodIdentity;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)clearAllCachedHeights;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)foodWithIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateWithFoodListData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

