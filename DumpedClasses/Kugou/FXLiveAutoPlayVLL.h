//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FXLiveAutoPlayViewDelegate.h"

@class FXBllKeyModel, FXLiveAutoPlayView, NSString, NSTimer, UIView;

@interface FXLiveAutoPlayVLL : NSObject <FXLiveAutoPlayViewDelegate>
{
    _Bool _isMobileLive;
    _Bool _isEnterBackground;
    _Bool _isPlaying;
    _Bool _isLoadingPlay;
    int _retryCount;
    id _delegate;
    NSTimer *_timer;
    UIView *_autoPlayBgView;
    FXLiveAutoPlayView *_playLiveView;
    FXBllKeyModel *_bllkey;
    unsigned long long _roomId;
}

@property(nonatomic) unsigned long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) _Bool isLoadingPlay; // @synthesize isLoadingPlay=_isLoadingPlay;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) FXBllKeyModel *bllkey; // @synthesize bllkey=_bllkey;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool isEnterBackground; // @synthesize isEnterBackground=_isEnterBackground;
@property(nonatomic) _Bool isMobileLive; // @synthesize isMobileLive=_isMobileLive;
@property(retain, nonatomic) FXLiveAutoPlayView *playLiveView; // @synthesize playLiveView=_playLiveView;
@property(retain, nonatomic) UIView *autoPlayBgView; // @synthesize autoPlayBgView=_autoPlayBgView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isAutoPlayCellShowing;
- (_Bool)isAutoPlayCell:(id)arg1;
- (void)handlePlayerStatus:(long long)arg1 ext1:(int)arg2 ext2:(int)arg3;
- (void)hidePlayLiveView;
- (void)showPlayLiveView:(id)arg1 urlArray:(id)arg2;
- (void)handleGetMobileStreamInfo:(id)arg1;
- (void)handleGetCommonStreamInfo:(id)arg1;
- (void)handleGetStreamError;
- (void)getMobileLiveStreamInfo:(long long)arg1;
- (void)getCommonLiveStreamInfo:(long long)arg1;
- (void)autoPlayLiveTimerEvent;
- (void)stopAutoPlayLive;
- (void)startAutoPlayLive;
- (void)handleStartAutoPlayLive;
- (_Bool)isCanStartAutoPlayLive;
- (_Bool)isOpenAutoLivePlay;
- (void)reachabilityChanged:(id)arg1;
- (void)appEnterBackgroundNotificationEvent;
- (void)appWillEnterForegroundNotificationEvent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
