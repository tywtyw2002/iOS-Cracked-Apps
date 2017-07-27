//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, UIImage, UIImageView, UIPageControl, UIScrollView;

@interface NVMBreakfastBannerView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    id <NVMBreakfastBannerViewAdapter> _adpter;
    NSTimer *_timer;
    UIImageView *_leftImageView;
    UIImageView *_middleImageView;
    UIImageView *_rightImageView;
    NSMutableArray *_imageURLStrings;
    unsigned long long _currentIndex;
    UIImage *_placeHolderImage;
}

@property(retain, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *imageURLStrings; // @synthesize imageURLStrings=_imageURLStrings;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *middleImageView; // @synthesize middleImageView=_middleImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <NVMBreakfastBannerViewAdapter> adpter; // @synthesize adpter=_adpter;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)didTapView:(id)arg1;
- (void)scrollToNext:(id)arg1;
- (void)addTimer;
- (struct CGRect)imageViewFrameWithIndex:(unsigned long long)arg1;
- (unsigned long long)rightIndexForIndex:(unsigned long long)arg1;
- (unsigned long long)leftIndexForIndex:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setAdapter:(id)arg1;
- (unsigned long long)imageCount;
- (void)updateScrollView;
- (void)updatePageControl;
- (void)reloadData;
- (void)didMoveToWindow;
- (void)layoutUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

