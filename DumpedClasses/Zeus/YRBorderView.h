//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface YRBorderView : UIView
{
    _Bool _needLineTop;
    _Bool _needLineLeft;
    _Bool _needLineBottom;
    _Bool _needLineRight;
    _Bool _clipsToBoundsWithBorder;
    _Bool _needUpdatePathForBorder;
    double _lineWidthTop;
    double _lineWidthLeft;
    double _lineWidthBottom;
    double _lineWidthRight;
    UIColor *_lineColorTop;
    UIColor *_lineColorLeft;
    UIColor *_lineColorBottom;
    UIColor *_lineColorRight;
    double _radiusTopLeft;
    double _radiusTopRight;
    double _radiusBottomLeft;
    double _radiusBottomRight;
    double _lineDashTop;
    double _lineDashLeft;
    double _lineDashRight;
    double _lineDashBottom;
    UIColor *_fillColor;
    UIBezierPath *_pathForBorder;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) _Bool needUpdatePathForBorder; // @synthesize needUpdatePathForBorder=_needUpdatePathForBorder;
@property(retain, nonatomic) UIBezierPath *pathForBorder; // @synthesize pathForBorder=_pathForBorder;
@property(nonatomic) _Bool clipsToBoundsWithBorder; // @synthesize clipsToBoundsWithBorder=_clipsToBoundsWithBorder;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double lineDashBottom; // @synthesize lineDashBottom=_lineDashBottom;
@property(nonatomic) double lineDashRight; // @synthesize lineDashRight=_lineDashRight;
@property(nonatomic) double lineDashLeft; // @synthesize lineDashLeft=_lineDashLeft;
@property(nonatomic) double lineDashTop; // @synthesize lineDashTop=_lineDashTop;
@property(nonatomic) double radiusBottomRight; // @synthesize radiusBottomRight=_radiusBottomRight;
@property(nonatomic) double radiusBottomLeft; // @synthesize radiusBottomLeft=_radiusBottomLeft;
@property(nonatomic) double radiusTopRight; // @synthesize radiusTopRight=_radiusTopRight;
@property(nonatomic) double radiusTopLeft; // @synthesize radiusTopLeft=_radiusTopLeft;
@property(retain, nonatomic) UIColor *lineColorRight; // @synthesize lineColorRight=_lineColorRight;
@property(retain, nonatomic) UIColor *lineColorBottom; // @synthesize lineColorBottom=_lineColorBottom;
@property(retain, nonatomic) UIColor *lineColorLeft; // @synthesize lineColorLeft=_lineColorLeft;
@property(retain, nonatomic) UIColor *lineColorTop; // @synthesize lineColorTop=_lineColorTop;
@property(nonatomic) double lineWidthRight; // @synthesize lineWidthRight=_lineWidthRight;
@property(nonatomic) double lineWidthBottom; // @synthesize lineWidthBottom=_lineWidthBottom;
@property(nonatomic) double lineWidthLeft; // @synthesize lineWidthLeft=_lineWidthLeft;
@property(nonatomic) double lineWidthTop; // @synthesize lineWidthTop=_lineWidthTop;
@property(nonatomic) _Bool needLineRight; // @synthesize needLineRight=_needLineRight;
@property(nonatomic) _Bool needLineBottom; // @synthesize needLineBottom=_needLineBottom;
@property(nonatomic) _Bool needLineLeft; // @synthesize needLineLeft=_needLineLeft;
@property(nonatomic) _Bool needLineTop; // @synthesize needLineTop=_needLineTop;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void).cxx_destruct;
- (void)setLineDashTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (void)setRadiusTopLeft:(double)arg1 topRight:(double)arg2 bottomLeft:(double)arg3 bottomRight:(double)arg4;
- (void)setLineWidthTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (void)setLineColorTop:(id)arg1 left:(id)arg2 bottom:(id)arg3 right:(id)arg4;
- (void)setNeedLineTop:(_Bool)arg1 left:(_Bool)arg2 bottom:(_Bool)arg3 right:(_Bool)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)bezierPathForBorder;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
