//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIView;
@protocol FBFriendCenterMenuView;

@interface FBFriendCenterView : UIScrollView
{
    UIView<FBFriendCenterMenuView> *_menuView;
    UIView *_contentView;
    UIView *_menuContainerView;
}

@property(readonly, nonatomic) UIView *menuContainerView; // @synthesize menuContainerView=_menuContainerView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView<FBFriendCenterMenuView> *menuView; // @synthesize menuView=_menuView;
- (void).cxx_destruct;
- (void)setCurrentView:(id)arg1;
- (void)_updateMenuViewFrameAndContentViewContentInset;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 menuView:(id)arg2;

@end
