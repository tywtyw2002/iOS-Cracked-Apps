//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface TBMy3DSexSelectingView : UIView
{
    _Bool _selected;
    UIView *_selectedBgView;
    id <TBMy3DSexSelectingViewDelegate> _delegate;
    UILabel *_iconLabel;
}

@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(nonatomic) __weak id <TBMy3DSexSelectingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIView *selectedBgView; // @synthesize selectedBgView=_selectedBgView;
- (void).cxx_destruct;
- (void)viewTapped;
- (id)initWithFrame:(struct CGRect)arg1 sex:(int)arg2;

@end
