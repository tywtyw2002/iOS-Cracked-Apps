//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface PPQ_CameraInfo : NSObject
{
    _Bool _needGuideInCamera;
    _Bool _needAdviceEdit;
    _Bool _need3GAlert;
    _Bool _needNoShareAlert;
    _Bool _isTaiwanArea;
    _Bool _isTaiwanLanguage;
    _Bool _canUpOn3G;
    long long _inputType;
    long long _cameraStyle;
    long long _pingbackType;
    long long _showToView;
    NSURL *_videoURL;
    NSString *_uploadingFilePath;
    NSString *_userId;
    NSString *_authCookie;
    CDUnknownBlockType _loginHandle;
    NSString *_mkey;
    long long _vipType;
    NSString *_sessionId;
    CDUnknownBlockType _upOn3GAlertHandle;
}

+ (void)open3G;
+ (_Bool)canUpOn3G;
+ (_Bool)isTaiwanLanguage;
+ (_Bool)isTaiwanArea;
+ (long long)vipType;
+ (id)sessionId;
+ (id)mkey;
+ (void)loadLoginMode;
+ (_Bool)isLogin;
+ (id)authCookie;
+ (id)userId;
+ (id)uploadingFilePath;
+ (id)videoURL;
+ (_Bool)customStyle;
+ (long long)inputType;
+ (id)userSettings;
+ (void)releaseInfo;
+ (void)allocInfo;
+ (id)defaultInfo;
@property(copy, nonatomic) CDUnknownBlockType upOn3GAlertHandle; // @synthesize upOn3GAlertHandle=_upOn3GAlertHandle;
@property(nonatomic) _Bool canUpOn3G; // @synthesize canUpOn3G=_canUpOn3G;
@property(nonatomic) _Bool isTaiwanLanguage; // @synthesize isTaiwanLanguage=_isTaiwanLanguage;
@property(nonatomic) _Bool isTaiwanArea; // @synthesize isTaiwanArea=_isTaiwanArea;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long vipType; // @synthesize vipType=_vipType;
@property(copy, nonatomic) NSString *mkey; // @synthesize mkey=_mkey;
@property(copy, nonatomic) CDUnknownBlockType loginHandle; // @synthesize loginHandle=_loginHandle;
@property(copy, nonatomic) NSString *authCookie; // @synthesize authCookie=_authCookie;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *uploadingFilePath; // @synthesize uploadingFilePath=_uploadingFilePath;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) long long showToView; // @synthesize showToView=_showToView;
@property(nonatomic) _Bool needNoShareAlert; // @synthesize needNoShareAlert=_needNoShareAlert;
@property(nonatomic) _Bool need3GAlert; // @synthesize need3GAlert=_need3GAlert;
@property(nonatomic) long long pingbackType; // @synthesize pingbackType=_pingbackType;
@property(nonatomic) long long cameraStyle; // @synthesize cameraStyle=_cameraStyle;
@property(nonatomic) _Bool needAdviceEdit; // @synthesize needAdviceEdit=_needAdviceEdit;
@property(nonatomic) _Bool needGuideInCamera; // @synthesize needGuideInCamera=_needGuideInCamera;
@property(nonatomic) long long inputType; // @synthesize inputType=_inputType;
- (void).cxx_destruct;
- (id)toDictionaryValue;
- (id)init;
- (void)dealloc;

@end

