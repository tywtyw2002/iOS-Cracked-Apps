//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUStatisticsHandlerV3.h"

@class NSMutableArray;

@interface QYUDragonStatisticsHandlerV3 : QYUStatisticsHandlerV3
{
    NSMutableArray *_statHanders;
}

+ (void)load;
@property(retain, nonatomic) NSMutableArray *statHanders; // @synthesize statHanders=_statHanders;
- (void).cxx_destruct;
- (void)handlePageView:(id)arg1 pageData:(id)arg2;
- (void)handleClickEvent:(id)arg1 cardData:(id)arg2;
- (void)handleShowEvent:(id)arg1 cardData:(id)arg2;

@end

