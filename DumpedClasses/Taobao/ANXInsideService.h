//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ANXInsideService : NSObject
{
    NSMutableArray *_insideServices;
}

+ (id)sharedService;
@property(retain, nonatomic) NSMutableArray *insideServices; // @synthesize insideServices=_insideServices;
- (void).cxx_destruct;
- (void)startServiceWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)holdInsideServices:(id)arg1 flag:(_Bool)arg2;

@end
