//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABLivenessResult, NSDictionary;

@protocol ABFaceDetectCallback <NSObject>
- (void)doRecord:(NSDictionary *)arg1;
- (void)onLivenessDetectFailed:(long long)arg1 withLivenessResult:(ABLivenessResult *)arg2;
- (void)onLivenessDetectSuccess:(ABLivenessResult *)arg1;
- (void)onFaceDetected:(id)arg1 FaceDetectResult:(struct ABFaceDetectResult)arg2;
@end
