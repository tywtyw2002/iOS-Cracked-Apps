//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NVMBreakfastUtil : NSObject
{
}

+ (id)h5URLForPath:(id)arg1;
+ (id)h5BaseURLString;
+ (id)baseURLString;
+ (id)fetchObjectForKey:(id)arg1;
+ (_Bool)storeObject:(id)arg1 forKey:(id)arg2;
+ (void)navToWebPage:(id)arg1;
+ (void)shareRedBagWithTitle:(id)arg1 URLString:(id)arg2 description:(id)arg3 imageURLString:(id)arg4;
+ (id)moduleBundle;
+ (double)leftAmountInSecondForEndTime:(id)arg1;
+ (id)createDispathTimerWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)convertDateStringFormat:(id)arg1;
+ (_Bool)isCurrentDate:(long long)arg1;
+ (_Bool)isCurrentTimeBetweenStartTime:(id)arg1 endTime:(id)arg2;
+ (id)getLastDayInWeekFor:(id)arg1;
+ (id)getLastDayInNextWeekFor:(id)arg1;

@end

