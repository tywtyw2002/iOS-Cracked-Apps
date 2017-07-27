//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NSURL;

@interface QQApiAdItem : NSObject
{
    NSString *_description;
    NSString *_title;
    NSData *_imageData;
    NSURL *_target;
}

@property(retain, nonatomic) NSURL *target; // @synthesize target=_target;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

