//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (YKNotification)
+ (_Bool)postNotification:(id)arg1 withObject:(id)arg2;
+ (_Bool)postNotification:(id)arg1;
+ (id)NOTIFICATION_TYPE;
+ (id)NOTIFICATION;
- (_Bool)postNotification:(id)arg1 withObject:(id)arg2;
- (_Bool)postNotification:(id)arg1;
- (void)unobserveAllNotifications;
- (void)unobserveNotification:(id)arg1;
- (void)observeNotification:(id)arg1;
- (void)handleNotification:(id)arg1;
@end
