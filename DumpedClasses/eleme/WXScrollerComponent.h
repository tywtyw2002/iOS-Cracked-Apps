//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "UIScrollViewDelegate.h"
#import "WXScrollerProtocol.h"

@class NSMutableArray, NSString, WXLoadingComponent, WXRefreshComponent;

@interface WXScrollerComponent : WXComponent <WXScrollerProtocol, UIScrollViewDelegate>
{
    struct CGSize _contentSize;
    _Bool _listenLoadMore;
    double _loadMoreOffset;
    double _previousLoadMoreContentHeight;
    struct CGPoint _lastContentOffset;
    _Bool _scrollable;
    unsigned long long _scrollDirection;
    NSString *_direction;
    _Bool _showScrollBar;
    struct wx_css_node *_scrollerCSSNode;
    CDUnknownBlockType _onScroll;
    unsigned long long _loadmoreretry;
    NSMutableArray *_stickyArray;
    NSMutableArray *_listenerArray;
    WXRefreshComponent *_refreshComponent;
    WXLoadingComponent *_loadingComponent;
}

+ (id)wx_export_method_58;
@property(nonatomic) __weak WXLoadingComponent *loadingComponent; // @synthesize loadingComponent=_loadingComponent;
@property(nonatomic) __weak WXRefreshComponent *refreshComponent; // @synthesize refreshComponent=_refreshComponent;
@property(retain, nonatomic) NSMutableArray *listenerArray; // @synthesize listenerArray=_listenerArray;
@property(retain, nonatomic) NSMutableArray *stickyArray; // @synthesize stickyArray=_stickyArray;
@property(nonatomic) unsigned long long loadmoreretry; // @synthesize loadmoreretry=_loadmoreretry;
@property(copy, nonatomic) CDUnknownBlockType onScroll; // @synthesize onScroll=_onScroll;
- (void).cxx_destruct;
- (void)_calculateFrameWithSuperAbsolutePosition:(struct CGPoint)arg1 gatherDirtyComponents:(id)arg2;
- (unsigned long long)childrenCountForScrollerLayout;
- (unsigned long long)_childrenCountForLayout;
- (void)handleLoadMore;
- (void)scrollToTarget:(id)arg1 scrollRect:(struct CGRect)arg2;
- (void)handleAppear;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)contentInset;
@property(nonatomic) struct CGSize contentSize;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (struct CGPoint)contentOffset;
- (void)loadMore;
- (_Bool)isNeedLoadMore;
- (void)scrollToComponent:(id)arg1 withOffset:(double)arg2;
- (void)removeScrollToListener:(id)arg1;
- (void)addScrollToListener:(id)arg1;
- (void)adjustSticky;
- (void)removeStickyComponent:(id)arg1;
- (void)addStickyComponent:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)dealloc;
- (void)viewWillUnload;
- (void)layoutDidFinish;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (void)_insertSubcomponent:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) struct wx_css_node *scrollerCSSNode;
- (void)resetLoadmore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

