//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NSString;

@interface EODVipReminder : NVMModel
{
    NSString *_text;
    NSArray *_hightlightTexts;
    NSString *_directURL;
}

+ (unsigned long long)dayForDate:(id)arg1;
+ (void)renewTheConfigsIfNeeded;
+ (void)tapVipReminder;
+ (void)closeVipReminder;
+ (_Bool)fetchVipReminderData;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *directURL; // @synthesize directURL=_directURL;
@property(copy, nonatomic) NSArray *hightlightTexts; // @synthesize hightlightTexts=_hightlightTexts;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)attributedReminder;
- (_Bool)showVipReminder;

@end

