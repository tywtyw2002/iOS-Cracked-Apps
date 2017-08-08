//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UIAlertViewDelegate.h"

@class KGThemeButton, KGThemeLabel, KGThemeLine, NSString, UIImageView, UserVisitorMember;

@interface GuestTableViewCell : UITableViewCell <UIAlertViewDelegate>
{
    double _nicknameLabelMaxWidth;
    _Bool _isShowNoticeButton;
    _Bool _hideSeparatorLine;
    _Bool _hideGradeImg;
    _Bool _isShowDeleteButton;
    UserVisitorMember *_data;
    id <GuestTableViewCellDelegate> _delegate;
    UIImageView *_picImgView;
    KGThemeLabel *_nicknameLabel;
    UIImageView *_genderImgView;
    KGThemeLabel *_timeLabel;
    KGThemeButton *_deleteButton;
    KGThemeLine *_lineView;
}

@property(retain, nonatomic) KGThemeLine *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) KGThemeButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) KGThemeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *genderImgView; // @synthesize genderImgView=_genderImgView;
@property(retain, nonatomic) KGThemeLabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *picImgView; // @synthesize picImgView=_picImgView;
@property(nonatomic) _Bool isShowDeleteButton; // @synthesize isShowDeleteButton=_isShowDeleteButton;
@property(nonatomic) _Bool hideGradeImg; // @synthesize hideGradeImg=_hideGradeImg;
@property(nonatomic) _Bool hideSeparatorLine; // @synthesize hideSeparatorLine=_hideSeparatorLine;
@property(nonatomic) id <GuestTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShowNoticeButton; // @synthesize isShowNoticeButton=_isShowNoticeButton;
@property(retain, nonatomic) UserVisitorMember *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)onClickedDelete:(id)arg1;
- (void)onChangeTheme:(id)arg1;
- (void)dealloc;
- (void)addNotify;
- (void)refreshUIWithData:(id)arg1 viewSize:(struct CGSize)arg2;
- (void)layoutSubviews;
- (void)initUI:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 viewSize:(struct CGSize)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
