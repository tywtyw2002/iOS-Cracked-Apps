//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface FMTabBarItemComponent : NSObject
{
    long long _barType;
    UIImage *_normalImage;
    UIImage *_highlightImage;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) UIImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(copy, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(nonatomic) long long barType; // @synthesize barType=_barType;
- (void).cxx_destruct;

@end
