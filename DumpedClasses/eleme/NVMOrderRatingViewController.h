//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

@class NSArray, NSString, NVMOrderRating, NVMOrderRatingSubmittingViewController, NVMOrderRatingTableViewController;

@interface NVMOrderRatingViewController : NVMViewController
{
    NSString *_orderID;
    NVMOrderRatingTableViewController *_orderRatingTableViewController;
    NVMOrderRatingSubmittingViewController *_submitViewController;
    NVMOrderRating *_orderRating;
    NSArray *_ratedOrderItems;
    NSArray *_unratedOrderItems;
}

@property(copy, nonatomic) NSArray *unratedOrderItems; // @synthesize unratedOrderItems=_unratedOrderItems;
@property(copy, nonatomic) NSArray *ratedOrderItems; // @synthesize ratedOrderItems=_ratedOrderItems;
@property(retain, nonatomic) NVMOrderRating *orderRating; // @synthesize orderRating=_orderRating;
@property(retain, nonatomic) NVMOrderRatingSubmittingViewController *submitViewController; // @synthesize submitViewController=_submitViewController;
@property(retain, nonatomic) NVMOrderRatingTableViewController *orderRatingTableViewController; // @synthesize orderRatingTableViewController=_orderRatingTableViewController;
@property(copy, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
- (void).cxx_destruct;
- (_Bool)hasUnsubmittedContent;
- (void)popSelf;
- (void)fillInDataWithRatableOption:(_Bool)arg1;
- (void)loadData;
- (id)parametersFromQueryOrFragmentString:(id)arg1;
- (id)parametersFromURLString:(id)arg1;
- (id)commentSuccessSitemapSchemeFromURLString:(id)arg1;
- (void)submitComments;
- (void)popUpReminderIfNeeded;
- (void)favorRestaurantIfNeed;
- (void)justSubmitContents;
- (void)loadRatingSubmittingView;
- (void)configCancelBackButton;
- (void)loadOrderRatingTableViewController;
- (void)viewDidLoad;
- (id)initWithOrderID:(id)arg1;

@end

