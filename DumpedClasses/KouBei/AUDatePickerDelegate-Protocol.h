//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class AUDatePicker;

@protocol AUDatePickerDelegate <UIPickerViewDataSource, UIPickerViewDelegate>
- (void)selectedPickerView:(AUDatePicker *)arg1;
- (void)cancelPickerView:(AUDatePicker *)arg1;
@end

