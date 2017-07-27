//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EODDetailBaseCardCell.h"

@class NSString, NVMOrderAds, UIImageView;

@interface NVMWebAdCell : EODDetailBaseCardCell
{
    UIImageView *_adImageView;
    NVMOrderAds *_orderAds;
    NSString *_orderID;
}

@property(copy, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) NVMOrderAds *orderAds; // @synthesize orderAds=_orderAds;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
- (void).cxx_destruct;
- (id)trackParameter;
- (double)cellHeight;
- (void)goToWeb;
- (void)setOrderAds:(id)arg1 orderID:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

