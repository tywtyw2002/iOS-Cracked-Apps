//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKeyboardView.h"

@interface PKeyboardNumbersView : IKeyboardView
{
    id parentContainerView;
    int keyboardType;
}

@property(nonatomic) int keyboardType; // @synthesize keyboardType;
@property(nonatomic) __weak id parentContainerView; // @synthesize parentContainerView;
- (void).cxx_destruct;
- (void)keyPressed:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

