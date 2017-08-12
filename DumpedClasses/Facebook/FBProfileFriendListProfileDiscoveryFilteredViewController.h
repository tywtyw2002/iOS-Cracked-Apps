//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBSearchResultsPilltersActivityListener-Protocol.h"

@class FBProfileDiscoveryFriendListSessionLogger, FBProfileFriendListTableViewController, FBSearchFilterGroup, FBSearchResultsPilltersActivityListenerAnnouncer, FBSearchResultsPilltersViewController, FBUserSession, NSString;

@interface FBProfileFriendListProfileDiscoveryFilteredViewController : UIViewController <FBSearchResultsPilltersActivityListener>
{
    FBUserSession *_session;
    FBSearchResultsPilltersViewController *_pilltersViewController;
    FBProfileDiscoveryFriendListSessionLogger *_analytics;
    FBSearchFilterGroup *_filterGroup;
    FBSearchResultsPilltersActivityListenerAnnouncer *_pilltersActivityAnnouncer;
    FBProfileFriendListTableViewController *_contentViewController;
}

@property(retain, nonatomic) FBProfileFriendListTableViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)pilltersViewController:(id)arg1 didReceiveTapOnFilter:(id)arg2 withValue:(id)arg3 atIndex:(long long)arg4 actionType:(id)arg5;
- (void)pilltersViewControllerDidClearAll:(id)arg1;
- (void)pilltersViewController:(id)arg1 didApplyChangeset:(id)arg2;
- (void)pilltersViewController:(id)arg1 didApplyValue:(id)arg2 forFilter:(id)arg3 atIndex:(long long)arg4;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)displayFilterNuxIfNecessary;
- (void)updateWithFilterGroup:(id)arg1;
- (void)updateTitle:(id)arg1;
- (_Bool)shouldUpdateTitle;
- (_Bool)fb_showNavBarSearchField;
- (void)_logAndClearFriendsSeen;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1 analytics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
