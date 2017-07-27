//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSupplementaryViewSource.h"

@class ESPHomeHeaderViewModel, ESPHomeNavigationHeaderView, NSString;

@interface ESPHomeHeaderSectionController : IGListSectionController <IGListSupplementaryViewSource>
{
    CDUnknownBlockType _didPressedSearchAction;
    CDUnknownBlockType _didPressedAddressAction;
    ESPHomeHeaderViewModel *_headerViewModel;
    ESPHomeNavigationHeaderView *_headerView;
}

@property(retain, nonatomic) ESPHomeNavigationHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) ESPHomeHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(copy, nonatomic) CDUnknownBlockType didPressedAddressAction; // @synthesize didPressedAddressAction=_didPressedAddressAction;
@property(copy, nonatomic) CDUnknownBlockType didPressedSearchAction; // @synthesize didPressedSearchAction=_didPressedSearchAction;
- (void).cxx_destruct;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

