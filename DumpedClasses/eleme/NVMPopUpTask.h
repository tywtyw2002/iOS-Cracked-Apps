//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, NVMViewController;

@interface NVMPopUpTask : NSObject
{
    NSTimer *_taskTimer;
    double _timerCountDown;
    _Bool _isDisplaying;
    _Bool _disableShowAnimation;
    _Bool _disableHideAnimation;
    NVMViewController *_contentViewController;
    double _displayTime;
    CDUnknownBlockType _showAnimationBlock;
    CDUnknownBlockType _hideAnimationBlock;
    CDUnknownBlockType _taskUpdateBlock;
    CDUnknownBlockType _taskOverBlock;
    unsigned long long _priority;
    double _taskWindowLevel;
}

+ (unsigned long long)marketPopPriority;
+ (unsigned long long)redEnvelopePriority;
+ (unsigned long long)splashPriority;
+ (unsigned long long)newUserPromotionPriority;
@property(nonatomic) _Bool disableHideAnimation; // @synthesize disableHideAnimation=_disableHideAnimation;
@property(nonatomic) _Bool disableShowAnimation; // @synthesize disableShowAnimation=_disableShowAnimation;
@property(nonatomic) double taskWindowLevel; // @synthesize taskWindowLevel=_taskWindowLevel;
@property(nonatomic) _Bool isDisplaying; // @synthesize isDisplaying=_isDisplaying;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType taskOverBlock; // @synthesize taskOverBlock=_taskOverBlock;
@property(copy, nonatomic) CDUnknownBlockType taskUpdateBlock; // @synthesize taskUpdateBlock=_taskUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType hideAnimationBlock; // @synthesize hideAnimationBlock=_hideAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType showAnimationBlock; // @synthesize showAnimationBlock=_showAnimationBlock;
@property(nonatomic) double displayTime; // @synthesize displayTime=_displayTime;
@property(retain, nonatomic) NVMViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)endTimer;
- (void)taskUpdate;
- (void)startTimer;

@end

