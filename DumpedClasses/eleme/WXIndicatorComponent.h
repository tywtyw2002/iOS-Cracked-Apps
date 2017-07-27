//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

@class UIColor, WXIndicatorView;

@interface WXIndicatorComponent : WXComponent
{
    WXIndicatorView *_indicatorView;
    UIColor *_itemColor;
    UIColor *_itemSelectedColor;
    double _itemSize;
}

@property(nonatomic) double itemSize; // @synthesize itemSize=_itemSize;
@property(retain, nonatomic) UIColor *itemSelectedColor; // @synthesize itemSelectedColor=_itemSelectedColor;
@property(retain, nonatomic) UIColor *itemColor; // @synthesize itemColor=_itemColor;
@property(retain, nonatomic) WXIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void).cxx_destruct;
- (void)updateStyles:(id)arg1;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

