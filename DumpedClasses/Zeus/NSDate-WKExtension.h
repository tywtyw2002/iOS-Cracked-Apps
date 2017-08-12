//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (WKExtension)
+ (id)getCurrentSystemTime;
+ (int)minutesSinceMidnight:(id)arg1;
+ (_Bool)isHourMinuteBetween:(id)arg1 toTime:(id)arg2;
+ (long long)nowValue:(unsigned long long)arg1;
+ (id)dateYesterday;
+ (id)dateTomorrow;
+ (id)dateWithDaysBeforeNow:(long long)arg1;
+ (id)dateWithDaysFromNow:(long long)arg1;
+ (long long)daysBeforeTodayByYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (id)covertShortStringToDate:(id)arg1;
+ (id)covertStringToDate:(id)arg1;
+ (id)dateWithTimeIntervalStrSince1970:(id)arg1;
+ (id)currentCalendar;
+ (id)sharedDateFormatter;
+ (void)initializeStatics;
- (long long)valueToNow:(unsigned long long)arg1;
- (long long)thenValue:(unsigned long long)arg1;
- (id)stringValue:(id)arg1;
- (_Bool)isYesterday;
- (_Bool)isTomorrow;
- (_Bool)isToday;
- (id)dateBySubtractingDays:(long long)arg1;
- (id)dateByAddingDays:(long long)arg1;
- (_Bool)isEqualToDateIgnoringTime:(id)arg1;
- (id)stringWithFullTimeFormat;
- (id)stringWithDateFormat;
- (id)timeAgo;
@end
