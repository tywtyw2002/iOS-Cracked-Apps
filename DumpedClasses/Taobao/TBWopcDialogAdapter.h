//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WopcDialogAdapter.h"

@class TBWopcDialog;

@interface TBWopcDialogAdapter : WopcDialogAdapter
{
    TBWopcDialog *_dialog;
}

@property(retain, nonatomic) TBWopcDialog *dialog; // @synthesize dialog=_dialog;
- (void).cxx_destruct;
- (void)cancelBtnClick:(CDUnknownBlockType)arg1;
- (void)sureBtnClick:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)show;

@end

