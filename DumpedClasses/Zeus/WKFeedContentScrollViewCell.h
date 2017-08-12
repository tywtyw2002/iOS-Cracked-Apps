//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WKFeedPageTabControllerDelegate-Protocol.h"

@class NSString, UILabel, WFKChannel;
@protocol WKFeedContentScrollViewCellDelegate;

@interface WKFeedContentScrollViewCell : UIView <WKFeedPageTabControllerDelegate>
{
    NSString *_reuseIdentifier;
    UILabel *_detailLabel;
    WFKChannel *_channel;
    id <WKFeedContentScrollViewCellDelegate> _delegate;
    unsigned long long _type;
}

+ (id)cellWithScrollView:(id)arg1 identifier:(id)arg2 AtIndex:(unsigned long long)arg3;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <WKFeedContentScrollViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WFKChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)prepareToReuse;
- (void)WKFeedPageTabWillRefreshData;
- (void)WKFeedPageTabViewTabBarSelected;
- (void)WKFeedPageTabViewTabBarUnselected;
- (void)WKFeedPageTabResignActive;
- (void)WKFeedPageTabDidEnterBgAtCurrentVC:(_Bool)arg1;
- (void)WKFeedPageTabDidBecomeActiveAtCurrentVC:(_Bool)arg1;
- (void)WKFeedPageTabViewDidDisAppear;
- (void)WKFeedPageTabViewDidAppear;
- (id)initWithType:(unsigned long long)arg1 reuseIndentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
