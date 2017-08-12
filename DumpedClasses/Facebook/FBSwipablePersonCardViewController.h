//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBEntityCardSwipableViewControllerProtocol-Protocol.h"

@class FBMemPerson, FBProviderMap, FBUserSession, NSString, UIScrollView, UIView;
@protocol FBEntityCardsAnalyticsLogger, FBSwipableProfileViewController;

@interface FBSwipablePersonCardViewController : UIViewController <FBEntityCardSwipableViewControllerProtocol>
{
    FBUserSession *_session;
    FBProviderMap *_providerMap;
    FBMemPerson *_person;
    UIViewController<FBSwipableProfileViewController> *_timelineController;
    UIView *_backgroundView;
    NSString *_analyticsUUID;
    id <FBEntityCardsAnalyticsLogger> _logger;
    unsigned long long _cardLoadEvents;
    id _perfEventSequenceId;
}

- (void).cxx_destruct;
- (id)analyticsPresentedViewController;
- (void)_logSwipeupPerfEventEndIfNeeded;
- (void)_markSequenceForCardLoadEvents:(unsigned long long)arg1;
- (void)_timelineFriendOrSubscriberStatusUpdatedNotification:(id)arg1;
- (void)_timelineAnalyticsNotification:(id)arg1;
- (void)scrollToTop:(_Bool)arg1;
- (void)endSwipeTransition:(_Bool)arg1;
- (void)beginSwipeTransition:(_Bool)arg1;
- (void)setEntity:(id)arg1 isPreconfiguring:(_Bool)arg2;
- (void)setAnalytics:(id)arg1;
- (void)analyticsLogWillShow;
- (void)analyticsLogDidHide;
- (id)analyticsModule;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 providerMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
