//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CAShapeLayer, UIBezierPath;

@interface KtvKrcScoreCell : UICollectionViewCell
{
    UIBezierPath *_standardPath;
    CAShapeLayer *_standardLayer;
    UIBezierPath *_correctPath;
    CAShapeLayer *_correctLayer;
}

@property(retain, nonatomic) CAShapeLayer *correctLayer; // @synthesize correctLayer=_correctLayer;
@property(retain, nonatomic) UIBezierPath *correctPath; // @synthesize correctPath=_correctPath;
@property(retain, nonatomic) CAShapeLayer *standardLayer; // @synthesize standardLayer=_standardLayer;
@property(retain, nonatomic) UIBezierPath *standardPath; // @synthesize standardPath=_standardPath;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)showCorrectLayerForDatas:(id)arg1;
- (void)showScoreLineForDatas:(id)arg1 correctDatas:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
