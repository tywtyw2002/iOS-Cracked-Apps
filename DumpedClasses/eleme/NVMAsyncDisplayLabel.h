//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "NVMAsyncDisplayLayerDelegate.h"

@class NSString;

@interface NVMAsyncDisplayLabel : UILabel <NVMAsyncDisplayLayerDelegate>
{
}

+ (Class)layerClass;
+ (_Bool)supportAsyncDisplay;
- (CDUnknownBlockType)displayBlock;
- (id)currentMetaData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

