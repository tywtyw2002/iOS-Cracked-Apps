//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYPlayerViewController, UITableView;

@interface QYVideoSettingView : UIView
{
    float _screenRate;
    _Bool _isFullScreen;
    UITableView *_settingView;
    QYPlayerViewController *_playerViewController;
    CDUnknownBlockType _backCallback;
}

@property(copy, nonatomic) CDUnknownBlockType backCallback; // @synthesize backCallback=_backCallback;
@property(retain, nonatomic) UITableView *settingView; // @synthesize settingView=_settingView;
- (void).cxx_destruct;
- (long long)getSecondWithItem:(long long)arg1;
- (long long)getItemwithSecond:(long long)arg1;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (void)setScreenRate:(float)arg1 isFull:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andPlayerViewController:(id)arg2;

@end

