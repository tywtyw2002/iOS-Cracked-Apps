//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSIndexPath, NVMBreakfastDayDish1, NVMBreakfastDishTableView1, UIScrollView;

@protocol NVMBreakfastDishTableViewDelegate1
- (void)NVMBreakfastDishTableViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)NVMBreakfastDishTableViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)NVMBreakfastDishTableViewDidScroll:(UIScrollView *)arg1 firstVisibleIndexPath:(NSIndexPath *)arg2;
- (void)NVMBreakfastDishTableViewWillBeginDragging:(UIScrollView *)arg1;
- (void)NVMBreakfastDishTableView:(NVMBreakfastDishTableView1 *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2 dayDish:(NVMBreakfastDayDish1 *)arg3;
@end

