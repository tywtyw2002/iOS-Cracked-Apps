//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError;

@protocol OCRQueryResultDelegate <NSObject>

@optional
- (void)recognizeFailureWithSDKError:(NSError *)arg1;
- (void)recognizeSuccessWithArray:(NSArray *)arg1;
- (void)recognizeResultNotSystemWiFiListImage;
- (void)queryOCRResultFailureWithError:(NSError *)arg1;
- (void)queryOCRResultSuccess:(NSDictionary *)arg1;
- (void)startRecognize;
@end
