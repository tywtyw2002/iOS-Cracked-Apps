//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FLEXMultiColumnTableViewDataSource.h"
#import "FLEXMultiColumnTableViewDelegate.h"

@class FLEXMultiColumnTableView, NSArray, NSString;

@interface FLEXTableContentViewController : UIViewController <FLEXMultiColumnTableViewDataSource, FLEXMultiColumnTableViewDelegate>
{
    NSArray *_columnsArray;
    NSArray *_contentsArray;
    FLEXMultiColumnTableView *_multiColumView;
}

@property(retain, nonatomic) FLEXMultiColumnTableView *multiColumView; // @synthesize multiColumView=_multiColumView;
@property(retain, nonatomic) NSArray *contentsArray; // @synthesize contentsArray=_contentsArray;
@property(retain, nonatomic) NSArray *columnsArray; // @synthesize columnsArray=_columnsArray;
- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)multiColumnTableView:(id)arg1 didTapHeaderWithText:(id)arg2 sortType:(unsigned long long)arg3;
- (void)multiColumnTableView:(id)arg1 didTapLabelWithText:(id)arg2;
- (double)widthForLeftHeaderInTableView:(id)arg1;
- (double)heightForTopHeaderInTableView:(id)arg1;
- (double)multiColumnTableView:(id)arg1 widthForContentCellInColumn:(long long)arg2;
- (double)multiColumnTableView:(id)arg1 heightForContentCellInRow:(long long)arg2;
- (id)contentAtRow:(long long)arg1;
- (id)contentAtColumn:(long long)arg1 row:(long long)arg2;
- (id)rowNameInRow:(long long)arg1;
- (id)columnNameInColumn:(long long)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)numberOfColumnsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

