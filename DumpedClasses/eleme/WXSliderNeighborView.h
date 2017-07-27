//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableDictionary, NSMutableSet, NSTimer, WXIndicatorView;

@interface WXSliderNeighborView : UIView
{
    _Bool _dragging;
    _Bool _scrolling;
    _Bool _vertical;
    _Bool _scrollEnabled;
    _Bool _pagingEnabled;
    _Bool _bounces;
    _Bool _didDrag;
    _Bool _decelerating;
    _Bool _stopAtItemBoundary;
    _Bool _scrollToItemBoundary;
    _Bool _centerItemWhenSelected;
    _Bool _wrapEnabled;
    _Bool _inited;
    WXIndicatorView *_indicator;
    id <WXSliderNeighborDelegate> _delegate;
    id <WXSliderNeighborDataSource> _dataSource;
    double _perspective;
    double _autoscroll;
    double _scrollOffset;
    double _previousTranslation;
    double _decelerationRate;
    UIView *_contentView;
    NSMutableDictionary *_itemViews;
    long long _numberOfVisibleItems;
    long long _numberOfItems;
    long long _numberOfPlaceholders;
    NSMutableSet *_itemViewPool;
    NSMutableSet *_placeholderViewPool;
    double _startTime;
    double _lastTime;
    double _startVelocity;
    double _offsetMultiplier;
    double _startOffset;
    double _endOffset;
    double _scrollSpeed;
    double _bounceDistance;
    double _scrollDuration;
    NSTimer *_timer;
    long long _numberOfPlaceholdersToShow;
    double _previousScrollOffset;
    double _toggleTime;
    double _toggle;
    long long _previousItemIndex;
    double _itemWidth;
    struct CGSize _contentOffset;
    struct CGSize _viewpointOffset;
}

@property(nonatomic) _Bool inited; // @synthesize inited=_inited;
@property(readonly, nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) long long previousItemIndex; // @synthesize previousItemIndex=_previousItemIndex;
@property(readonly, nonatomic) double toggle; // @synthesize toggle=_toggle;
@property(nonatomic) double toggleTime; // @synthesize toggleTime=_toggleTime;
@property(nonatomic) double previousScrollOffset; // @synthesize previousScrollOffset=_previousScrollOffset;
@property(nonatomic) long long numberOfPlaceholdersToShow; // @synthesize numberOfPlaceholdersToShow=_numberOfPlaceholdersToShow;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic, getter=isWrapEnabled) _Bool wrapEnabled; // @synthesize wrapEnabled=_wrapEnabled;
@property(nonatomic) double scrollDuration; // @synthesize scrollDuration=_scrollDuration;
@property(nonatomic) _Bool centerItemWhenSelected; // @synthesize centerItemWhenSelected=_centerItemWhenSelected;
@property(nonatomic) _Bool scrollToItemBoundary; // @synthesize scrollToItemBoundary=_scrollToItemBoundary;
@property(nonatomic) _Bool stopAtItemBoundary; // @synthesize stopAtItemBoundary=_stopAtItemBoundary;
@property(nonatomic) double bounceDistance; // @synthesize bounceDistance=_bounceDistance;
@property(nonatomic) double scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
@property(nonatomic) struct CGSize viewpointOffset; // @synthesize viewpointOffset=_viewpointOffset;
@property(nonatomic) struct CGSize contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) double offsetMultiplier; // @synthesize offsetMultiplier=_offsetMultiplier;
@property(nonatomic) double startVelocity; // @synthesize startVelocity=_startVelocity;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableSet *placeholderViewPool; // @synthesize placeholderViewPool=_placeholderViewPool;
@property(retain, nonatomic) NSMutableSet *itemViewPool; // @synthesize itemViewPool=_itemViewPool;
@property(readonly, nonatomic) long long numberOfPlaceholders; // @synthesize numberOfPlaceholders=_numberOfPlaceholders;
@property(readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(readonly, nonatomic) long long numberOfVisibleItems; // @synthesize numberOfVisibleItems=_numberOfVisibleItems;
@property(retain, nonatomic) NSMutableDictionary *itemViews; // @synthesize itemViews=_itemViews;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating; // @synthesize decelerating=_decelerating;
@property(nonatomic) _Bool didDrag; // @synthesize didDrag=_didDrag;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) double previousTranslation; // @synthesize previousTranslation=_previousTranslation;
@property(nonatomic) double scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(nonatomic) double autoscroll; // @synthesize autoscroll=_autoscroll;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) double perspective; // @synthesize perspective=_perspective;
@property(nonatomic) __weak id <WXSliderNeighborDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WXSliderNeighborDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WXIndicatorView *indicator; // @synthesize indicator=_indicator;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)dequeuePlaceholderView;
- (id)dequeueItemView;
- (void)queuePlaceholderView:(id)arg1;
- (void)queueItemView:(id)arg1;
- (void)loadUnloadViews;
- (id)loadViewAtIndex:(long long)arg1;
- (id)loadViewAtIndex:(long long)arg1 withContainerView:(id)arg2;
- (void)insertView:(id)arg1 atIndex:(long long)arg2;
- (void)removeViewAtIndex:(long long)arg1;
- (void)setItemView:(id)arg1 forIndex:(long long)arg2;
- (id)itemViewAtPoint:(struct CGPoint)arg1;
- (long long)indexOfItemViewOrSubview:(id)arg1;
- (long long)indexOfItemView:(id)arg1;
- (id)currentItemView;
- (id)itemViewAtIndex:(long long)arg1;
- (id)visibleItemViews;
- (id)indexesForVisibleItems;
- (void)stopAnimation;
- (void)startAnimation;
- (void)didScroll;
- (_Bool)shouldScroll;
- (_Bool)shouldDecelerate;
- (void)startDecelerating;
- (double)decelerationDistance;
- (double)easeInOut:(double)arg1;
- (void)step;
- (void)reloadItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)insertItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)removeItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollByNumberOfItems:(long long)arg1 duration:(double)arg2;
- (void)scroll2ItemViewAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scroll2ItemViewAtIndex:(long long)arg1 duration:(double)arg2;
- (void)scroll2Offset:(double)arg1 duration:(double)arg2;
- (void)scrollByOffset:(double)arg1 duration:(double)arg2;
- (double)minScrollDistanceFromOffset:(double)arg1 toOffset:(double)arg2;
- (double)clampedOffset:(double)arg1;
- (long long)clampedIndex:(long long)arg1;
- (long long)minScrollDistanceFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (long long)lastItemIndex;
- (long long)nextItemIndex;
- (long long)currentItemIndex;
- (void)reloadData;
- (void)popAnimationState;
- (void)pushAnimationState:(_Bool)arg1;
- (void)didTap:(id)arg1;
- (void)didPan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewOrSuperview:(id)arg1 ofClass:(Class)arg2;
- (_Bool)viewOrSuperview:(id)arg1 implementsSelector:(SEL)arg2;
- (long long)viewOrSuperviewIndex:(id)arg1;
- (double)valueForOption:(long long)arg1 withDefault:(double)arg2;
- (void)layOutItemViews;
- (void)depthSortViews;
- (void)transformItemView:(id)arg1 atIndex:(long long)arg2;
- (struct CATransform3D)transformForItemViewWithOffset:(double)arg1;
- (void)transformItemViews;
- (id)containView:(id)arg1;
- (double)alphaForItemWithOffset:(double)arg1;
- (double)offsetForItemAtIndex:(long long)arg1;
- (void)updateNumberOfVisibleItems;
- (long long)circularCarouselItemCount;
- (void)updateItemWidth;
- (void)setCurrentItemIndex:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

