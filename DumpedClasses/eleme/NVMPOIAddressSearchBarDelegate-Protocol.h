//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NVMPOIAddressSearchBar;

@protocol NVMPOIAddressSearchBarDelegate <NSObject>
- (void)searchBarSearchButtonClicked:(NVMPOIAddressSearchBar *)arg1;
- (void)searchBar:(NVMPOIAddressSearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarTextDidBeginEditing:(NVMPOIAddressSearchBar *)arg1;
@end

