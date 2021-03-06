//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class NSString;
@protocol FBProfileActionBarComponentToolbox;

@interface FBProfileIntentBoostComponent : CKCompositeComponent
{
    _Bool _shouldShowIntentMatchedBannerAnimation;
    NSString *_intentStatus;
    id <FBProfileActionBarComponentToolbox> _toolbox;
    NSString *_targetPersonId;
}

+ (id)newWithModel:(id)arg1 shouldShowIntentMatchedBannerAnimation:(_Bool)arg2 toolbox:(id)arg3;
@property(readonly, nonatomic) _Bool shouldShowIntentMatchedBannerAnimation; // @synthesize shouldShowIntentMatchedBannerAnimation=_shouldShowIntentMatchedBannerAnimation;
@property(readonly, copy, nonatomic) NSString *targetPersonId; // @synthesize targetPersonId=_targetPersonId;
@property(readonly, nonatomic) id <FBProfileActionBarComponentToolbox> toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, copy, nonatomic) NSString *intentStatus; // @synthesize intentStatus=_intentStatus;
- (void).cxx_destruct;

@end

