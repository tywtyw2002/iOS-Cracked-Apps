//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

@class NSArray, UITableView;

@interface NVMDebugViewController : NVMViewController
{
    UITableView *_tableView;
    NSArray *_dataSource;
}

@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)gotoNetDiagno;
- (void)goToInfo;
- (void)clearCookie;
- (void)clearWebViewCache;
- (void)showDeviceToken;
- (void)gotoQRReaderView;
- (void)viewDidAppear:(_Bool)arg1;
- (id)dataConsumptionRow;
- (id)rowWithData:(id)arg1 didSelectBlock:(CDUnknownBlockType)arg2;
- (void)loadTableData;
- (void)viewDidLoad;

@end

