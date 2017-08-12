//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKTabBarController.h"

#import "UITabBarControllerDelegate-Protocol.h"

@class NSString, UINavigationController, WKNavigationController, WKSettingViewController;

@interface MainViewController : WKTabBarController <UITabBarControllerDelegate>
{
    UINavigationController *connectNavi;
    UINavigationController *feedsNavi;
    WKNavigationController *settingNavi;
    int _appActiveFoot;
    WKSettingViewController *_settingVC;
}

@property(retain, nonatomic) WKSettingViewController *settingVC; // @synthesize settingVC=_settingVC;
@property(nonatomic) int appActiveFoot; // @synthesize appActiveFoot=_appActiveFoot;
- (void).cxx_destruct;
- (void)didSwipeSelectViewControllerAtIndex:(long long)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)checkToJumpFeeds;
- (void)trunkJumpEvent;
- (_Bool)isCurrentInRootViewController;
- (void)onAppBecomeActive:(id)arg1;
- (void)onAppEnterBackground:(id)arg1;
- (void)onAppResignActive:(id)arg1;
- (void)onReceiveClickRedPoint:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)customAppearance;
- (void)setUp;
- (id)imageFromColor:(id)arg1;
- (void)switchToSettingVC;
- (void)dealloc;
- (void)userInfoUpdated;
- (void)removeNotifications;
- (void)addNotifications;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
