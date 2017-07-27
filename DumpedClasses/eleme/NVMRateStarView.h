//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString;

@interface NVMRateStarView : UIView
{
    double _gapDistance;
    NSArray *_imageNames;
    NSString *_unselectedImageName;
    NSArray *_starButtons;
    CDUnknownBlockType _didSelectRankAction;
    double _starButtonSideLength;
}

@property(nonatomic) double starButtonSideLength; // @synthesize starButtonSideLength=_starButtonSideLength;
@property(copy, nonatomic) CDUnknownBlockType didSelectRankAction; // @synthesize didSelectRankAction=_didSelectRankAction;
@property(retain, nonatomic) NSArray *starButtons; // @synthesize starButtons=_starButtons;
@property(copy, nonatomic) NSString *unselectedImageName; // @synthesize unselectedImageName=_unselectedImageName;
@property(retain, nonatomic) NSArray *imageNames; // @synthesize imageNames=_imageNames;
@property(nonatomic) double gapDistance; // @synthesize gapDistance=_gapDistance;
- (void).cxx_destruct;
- (id)accessibilityLabelForIndex:(long long)arg1;
- (long long)rankForIndex:(long long)arg1;
- (long long)indexForRank:(long long)arg1;
- (id)starImageForRank:(long long)arg1;
- (void)refreshStarImageForSelectedRank:(long long)arg1;
- (void)setRank:(long long)arg1;
- (void)setFinalRank:(long long)arg1;
- (void)disableAllStars;
- (void)starButtonPressed:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setupWithSelectedStarImageNames:(id)arg1 unselectedImageName:(id)arg2 gapDistance:(double)arg3 didSelectRankAction:(CDUnknownBlockType)arg4;
- (id)initWithSelectedStarImageNames:(id)arg1 unselectedImageName:(id)arg2 starGapDistance:(double)arg3 didSelectRankAction:(CDUnknownBlockType)arg4;

@end

