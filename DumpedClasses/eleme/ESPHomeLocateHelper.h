//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class ESPHomeViewController, NSString;

@interface ESPHomeLocateHelper : NSObject <UIGestureRecognizerDelegate>
{
    ESPHomeViewController *_homeViewController;
    CDUnknownBlockType _locationDidUpdatedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType locationDidUpdatedHandler; // @synthesize locationDidUpdatedHandler=_locationDidUpdatedHandler;
@property(nonatomic) __weak ESPHomeViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)locationChanged;
- (void)startLocatingIfNeed;
- (void)startLocating;
- (void)showChangePlaceViewController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

