//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UITapGestureRecognizer;

@interface MMNotificationView : UIView
{
    _Bool _animating;
    _Bool _modalStyle;
    _Bool _modalBgClickClose;
    _Bool _draged;
    id <MMNotificationViewDelegate> _delegate;
    NSString *_identifier;
    UIView *_contentView;
    CDUnknownBlockType _shouldDisplayBlock;
    CDUnknownBlockType _willDisplayBlock;
    CDUnknownBlockType _didDisplayBlock;
    CDUnknownBlockType _willDisappearBlock;
    UIImageView *_bgView;
    unsigned long long _disappearCode;
    CDUnknownBlockType _tapBlock;
    UITapGestureRecognizer *_tapGestureRecognizer;
    double _duration;
    struct CGPoint _currentLocation;
}

+ (id)notifyWithContentView:(id)arg1 duration:(double)arg2 notificationTag:(long long)arg3 identifier:(id)arg4 shouldDisplay:(CDUnknownBlockType)arg5 willDisplay:(CDUnknownBlockType)arg6 andTouchBlock:(CDUnknownBlockType)arg7;
+ (id)notifyWithContentView:(id)arg1 duration:(double)arg2 notificationTag:(long long)arg3 identifier:(id)arg4 shouldDisplay:(CDUnknownBlockType)arg5 andTouchBlock:(CDUnknownBlockType)arg6;
+ (id)notifyWithContentView:(id)arg1 duration:(double)arg2 notificationTag:(long long)arg3 andTouchBlock:(CDUnknownBlockType)arg4;
+ (id)notifyWithText:(id)arg1 detail:(id)arg2 image:(id)arg3 duration:(double)arg4 andTouchBlock:(CDUnknownBlockType)arg5;
+ (void)doViewToRotateIn:(id)arg1;
+ (void)doViewToRotateOut:(id)arg1 viewToRotateIn:(id)arg2;
+ (void)dismissWithNotificationIdentifier:(id)arg1;
+ (void)dismissWithNotificationTag:(long long)arg1;
+ (void)dismissWithNofificationView:(id)arg1;
+ (void)showNextNotification;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool draged; // @synthesize draged=_draged;
@property(nonatomic) struct CGPoint currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) __weak UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) unsigned long long disappearCode; // @synthesize disappearCode=_disappearCode;
@property(nonatomic) _Bool modalBgClickClose; // @synthesize modalBgClickClose=_modalBgClickClose;
@property(nonatomic) _Bool modalStyle; // @synthesize modalStyle=_modalStyle;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(copy, nonatomic, setter=setWillDisappearBlock:) CDUnknownBlockType willDisappearBlock; // @synthesize willDisappearBlock=_willDisappearBlock;
@property(copy, nonatomic) CDUnknownBlockType didDisplayBlock; // @synthesize didDisplayBlock=_didDisplayBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisplayBlock; // @synthesize willDisplayBlock=_willDisplayBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldDisplayBlock; // @synthesize shouldDisplayBlock=_shouldDisplayBlock;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <MMNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)singleTap;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)durationTimeOut;
- (void)layoutSubviews;
- (void)configContentView:(id)arg1;
- (void)panAction:(struct CGPoint)arg1;
- (void)changeDuration:(double)arg1;
- (void)dargEnd;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dismiss;
- (id)initWithContentView:(id)arg1 duration:(double)arg2 notificationTag:(long long)arg3 tapBlock:(CDUnknownBlockType)arg4;
- (void)removeFromSuperview;
- (void)dealloc;

@end
