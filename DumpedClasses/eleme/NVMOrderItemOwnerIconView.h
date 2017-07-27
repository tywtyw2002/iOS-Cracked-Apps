//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIImage;

@interface NVMOrderItemOwnerIconView : UIView
{
    _Bool _whetherClip;
    UIImage *_icon;
    NSString *_name;
    UIColor *_nameColor;
}

@property(nonatomic) _Bool whetherClip; // @synthesize whetherClip=_whetherClip;
@property(retain, nonatomic) UIColor *nameColor; // @synthesize nameColor=_nameColor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (struct CGSize)sizeForName;
- (id)attrString:(id)arg1;
- (id)attributesForName;
- (struct CGSize)intrinsicContentSize;
- (void)setIconWithURL:(id)arg1 clip:(_Bool)arg2;
- (void)setName:(id)arg1 color:(id)arg2;
- (void)setIcon:(id)arg1 clip:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

