//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MJKeyValue-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface WKFeedCommentModel : NSObject <MJKeyValue, NSCoding>
{
    _Bool _isUnFold;
    _Bool _isTextUnFold;
    _Bool _showMoreTextBtn;
    int _up;
    NSString *_newsCommentId;
    NSString *_newsId;
    NSString *_uhid;
    NSString *_dhid;
    NSString *_comment;
    NSString *_nickname;
    NSString *_userImg;
    NSString *_lastUpdateOpr;
    NSString *_origin;
    NSString *_channelId;
    NSNumber *_state;
    NSNumber *_delStatus;
    unsigned long long _sequence;
    double _createDt;
    NSString *_createTimeStr;
    NSString *_upStr;
    unsigned long long _attitudeType;
}

@property(nonatomic) _Bool showMoreTextBtn; // @synthesize showMoreTextBtn=_showMoreTextBtn;
@property(nonatomic) _Bool isTextUnFold; // @synthesize isTextUnFold=_isTextUnFold;
@property(nonatomic) _Bool isUnFold; // @synthesize isUnFold=_isUnFold;
@property(nonatomic) unsigned long long attitudeType; // @synthesize attitudeType=_attitudeType;
@property(retain, nonatomic) NSString *upStr; // @synthesize upStr=_upStr;
@property(retain, nonatomic) NSString *createTimeStr; // @synthesize createTimeStr=_createTimeStr;
@property(nonatomic) double createDt; // @synthesize createDt=_createDt;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) int up; // @synthesize up=_up;
@property(retain, nonatomic) NSNumber *delStatus; // @synthesize delStatus=_delStatus;
@property(retain, nonatomic) NSNumber *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSString *lastUpdateOpr; // @synthesize lastUpdateOpr=_lastUpdateOpr;
@property(retain, nonatomic) NSString *userImg; // @synthesize userImg=_userImg;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *dhid; // @synthesize dhid=_dhid;
@property(retain, nonatomic) NSString *uhid; // @synthesize uhid=_uhid;
@property(retain, nonatomic) NSString *newsId; // @synthesize newsId=_newsId;
@property(retain, nonatomic) NSString *newsCommentId; // @synthesize newsCommentId=_newsCommentId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)getSingLineHieght;
- (id)initWithSubCmt:(id)arg1 nickName:(id)arg2 uhid:(id)arg3 title:(id)arg4 userImg:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
