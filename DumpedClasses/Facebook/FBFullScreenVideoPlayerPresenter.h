//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUserSession, FBVideoDisplayController, NSString;
@protocol FBNavigationCoordinator;

@interface FBFullScreenVideoPlayerPresenter : NSObject
{
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    NSString *_dismissalMenuItemIdentifier;
    _Bool _isPresenting;
    FBVideoDisplayController *_displayController;
    CDUnknownBlockType _dismissBlock;
}

@property _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) FBVideoDisplayController *displayController; // @synthesize displayController=_displayController;
- (void).cxx_destruct;
- (void)_switchToDismissalMenuItem;
- (void)_onDismissCompletion;
- (_Bool)isPresentingVideoPlayer;
- (void)presentFullScreenPlayerForVideo:(id)arg1 parentStory:(id)arg2 playerOrigin:(id)arg3 playerSuborigin:(id)arg4 referentialThreadID:(id)arg5 dismissalMenuItemIdentifier:(id)arg6 tapSource:(id)arg7 layoutIdiom:(unsigned long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2;

@end
