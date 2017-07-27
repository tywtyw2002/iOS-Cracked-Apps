//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableDictionary, NSString;

@interface ESPFoodCategoryTableView : NVMTableView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_categorys;
    CDUnknownBlockType _didSelectedCategoryAction;
    NSMutableDictionary *_cachedCellHeightDict;
}

@property(retain, nonatomic) NSMutableDictionary *cachedCellHeightDict; // @synthesize cachedCellHeightDict=_cachedCellHeightDict;
@property(copy, nonatomic) CDUnknownBlockType didSelectedCategoryAction; // @synthesize didSelectedCategoryAction=_didSelectedCategoryAction;
@property(retain, nonatomic) NSArray *categorys; // @synthesize categorys=_categorys;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)configBackground;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

