//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString<Optional>;

@interface FAUserRichLevelInfo : FAModel
{
    NSString<Optional> *_richCurIcon;
    long long _richCurValue;
    NSString<Optional> *_richNextIcon;
    long long _richNextValue;
    long long _richValue;
}

@property(nonatomic) long long richValue; // @synthesize richValue=_richValue;
@property(nonatomic) long long richNextValue; // @synthesize richNextValue=_richNextValue;
@property(copy, nonatomic) NSString<Optional> *richNextIcon; // @synthesize richNextIcon=_richNextIcon;
@property(nonatomic) long long richCurValue; // @synthesize richCurValue=_richCurValue;
@property(copy, nonatomic) NSString<Optional> *richCurIcon; // @synthesize richCurIcon=_richCurIcon;
- (void).cxx_destruct;

@end
