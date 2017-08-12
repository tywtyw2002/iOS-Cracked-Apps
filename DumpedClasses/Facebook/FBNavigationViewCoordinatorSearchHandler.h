//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBCustomNavigationController, FBSearchPopoverController, FBUserSession, UIViewController;
@protocol FBNavigationController_DEPRECATED, FBNavigationCoordinator;

@interface FBNavigationViewCoordinatorSearchHandler : NSObject
{
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBCustomNavigationController<FBNavigationController_DEPRECATED> *_navigationController;
    FBSearchPopoverController *_searchPopoverController;
    UIViewController *_popoverHostController;
}

@property(readonly, nonatomic) FBSearchPopoverController *searchPopoverController; // @synthesize searchPopoverController=_searchPopoverController;
- (void).cxx_destruct;
- (id)_emptySearchContextWithPreviousViewController:(id)arg1;
- (_Bool)_showsSearchInPopover;
- (void)_didTapVoiceSearchButton;
- (_Bool)_shouldDisplaySearchInPopover;
- (void)_searchInternalSettingsManagerCreation;
- (void)_purgeCustomSearchViewsFromViewStack;
- (void)_customSearch:(id)arg1 searchContext:(id)arg2;
- (void)_search:(id)arg1 searchContext:(id)arg2;
- (void)_graphSearch:(id)arg1 searchContext:(id)arg2;
- (void)_simpleSearch:(id)arg1 searchContext:(id)arg2;
- (id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 navigationController:(id)arg3 popoverHostController:(id)arg4;

@end
