//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

@class NVMBreakfastDayDish1, NVMBreakfastDetailDishView1, NVMPopUpTask, UIView;

@interface NVMBreakfastHomeDishDetailController1 : NVMViewController
{
    NVMPopUpTask *_popTask;
    NVMBreakfastDayDish1 *_dayDishModel;
    UIView *_backgroudView;
    NVMBreakfastDetailDishView1 *_detailDishView;
}

@property(retain, nonatomic) NVMBreakfastDetailDishView1 *detailDishView; // @synthesize detailDishView=_detailDishView;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(retain, nonatomic) NVMBreakfastDayDish1 *dayDishModel; // @synthesize dayDishModel=_dayDishModel;
@property(nonatomic) __weak NVMPopUpTask *popTask; // @synthesize popTask=_popTask;
- (void).cxx_destruct;
- (void)hideAnimation;
- (void)showAnimation;
- (void)backgroudViewDidTap:(id)arg1;
- (void)closeButtonDidPressed;
- (void)layoutUI;
- (void)loadData;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

