//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UIImageView, UILabel, UITableView;

@interface NVMBreakfastShoppingListView1 : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    CDUnknownBlockType _carListViewDidChangeBlock;
    UIView *_deleteAllView;
    UIView *_headerView;
    UIView *_blueView;
    UILabel *_shoppingTitle;
    UIImageView *_trashImageView;
    UILabel *_deleteLabel;
}

@property(retain, nonatomic) UILabel *deleteLabel; // @synthesize deleteLabel=_deleteLabel;
@property(retain, nonatomic) UIImageView *trashImageView; // @synthesize trashImageView=_trashImageView;
@property(retain, nonatomic) UILabel *shoppingTitle; // @synthesize shoppingTitle=_shoppingTitle;
@property(retain, nonatomic) UIView *blueView; // @synthesize blueView=_blueView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *deleteAllView; // @synthesize deleteAllView=_deleteAllView;
@property(copy, nonatomic) CDUnknownBlockType carListViewDidChangeBlock; // @synthesize carListViewDidChangeBlock=_carListViewDidChangeBlock;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setShoppingCarModel:(id)arg1;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

