//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQScrollTouchView, NSSet, UIEvent;

@protocol MQQScrollTouchViewDelegate <NSObject>

@optional
- (void)scrollView:(MQQScrollTouchView *)arg1 touchesCancelled:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)scrollView:(MQQScrollTouchView *)arg1 touchesEnded:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)scrollView:(MQQScrollTouchView *)arg1 touchesMoved:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
- (void)scrollView:(MQQScrollTouchView *)arg1 touchesBegan:(NSSet *)arg2 withEvent:(UIEvent *)arg3;
@end
