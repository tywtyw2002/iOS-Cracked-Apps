//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, NVMBreakfastBuildingHistoryBean, NVMBreakfastCityBean, NVMBreakfastPositionFootView, NVMBreakfastSearchView, UIButton, UITableView;

@interface NVMBreakfastPositionNewSearchViewController : NVMViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    CDUnknownBlockType _didCancelBlock;
    NVMBreakfastCityBean *_lastCityBean;
    CDUnknownBlockType _selectBuidingBlock;
    NVMBreakfastBuildingHistoryBean *_homeHistoryBean;
    UIButton *_cancelButton;
    NVMBreakfastSearchView *_searchView;
    UITableView *_searchTableView;
    NVMBreakfastPositionFootView *_footView;
    NSMutableArray *_buildInfoList;
}

@property(retain, nonatomic) NSMutableArray *buildInfoList; // @synthesize buildInfoList=_buildInfoList;
@property(retain, nonatomic) NVMBreakfastPositionFootView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) UITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) NVMBreakfastSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NVMBreakfastBuildingHistoryBean *homeHistoryBean; // @synthesize homeHistoryBean=_homeHistoryBean;
@property(copy, nonatomic) CDUnknownBlockType selectBuidingBlock; // @synthesize selectBuidingBlock=_selectBuidingBlock;
@property(retain, nonatomic) NVMBreakfastCityBean *lastCityBean; // @synthesize lastCityBean=_lastCityBean;
@property(copy, nonatomic) CDUnknownBlockType didCancelBlock; // @synthesize didCancelBlock=_didCancelBlock;
- (void).cxx_destruct;
- (id)removeInvalidBuildingHistoryBean:(id)arg1;
- (void)applyLabelDidTap:(id)arg1;
- (void)cancelButtonDidTap:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)loadData;
- (void)laytoutUI;
- (void)addTrack;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

