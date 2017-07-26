//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageOutput.h"

#import "AVPlayerItemOutputPullDelegate.h"

@class AVAsset, AVAssetReader, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, GLProgram, GPUImageMovieWriter, NSString, NSURL;

@interface GPUImageMovie : GPUImageOutput <AVPlayerItemOutputPullDelegate>
{
    _Bool audioEncodingIsFinished;
    _Bool videoEncodingIsFinished;
    GPUImageMovieWriter *synchronizedMovieWriter;
    struct __CVOpenGLESTextureCache *coreVideoTextureCache;
    AVAssetReader *reader;
    AVPlayerItemVideoOutput *playerItemOutput;
    CADisplayLink *displayLink;
    CDStruct_1b6d18a9 previousFrameTime;
    double previousActualFrameTime;
    _Bool keepLooping;
    unsigned int luminanceTexture;
    unsigned int chrominanceTexture;
    GLProgram *yuvConversionProgram;
    int yuvConversionPositionAttribute;
    int yuvConversionTextureCoordinateAttribute;
    int yuvConversionLuminanceTextureUniform;
    int yuvConversionChrominanceTextureUniform;
    int yuvConversionMatrixUniform;
    unsigned int yuvConversionFramebuffer;
    const float *_preferredConversion;
    int imageBufferWidth;
    int imageBufferHeight;
    _Bool _runBenchmark;
    _Bool _playAtActualSpeed;
    _Bool _shouldRepeat;
    NSURL *_url;
    AVAsset *_asset;
    id <GPUImageMovieDelegate> _delegate;
    AVPlayerItem *_playerItem;
}

@property(retain) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) id <GPUImageMovieDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool playAtActualSpeed; // @synthesize playAtActualSpeed=_playAtActualSpeed;
@property(nonatomic) _Bool runBenchmark; // @synthesize runBenchmark=_runBenchmark;
@property(retain) AVAsset *asset; // @synthesize asset=_asset;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool videoEncodingIsFinished;
@property(readonly, nonatomic) _Bool audioEncodingIsFinished;
@property(readonly, nonatomic) AVAssetReader *assetReader;
- (void)destroyYUVConversionFBO;
- (void)createYUVConversionFBO;
- (void)setYUVConversionFBO;
- (void)convertYUVToRGBOutput;
- (void)cancelProcessing;
- (void)endProcessing;
- (void)processMovieFrame:(struct __CVBuffer *)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2;
- (void)processMovieFrame:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)readNextAudioSampleFromOutput:(id)arg1;
- (_Bool)readNextVideoFrameFromOutput:(id)arg1;
- (void)displayLinkCallback:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)processPlayerItem;
- (void)processAsset;
- (id)createAssetReader;
- (void)startProcessing;
- (void)enableSynchronizedEncodingUsingMovieWriter:(id)arg1;
- (void)dealloc;
- (void)textureCacheSetup;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
