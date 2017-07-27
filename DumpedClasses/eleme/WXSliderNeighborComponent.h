//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "WXSliderNeighborDataSource.h"
#import "WXSliderNeighborDelegate.h"

@class NSMutableArray, NSString, NSTimer, WXSliderNeighborView;

@interface WXSliderNeighborComponent : WXComponent <WXSliderNeighborDelegate, WXSliderNeighborDataSource>
{
    double neighborSpace;
    double neighborAlpha;
    double neighborScale;
    double currentItemScale;
    _Bool _autoPlay;
    _Bool _sliderChangeEvent;
    _Bool _scrollable;
    WXSliderNeighborView *_sliderView;
    unsigned long long _interval;
    long long _index;
    NSMutableArray *_items;
    NSTimer *_autoTimer;
    long long _currentIndex;
    struct CGRect _itemRect;
}

@property(nonatomic) _Bool scrollable; // @synthesize scrollable=_scrollable;
@property(nonatomic) struct CGRect itemRect; // @synthesize itemRect=_itemRect;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool sliderChangeEvent; // @synthesize sliderChangeEvent=_sliderChangeEvent;
@property(retain, nonatomic) NSTimer *autoTimer; // @synthesize autoTimer=_autoTimer;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(retain, nonatomic) WXSliderNeighborView *sliderView; // @synthesize sliderView=_sliderView;
- (void).cxx_destruct;
- (void)updateSliderPage:(_Bool)arg1;
- (void)sliderNeighborDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)sliderNeighborWillBeginDragging:(id)arg1;
- (void)sliderNeighbor:(id)arg1 didScrollToItemAtIndex:(long long)arg2;
- (void)sliderNeighborDidEndScrollingAnimation:(id)arg1;
- (id)sliderNeighbor:(id)arg1 placeholderViewAtIndex:(long long)arg2 reusingView:(id)arg3;
- (_Bool)sliderNeighbor:(id)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (id)sliderNeighbor:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfPlaceholdersInsliderNeighbor:(id)arg1;
- (long long)numberOfItemsInSliderNeighbor:(id)arg1;
- (void)_autoPlayOnTimer;
- (void)_stopAutoPlayTimer;
- (void)_startAutoPlayTimer;
- (void)setNeighborScale:(id)arg1;
- (void)setCurrentItemScale:(id)arg1;
- (void)setNeighborAlpha:(id)arg1;
- (void)setNeighborSpace:(id)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)updateStyles:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)layoutDidFinish;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)dealloc;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

