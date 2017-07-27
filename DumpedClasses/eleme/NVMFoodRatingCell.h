//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NVMFoodImage, UIImageView, UILabel, UIView;

@interface NVMFoodRatingCell : UICollectionViewCell
{
    UIImageView *_foodImageView;
    NVMFoodImage *_foodImage;
    UILabel *_titleLabel;
    UIView *_unRateMaskView;
    UILabel *_ratingTextLabel;
    UIImageView *_nicePhotoIcon;
}

@property(retain, nonatomic) UIImageView *nicePhotoIcon; // @synthesize nicePhotoIcon=_nicePhotoIcon;
@property(retain, nonatomic) UILabel *ratingTextLabel; // @synthesize ratingTextLabel=_ratingTextLabel;
@property(retain, nonatomic) UIView *unRateMaskView; // @synthesize unRateMaskView=_unRateMaskView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NVMFoodImage *foodImage; // @synthesize foodImage=_foodImage;
@property(retain, nonatomic) UIImageView *foodImageView; // @synthesize foodImageView=_foodImageView;
- (void).cxx_destruct;
- (void)removeRatingTextLabel;
- (void)addRatingTextLabel;
- (void)loadViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

