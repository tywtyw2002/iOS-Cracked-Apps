//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQSharkRequestDelegate-Protocol.h"

@class MQQReportRequest, MQQShortcutReportOp, NSArray, NSString;

@interface MQQShortcutReportManager : NSObject <MQQSharkRequestDelegate>
{
    NSArray *_reportList;
    MQQReportRequest *_shortcutReportRequest;
    MQQShortcutReportOp *_shortcutReportDataBase;
}

+ (id)shareShortcutReporter;
@property(retain, nonatomic) MQQShortcutReportOp *shortcutReportDataBase; // @synthesize shortcutReportDataBase=_shortcutReportDataBase;
@property(retain, nonatomic) MQQReportRequest *shortcutReportRequest; // @synthesize shortcutReportRequest=_shortcutReportRequest;
- (void)cancelShortcutReportRequest;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)reportShortcutOperation;
- (void)recordReportItem:(id)arg1 reportType:(long long)arg2;
- (_Bool)isReportUpLoading;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

