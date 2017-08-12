//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetExportSession, MQQAsset, NSData;

@interface MQQAssetRepresentation : NSObject
{
    NSData *_PH_imageRepresentation;
    id _PH_videoRepresentation;
    _Bool _PH_isInCloud;
    long long _exportStatus;
    MQQAsset *_asset;
    AVAssetExportSession *_videoExportSession;
}

+ (id)assetRepresentationWithAsset:(id)arg1;
@property(retain, nonatomic) AVAssetExportSession *videoExportSession; // @synthesize videoExportSession=_videoExportSession;
@property(retain, nonatomic) MQQAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) long long exportStatus; // @synthesize exportStatus=_exportStatus;
- (void)cancelExport;
- (_Bool)exportToFilePath:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool exporting;
@property(readonly, nonatomic) _Bool isInCloud;
- (unsigned long long)getBytes:(char *)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
@property(readonly, nonatomic) long long size;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (unsigned long long)AL_getBytes:(char *)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
@property(readonly, nonatomic) long long AL_size;
- (void)PH_cancelExport;
- (_Bool)PH_exportToFilePath:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)PH_getVideoBytes:(char *)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)PH_getImageBytes:(char *)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned long long)PH_getBytes:(char *)arg1 fromOffset:(long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
@property(readonly, nonatomic) _Bool PH_isInCloud;
- (long long)PH_videoSize;
@property(readonly, nonatomic) long long PH_size;
@property(readonly, retain, nonatomic) id PH_videoRepresentation;
@property(readonly, retain, nonatomic) NSData *PH_imageRepresentation;

@end
