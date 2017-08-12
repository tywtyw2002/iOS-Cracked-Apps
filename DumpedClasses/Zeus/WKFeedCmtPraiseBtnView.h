//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol WKFeedCmtPraiseBtnViewDelegate;

@interface WKFeedCmtPraiseBtnView : UIView
{
    _Bool _enabled;
    UILabel *_actionLabel;
    id <WKFeedCmtPraiseBtnViewDelegate> _delegate;
    UIImageView *_btn;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIImageView *btn; // @synthesize btn=_btn;
@property(nonatomic) __weak id <WKFeedCmtPraiseBtnViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
- (void).cxx_destruct;
- (void)viewClicked;
- (void)setBackgroundColor:(id)arg1;
- (void)createViews;
- (void)setBtnEnable:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

@end
