//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "NVMBreakfastModelTableViewAdapter.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSMutableArray, NSString, NVMBreakfastAdItemModel, NVMBreakfastChooseRedPacketViewController, NVMBreakfastDetailCellModel, NVMBreakfastDiscountedCellModel, NVMBreakfastDisplayCellModel, NVMBreakfastEditCellModel, NVMBreakfastModelTableView, NVMBreakfastOrderADView, NVMBreakfastOrderConfirmBottomBar, NVMBreakfastOrderPromptDto, NVMBreakfastRedPacketBean, NVMBreakfastSectionModel, NVMBreakfastShoppingData, NVMBreakfastTableViewModel, NVMBreakfastTakawayListData, NVMBreakfastTakeawayBean, NVMBreakfastUseVoucherData, UIAlertView, UILabel, UITableView, UIView;

@interface NVMBreakfastOrderConfirmViewController : NVMViewController <UITableViewDelegate, UITableViewDataSource, NVMBreakfastModelTableViewAdapter, UIAlertViewDelegate, UITextFieldDelegate>
{
    _Bool _degrade;
    long long _shoppingId;
    NSString *_buildingId;
    long long _cityId;
    CDUnknownBlockType _recieveErrorBlock;
    NVMBreakfastShoppingData *_shoppingData;
    NSArray *_myOrderDayMenuList;
    NVMBreakfastTakawayListData *_takawayInfoList;
    NVMBreakfastUseVoucherData *_voucherData;
    NVMBreakfastAdItemModel *_adItemModel;
    NVMBreakfastRedPacketBean *_redPacketBean;
    unsigned long long _lastTakeawayId;
    NSString *_lastTakeawayTime;
    NVMBreakfastTakeawayBean *_currentTakeawayBean;
    NVMBreakfastOrderPromptDto *_lastPromptDto;
    NVMBreakfastTableViewModel *_viewModel;
    NSMutableArray *_takeawayLocationList;
    NSArray *_takeawayTimeExtend;
    NVMBreakfastModelTableView *_modelTableView;
    UITableView *_dishTableView;
    NVMBreakfastOrderConfirmBottomBar *_bottomBar;
    NVMBreakfastOrderADView *_adView;
    UILabel *_noticeLabel;
    UIAlertView *_serverAlertView;
    UIAlertView *_promptAlertView;
    NVMBreakfastDetailCellModel *_placeSelectDetailCellModel;
    NVMBreakfastEditCellModel *_placeDetailCellModel;
    NVMBreakfastDetailCellModel *_timeSelectDetailCellModel;
    NVMBreakfastDetailCellModel *_redPacketCellModel;
    NVMBreakfastDisplayCellModel *_redPacketDiscountedCellModel;
    NVMBreakfastDiscountedCellModel *_orderModel;
    NVMBreakfastEditCellModel *_peopleNameCellModel;
    NVMBreakfastEditCellModel *_phoneNumCellModel;
    NVMBreakfastEditCellModel *_companyNameModel;
    NSString *_userName;
    NSString *_phoneNum;
    NSString *_companyName;
    NVMBreakfastSectionModel *_section4;
    NVMBreakfastChooseRedPacketViewController *_chooseRedPacketViewController;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NVMBreakfastChooseRedPacketViewController *chooseRedPacketViewController; // @synthesize chooseRedPacketViewController=_chooseRedPacketViewController;
@property(retain, nonatomic) NVMBreakfastSectionModel *section4; // @synthesize section4=_section4;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NVMBreakfastEditCellModel *companyNameModel; // @synthesize companyNameModel=_companyNameModel;
@property(retain, nonatomic) NVMBreakfastEditCellModel *phoneNumCellModel; // @synthesize phoneNumCellModel=_phoneNumCellModel;
@property(retain, nonatomic) NVMBreakfastEditCellModel *peopleNameCellModel; // @synthesize peopleNameCellModel=_peopleNameCellModel;
@property(retain, nonatomic) NVMBreakfastDiscountedCellModel *orderModel; // @synthesize orderModel=_orderModel;
@property(retain, nonatomic) NVMBreakfastDisplayCellModel *redPacketDiscountedCellModel; // @synthesize redPacketDiscountedCellModel=_redPacketDiscountedCellModel;
@property(retain, nonatomic) NVMBreakfastDetailCellModel *redPacketCellModel; // @synthesize redPacketCellModel=_redPacketCellModel;
@property(retain, nonatomic) NVMBreakfastDetailCellModel *timeSelectDetailCellModel; // @synthesize timeSelectDetailCellModel=_timeSelectDetailCellModel;
@property(retain, nonatomic) NVMBreakfastEditCellModel *placeDetailCellModel; // @synthesize placeDetailCellModel=_placeDetailCellModel;
@property(retain, nonatomic) NVMBreakfastDetailCellModel *placeSelectDetailCellModel; // @synthesize placeSelectDetailCellModel=_placeSelectDetailCellModel;
@property(retain, nonatomic) UIAlertView *promptAlertView; // @synthesize promptAlertView=_promptAlertView;
@property(retain, nonatomic) UIAlertView *serverAlertView; // @synthesize serverAlertView=_serverAlertView;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) NVMBreakfastOrderADView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) NVMBreakfastOrderConfirmBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UITableView *dishTableView; // @synthesize dishTableView=_dishTableView;
@property(retain, nonatomic) NVMBreakfastModelTableView *modelTableView; // @synthesize modelTableView=_modelTableView;
@property(retain, nonatomic) NSArray *takeawayTimeExtend; // @synthesize takeawayTimeExtend=_takeawayTimeExtend;
@property(retain, nonatomic) NSMutableArray *takeawayLocationList; // @synthesize takeawayLocationList=_takeawayLocationList;
@property(retain, nonatomic) NVMBreakfastTableViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NVMBreakfastOrderPromptDto *lastPromptDto; // @synthesize lastPromptDto=_lastPromptDto;
@property(retain, nonatomic) NVMBreakfastTakeawayBean *currentTakeawayBean; // @synthesize currentTakeawayBean=_currentTakeawayBean;
@property(retain, nonatomic) NSString *lastTakeawayTime; // @synthesize lastTakeawayTime=_lastTakeawayTime;
@property(nonatomic) unsigned long long lastTakeawayId; // @synthesize lastTakeawayId=_lastTakeawayId;
@property(retain, nonatomic) NVMBreakfastRedPacketBean *redPacketBean; // @synthesize redPacketBean=_redPacketBean;
@property(retain, nonatomic) NVMBreakfastAdItemModel *adItemModel; // @synthesize adItemModel=_adItemModel;
@property(retain, nonatomic) NVMBreakfastUseVoucherData *voucherData; // @synthesize voucherData=_voucherData;
@property(retain, nonatomic) NVMBreakfastTakawayListData *takawayInfoList; // @synthesize takawayInfoList=_takawayInfoList;
@property(retain, nonatomic) NSArray *myOrderDayMenuList; // @synthesize myOrderDayMenuList=_myOrderDayMenuList;
@property(retain, nonatomic) NVMBreakfastShoppingData *shoppingData; // @synthesize shoppingData=_shoppingData;
@property(nonatomic) _Bool degrade; // @synthesize degrade=_degrade;
@property(copy, nonatomic) CDUnknownBlockType recieveErrorBlock; // @synthesize recieveErrorBlock=_recieveErrorBlock;
@property(nonatomic) long long cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *buildingId; // @synthesize buildingId=_buildingId;
@property(nonatomic) long long shoppingId; // @synthesize shoppingId=_shoppingId;
- (void).cxx_destruct;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)serverIconDidTap:(id)arg1;
- (void)showToaskAndPopWithMessage:(id)arg1;
- (void)invokeBlockAndShowToaskAndPopWithResponseModel:(id)arg1;
- (struct CGSize)getStringRect:(id)arg1;
- (id)takeawayInfoListTotakeawayLocationList:(id)arg1;
- (void)showToastWithMessage:(id)arg1;
- (void)showPromptAlertViewWithPromptDtO:(id)arg1;
- (void)goToPayWebPage:(id)arg1 clareShoppingCar:(_Bool)arg2;
- (void)goToChooseRedPacketViewController;
- (void)hiddenPlacDetailCell;
- (void)showPlaceDetailCell;
- (void)showSelectTimePicker;
- (void)showSelectPlacePickerWithSelectRow:(unsigned long long)arg1;
- (void)modelTableview:(id)arg1 didCretateCell:(id)arg2 indexPath:(id)arg3 model:(id)arg4;
- (void)modelTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)packAmountInfoOutDTOModel;
- (void)packRedPacketModel;
- (void)packDishTableView;
- (void)packSelectModel;
- (void)packPeopleInfoModel;
- (void)packViewModel;
- (void)payButtonDidTap:(id)arg1;
- (void)actionButtonDidTap:(id)arg1;
- (void)commitOrderWithTotalPrice:(double)arg1;
- (void)getUseVoucherWithVoucherId:(long long)arg1;
- (void)getUseVoucherWithVoucherId:(long long)arg1 group:(id)arg2;
- (void)loadADDataWithOrderPrice:(double)arg1;
- (void)loadChooseRedPacketDataWithGroup:(id)arg1;
- (void)loadData;
- (void)updateAdView;
- (void)updateAmountCellAndBottomBar;
- (void)updateRedpacketCell;
- (void)layoutUI;
- (void)customNavigationBar;
- (void)didReceiveMemoryWarning;
- (void)addTrack;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

