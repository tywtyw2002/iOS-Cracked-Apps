//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UILabel;

@interface QLShareCaptionEditButton : UIView <UIGestureRecognizerDelegate>
{
    id <QLShareCaptionEditButtonDelegate> _delegate;
    UIView *_bubble;
    UIView *_arrow;
    UIView *_line;
    UILabel *_editLabel;
    UILabel *_correctLabel;
}

@property(retain, nonatomic) UILabel *correctLabel; // @synthesize correctLabel=_correctLabel;
@property(retain, nonatomic) UILabel *editLabel; // @synthesize editLabel=_editLabel;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UIView *bubble; // @synthesize bubble=_bubble;
@property(nonatomic) __weak id <QLShareCaptionEditButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapAtLocation:(struct CGPoint)arg1;
- (void)didTap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

