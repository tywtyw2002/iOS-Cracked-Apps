//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMImageView, FMPageUserTagDO, FMPersonalIdentityCellComponent, NSString, UIImageView, UILabel;

@interface FMPersonalIdentityView : UIView
{
    _Bool _isShow;
    _Bool _zhimaPairAuthed;
    FMPageUserTagDO *_userTagDO;
    FMImageView *_iconView;
    UILabel *_commentLabel;
    UILabel *_commentValueLabel;
    UIImageView *_arrowView;
    FMPersonalIdentityCellComponent *_cellComponent;
    NSString *_userId;
    NSString *_certificationUrl;
    NSString *_alipayName;
}

@property(copy, nonatomic) NSString *alipayName; // @synthesize alipayName=_alipayName;
@property(retain, nonatomic) NSString *certificationUrl; // @synthesize certificationUrl=_certificationUrl;
@property(nonatomic) _Bool zhimaPairAuthed; // @synthesize zhimaPairAuthed=_zhimaPairAuthed;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) __weak FMPersonalIdentityCellComponent *cellComponent; // @synthesize cellComponent=_cellComponent;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *commentValueLabel; // @synthesize commentValueLabel=_commentValueLabel;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) FMImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) FMPageUserTagDO *userTagDO; // @synthesize userTagDO=_userTagDO;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (id)getZhimaDic:(id)arg1;
- (void)showAlipayDialogViewWithAlipayAccount:(id)arg1;
- (void)showUnbindAlipayAlertView;
- (void)requestZhimaPair:(_Bool)arg1 toast:(_Bool)arg2;
- (void)goToCertification;
- (void)requestZhimaPair:(_Bool)arg1;
- (void)gotoZhimaAuth;
- (void)alertGoAuth:(id)arg1 utAlert:(id)arg2;
- (void)doPairAuth;
- (void)alertPairAuth;
- (void)doZhimaTapAction:(id)arg1;
- (void)requestZhiMaInfo;
- (void)zhimaCellTapped;
- (void)viewDidTapped;
- (void)autoLayoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

