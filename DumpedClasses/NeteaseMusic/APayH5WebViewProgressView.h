//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface APayH5WebViewProgressView : UIView
{
    float _progress;
    UIView *_progressBarView;
    double _barAnimationDuration;
    double _fadeAnimationDuration;
    double _fadeOutDelay;
}

@property(nonatomic) double fadeOutDelay; // @synthesize fadeOutDelay=_fadeOutDelay;
@property(nonatomic) double fadeAnimationDuration; // @synthesize fadeAnimationDuration=_fadeAnimationDuration;
@property(nonatomic) double barAnimationDuration; // @synthesize barAnimationDuration=_barAnimationDuration;
@property(retain, nonatomic) UIView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)configureViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
