//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIImageView;

@interface WKFeedWiFiLogoView : UIView
{
    _Bool _hiedsWhenStoped;
    NSTimer *_timer;
    UIImageView *_imageView;
    UIImageView *_bgImageView;
}

@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool hiedsWhenStoped; // @synthesize hiedsWhenStoped=_hiedsWhenStoped;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)moveAnimation;
- (void)createSubViews;
- (id)init;

@end
