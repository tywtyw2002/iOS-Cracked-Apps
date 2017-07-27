//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, NVMBreakfastLargeButton, NVMBreakfastMyRedPacketResponse, UILabel, UITableView, UIView;

@interface NVMBreakfastChooseRedPacketViewController : NVMViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _inLoading;
    _Bool _isCheckButtonDidTap;
    int _canUseRedPacketCount;
    int _currentPage;
    double _foodAmount;
    long long _voucherId;
    NSString *_phoneNo;
    CDUnknownBlockType _didSelectRedPacketBlock;
    UIView *_cancelAllRedPacketView;
    UILabel *_cancelTitleLabel;
    NVMBreakfastLargeButton *_cancelButton;
    UIView *_desLabelsContainerView;
    UILabel *_haveLabel;
    UILabel *_countLabel;
    UILabel *_desLabel;
    UIView *_headerView;
    UITableView *_redbagTableView;
    NVMBreakfastMyRedPacketResponse *_redPacketResponse;
    NSMutableArray *_myRedBagList;
}

@property(nonatomic) _Bool isCheckButtonDidTap; // @synthesize isCheckButtonDidTap=_isCheckButtonDidTap;
@property(nonatomic) _Bool inLoading; // @synthesize inLoading=_inLoading;
@property(retain, nonatomic) NSMutableArray *myRedBagList; // @synthesize myRedBagList=_myRedBagList;
@property(retain, nonatomic) NVMBreakfastMyRedPacketResponse *redPacketResponse; // @synthesize redPacketResponse=_redPacketResponse;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) UITableView *redbagTableView; // @synthesize redbagTableView=_redbagTableView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *haveLabel; // @synthesize haveLabel=_haveLabel;
@property(retain, nonatomic) UIView *desLabelsContainerView; // @synthesize desLabelsContainerView=_desLabelsContainerView;
@property(retain, nonatomic) NVMBreakfastLargeButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *cancelTitleLabel; // @synthesize cancelTitleLabel=_cancelTitleLabel;
@property(retain, nonatomic) UIView *cancelAllRedPacketView; // @synthesize cancelAllRedPacketView=_cancelAllRedPacketView;
@property(nonatomic) int canUseRedPacketCount; // @synthesize canUseRedPacketCount=_canUseRedPacketCount;
@property(copy, nonatomic) CDUnknownBlockType didSelectRedPacketBlock; // @synthesize didSelectRedPacketBlock=_didSelectRedPacketBlock;
@property(nonatomic) NSString *phoneNo; // @synthesize phoneNo=_phoneNo;
@property(nonatomic) long long voucherId; // @synthesize voucherId=_voucherId;
@property(nonatomic) double foodAmount; // @synthesize foodAmount=_foodAmount;
- (void).cxx_destruct;
- (void)exchangeButtonItemDidTap:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)checkButtonDidTap:(id)arg1;
- (void)cancelButtonDidTap:(id)arg1;
- (unsigned long long)canUseAmount;
- (void)cancelAllRedpacket;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadData;
- (void)updateRegbagCheck;
- (void)updateUseAmountView;
- (void)layoutUI;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

