//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class NSString;

@interface NVMCheckMarkCell : NVMTableViewCell
{
    _Bool _checked;
    NSString *_checkedImage;
    NSString *_unCheckedImage;
}

@property(copy, nonatomic) NSString *unCheckedImage; // @synthesize unCheckedImage=_unCheckedImage;
@property(copy, nonatomic) NSString *checkedImage; // @synthesize checkedImage=_checkedImage;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (id)uncheckedAccessoryView;
- (id)checkedAccessoryView;
- (void)updateAccessorView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

