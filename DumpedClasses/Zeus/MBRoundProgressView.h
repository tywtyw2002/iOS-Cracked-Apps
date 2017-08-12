//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface MBRoundProgressView : UIView
{
    _Bool _annular;
    float _progress;
    UIColor *_progressTintColor;
    UIColor *_backgroundTintColor;
}

@property(nonatomic, getter=isAnnular) _Bool annular; // @synthesize annular=_annular;
@property(retain, nonatomic) UIColor *backgroundTintColor; // @synthesize backgroundTintColor=_backgroundTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
