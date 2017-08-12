//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQTOMd5Verifier, NSMutableArray, NSString;
@protocol MQQTODownloadSessionDelegate;

@interface MQQTODownloadSession : NSObject
{
    _Bool _hasRequestFailed;
    id <MQQTODownloadSessionDelegate> _delegate;
    NSString *_downloadDirectory;
    MQQTOMd5Verifier *_md5Verifier;
    NSMutableArray *_downloadList;
}

+ (id)downloadSessionWithDownloadList:(id)arg1;
@property(retain, nonatomic) NSMutableArray *downloadList; // @synthesize downloadList=_downloadList;
@property(retain, nonatomic) MQQTOMd5Verifier *md5Verifier; // @synthesize md5Verifier=_md5Verifier;
@property(retain, nonatomic) NSString *downloadDirectory; // @synthesize downloadDirectory=_downloadDirectory;
@property(nonatomic) id <MQQTODownloadSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopDownload;
- (void)startDownload;
- (void)dealloc;
- (id)init;
- (void)downloadSessionDidCompletion;
- (void)downloadInfoDidFailed:(id)arg1;
- (void)downloadInfo:(id)arg1 didCompletionDownload:(id)arg2;
- (void)stopDownloadTask;
- (void)startDownloadTaskWithInfo:(id)arg1;
- (_Bool)startNewDownloadTask;

@end
