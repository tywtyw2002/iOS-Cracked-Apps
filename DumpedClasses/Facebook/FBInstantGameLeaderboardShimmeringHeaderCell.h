//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBInstantGameRoundableCell.h"

@class FBInstantGameUIMetrics, FBShimmeringView, FBUserSession, UIImageView, UIView;

@interface FBInstantGameLeaderboardShimmeringHeaderCell : FBInstantGameRoundableCell
{
    FBInstantGameUIMetrics *_metrics;
    FBUserSession *_session;
    FBShimmeringView *_shimmeringView;
    UIView *_cellContainerView;
    UIImageView *_headerIconView;
    UIView *_headerTitleView;
    UIView *_separatorView;
}

- (void).cxx_destruct;
- (struct CGSize)_headerTitleViewSize;
- (void)layoutSubviews;
- (id)initWithSession:(id)arg1 resuseIdentifier:(id)arg2;

@end
