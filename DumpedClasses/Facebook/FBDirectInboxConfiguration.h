//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface FBDirectInboxConfiguration : FBValueObject <NSCopying, NSCoding>
{
    _Bool _showInboxCameraEntrypoints;
    _Bool _showInboxTextEntrypoints;
    _Bool _tapAndHoldToReplay;
    double _threadAvatarSize;
}

@property(readonly, nonatomic) _Bool tapAndHoldToReplay; // @synthesize tapAndHoldToReplay=_tapAndHoldToReplay;
@property(readonly, nonatomic) _Bool showInboxTextEntrypoints; // @synthesize showInboxTextEntrypoints=_showInboxTextEntrypoints;
@property(readonly, nonatomic) _Bool showInboxCameraEntrypoints; // @synthesize showInboxCameraEntrypoints=_showInboxCameraEntrypoints;
@property(readonly, nonatomic) double threadAvatarSize; // @synthesize threadAvatarSize=_threadAvatarSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithThreadAvatarSize:(double)arg1 showInboxCameraEntrypoints:(_Bool)arg2 showInboxTextEntrypoints:(_Bool)arg3 tapAndHoldToReplay:(_Bool)arg4;
- (id)initWithCoder:(id)arg1;

@end
