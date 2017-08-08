//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTSocialBaseCell.h"

@class TTInterestItemModel;

@interface TTInterestCell : TTSocialBaseCell
{
    TTInterestItemModel *_interestModel;
}

+ (double)extraInsetTop;
+ (double)cellHeight;
+ (double)subtitle2FontSize;
+ (double)titleFontSize;
+ (double)spacingOfTitle;
+ (double)imageSize;
+ (double)imageNormalSize;
@property(retain, nonatomic) TTInterestItemModel *interestModel; // @synthesize interestModel=_interestModel;
- (void).cxx_destruct;
- (void)reloadWithModel:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end
