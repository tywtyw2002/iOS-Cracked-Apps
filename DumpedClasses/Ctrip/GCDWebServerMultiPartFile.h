//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCDWebServerMultiPart.h"

@class NSString;

@interface GCDWebServerMultiPartFile : GCDWebServerMultiPart
{
    NSString *_fileName;
    NSString *_temporaryPath;
}

@property(readonly, nonatomic) NSString *temporaryPath; // @synthesize temporaryPath=_temporaryPath;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithControlName:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 temporaryPath:(id)arg4;

@end

