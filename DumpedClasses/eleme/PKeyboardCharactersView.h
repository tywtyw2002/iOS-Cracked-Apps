//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKeyboardView.h"

@class NSMutableArray, NSMutableDictionary, UIButton;

@interface PKeyboardCharactersView : IKeyboardView
{
    _Bool isInShiftMode;
    id parentContainerView;
    NSMutableDictionary *rectToTag;
    UIButton *shiftBtn;
    NSMutableArray *_accessibilityElements;
}

@property(retain, nonatomic) NSMutableArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(retain, nonatomic) UIButton *shiftBtn; // @synthesize shiftBtn;
@property(retain, nonatomic) NSMutableDictionary *rectToTag; // @synthesize rectToTag;
@property(retain, nonatomic) id parentContainerView; // @synthesize parentContainerView;
@property(nonatomic) _Bool isInShiftMode; // @synthesize isInShiftMode;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)retriveTagByPoint:(struct CGPoint)arg1 inRect:(struct CGRect *)arg2;
- (void)layerKeyPressed:(long long)arg1;
- (void)keyPressed:(id)arg1;
- (void)unShift;
- (void)keyDown:(long long)arg1 inRect:(struct CGRect)arg2;
- (id)createRowKeys:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

