//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PersonalSignInteractUser;

@interface PSFIURequestingInfo : NSObject
{
    _Bool _isRequesingInteractedUsers;
    PersonalSignInteractUser *_lastInteractedUser;
    _Bool _hasLoadedAll;
    _Bool _needUpdate;
    unsigned int _serverSeq;
    int _xo;
}

- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool hasLoadedAll; // @dynamic hasLoadedAll;
@property(nonatomic) _Bool isRequesingInteractedUsers; // @dynamic isRequesingInteractedUsers;
@property(retain, nonatomic) PersonalSignInteractUser *lastInteractedUser; // @dynamic lastInteractedUser;
@property(nonatomic) _Bool needUpdate; // @dynamic needUpdate;
@property(nonatomic) unsigned int serverSeq; // @dynamic serverSeq;

@end
