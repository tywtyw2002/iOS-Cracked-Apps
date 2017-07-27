//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NVMIconNumberView, NVMUpdateNumberModel;

@interface NVMAutoUpdateBadgeNumberView : UIView
{
    NSString *_path;
    NSString *_number;
    NVMUpdateNumberModel *_model;
    NVMIconNumberView *_numberView;
}

@property(retain, nonatomic) NVMIconNumberView *numberView; // @synthesize numberView=_numberView;
@property(retain, nonatomic) NVMUpdateNumberModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)setNumberIconApperanceUserCenterMsgNumber;
- (void)setNumberIconContentColor:(id)arg1;
- (void)setNumberIconCornerRadius:(double)arg1;
- (void)setNumberIconFont:(id)arg1;
- (void)updateOnce;
- (void)stopUpdate;
- (void)startUpdate;
- (void)loadNumberView;
- (id)initWithFrame:(struct CGRect)arg1 viewRadius:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

