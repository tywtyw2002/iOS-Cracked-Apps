//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@protocol FBMemoryProfilerWindowTouchesHandling;

@interface FBMemoryProfilerWindow : UIWindow
{
    id <FBMemoryProfilerWindowTouchesHandling> _touchesDelegate;
}

@property(nonatomic) __weak id <FBMemoryProfilerWindowTouchesHandling> touchesDelegate; // @synthesize touchesDelegate=_touchesDelegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
