//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WeAppUIScrollViewSpeed : NSObject
{
    double _lastOffsetCapture;
    double _scrollSpeed;
    CDUnknownBlockType _speedChanged;
    struct CGPoint _lastOffset;
}

@property(copy, nonatomic) CDUnknownBlockType speedChanged; // @synthesize speedChanged=_speedChanged;
@property(nonatomic) double scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
@property(nonatomic) double lastOffsetCapture; // @synthesize lastOffsetCapture=_lastOffsetCapture;
@property(nonatomic) struct CGPoint lastOffset; // @synthesize lastOffset=_lastOffset;
- (void).cxx_destruct;
- (void)calculateSpeedWithScrollView:(id)arg1;
- (void)reset;
- (id)init;

@end
