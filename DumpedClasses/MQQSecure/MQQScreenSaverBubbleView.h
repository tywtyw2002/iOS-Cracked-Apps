//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSTimer;

@interface MQQScreenSaverBubbleView : UIView
{
    NSMutableArray *_bubbleInUsed;
    NSMutableArray *_bubbleInUnused;
    NSTimer *_timer;
    double _aOfLine;
    double _bOfLine;
    double _cOfLine;
    _Bool _isUpsideLine;
}

@property(nonatomic) _Bool isUpsideLine; // @synthesize isUpsideLine=_isUpsideLine;
@property(nonatomic) double cOfLine; // @synthesize cOfLine=_cOfLine;
@property(nonatomic) double bOfLine; // @synthesize bOfLine=_bOfLine;
@property(nonatomic) double aOfLine; // @synthesize aOfLine=_aOfLine;
- (_Bool)isPointValid:(struct CGPoint)arg1;
- (double)distanceForPoint:(struct CGPoint)arg1;
- (void)createBubble;
- (void)updateBubbles;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)stopBubbleAnimation;
- (void)startBubbleAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
