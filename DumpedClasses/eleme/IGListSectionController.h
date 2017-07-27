//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface IGListSectionController : NSObject
{
    _Bool _isFirstSection;
    _Bool _isLastSection;
    UIViewController *_viewController;
    id <IGListCollectionContext> _collectionContext;
    long long _section;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    id <IGListSupplementaryViewSource> _supplementaryViewSource;
    id <IGListDisplayDelegate> _displayDelegate;
    id <IGListWorkingRangeDelegate> _workingRangeDelegate;
    id <IGListScrollDelegate> _scrollDelegate;
    id <IGListDataContext> _dataContext;
    struct UIEdgeInsets _inset;
}

@property(nonatomic) __weak id <IGListDataContext> dataContext; // @synthesize dataContext=_dataContext;
@property(nonatomic) __weak id <IGListScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <IGListWorkingRangeDelegate> workingRangeDelegate; // @synthesize workingRangeDelegate=_workingRangeDelegate;
@property(nonatomic) __weak id <IGListDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
@property(nonatomic) __weak id <IGListSupplementaryViewSource> supplementaryViewSource; // @synthesize supplementaryViewSource=_supplementaryViewSource;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) struct UIEdgeInsets inset; // @synthesize inset=_inset;
@property(nonatomic) _Bool isLastSection; // @synthesize isLastSection=_isLastSection;
@property(nonatomic) _Bool isFirstSection; // @synthesize isFirstSection=_isFirstSection;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <IGListCollectionContext> collectionContext; // @synthesize collectionContext=_collectionContext;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)init;

@end

