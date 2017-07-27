//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class FLEXNetworkTransaction, NSArray;

@interface FLEXNetworkTransactionDetailTableViewController : UITableViewController
{
    FLEXNetworkTransaction *_transaction;
    NSArray *_sections;
}

+ (id)postBodyDataForTransaction:(id)arg1;
+ (id)detailViewControllerForMIMEType:(id)arg1 data:(id)arg2;
+ (id)networkDetailRowsFromDictionary:(id)arg1;
+ (id)responseHeadersSectionForTransaction:(id)arg1;
+ (id)queryParametersSectionForTransaction:(id)arg1;
+ (id)postBodySectionForTransaction:(id)arg1;
+ (id)requestHeadersSectionForTransaction:(id)arg1;
+ (id)generalSectionForTransaction:(id)arg1;
+ (id)attributedTextForRow:(id)arg1;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) FLEXNetworkTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)rowModelAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)copyButtonPressed:(id)arg1;
- (void)handleTransactionUpdatedNotification:(id)arg1;
- (void)rebuildTableSections;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end

