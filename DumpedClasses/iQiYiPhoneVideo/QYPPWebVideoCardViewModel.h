//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewModel.h"

@class NSString, UIImage;

@interface QYPPWebVideoCardViewModel : BaseViewModel
{
    int _certifyType;
    NSString *_videoTitle;
    NSString *_portraitUrl;
    UIImage *_portraitPlaceholder;
    NSString *_publisherName;
    NSString *_coverUrl;
    UIImage *_coverPlaceholder;
    NSString *_clickRate;
    NSString *_releaseTime;
    NSString *_commentCount;
    NSString *_favoriteCount;
    NSString *_videoCount;
    long long _cardHeight;
}

@property(nonatomic) int certifyType; // @synthesize certifyType=_certifyType;
@property(nonatomic) long long cardHeight; // @synthesize cardHeight=_cardHeight;
@property(retain, nonatomic) NSString *videoCount; // @synthesize videoCount=_videoCount;
@property(retain, nonatomic) NSString *favoriteCount; // @synthesize favoriteCount=_favoriteCount;
@property(retain, nonatomic) NSString *commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *releaseTime; // @synthesize releaseTime=_releaseTime;
@property(retain, nonatomic) NSString *clickRate; // @synthesize clickRate=_clickRate;
@property(retain, nonatomic) UIImage *coverPlaceholder; // @synthesize coverPlaceholder=_coverPlaceholder;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(retain, nonatomic) UIImage *portraitPlaceholder; // @synthesize portraitPlaceholder=_portraitPlaceholder;
@property(retain, nonatomic) NSString *portraitUrl; // @synthesize portraitUrl=_portraitUrl;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
- (void).cxx_destruct;
- (void)assignProperty:(id)arg1;
- (void)transform;

@end

