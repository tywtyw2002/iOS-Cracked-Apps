//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface MQQCircleLayer : CAShapeLayer
{
    double _progress;
    double _progressOffset;
}

@property(nonatomic) double progressOffset; // @synthesize progressOffset=_progressOffset;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)update;
- (void)setFrame:(struct CGRect)arg1;

@end
