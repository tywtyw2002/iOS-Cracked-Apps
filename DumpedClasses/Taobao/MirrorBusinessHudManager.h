//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface MirrorBusinessHudManager : NSObject
{
    UIView *_hudBg;
    UIView *_currentVCView;
    double _hudBeginTime;
}

@property(nonatomic) double hudBeginTime; // @synthesize hudBeginTime=_hudBeginTime;
@property(retain, nonatomic) UIView *currentVCView; // @synthesize currentVCView=_currentVCView;
@property(retain, nonatomic) UIView *hudBg; // @synthesize hudBg=_hudBg;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cuteStyleShow;
- (void)hide;
- (void)show;
- (id)init;

@end
