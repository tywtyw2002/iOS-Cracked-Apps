//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@interface UIScrollView (ScrollsToTop)
+ (void)makeOnlyThisScrollViewScrollToTopOnStatusBarTap:(id)arg1;
+ (void)forceNewViewsDefaultValueForScrollsToTop;
+ (void)load;
- (void)disableScrollsToTopIfNotTheChosenOne;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)didAddScrollToTopObserver;
- (void)setDidAddScrollToTopObserver:(_Bool)arg1;
- (void)AGS_didMoveToWindowNew;
- (void)makeOnlyThisScrollViewScrollToTopOnStatusBarTap;
@end
