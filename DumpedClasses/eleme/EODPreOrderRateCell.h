//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class EODOrderRateModel;

@interface EODPreOrderRateCell : NVMTableViewCell
{
    EODOrderRateModel *_orderRate;
}

@property(retain, nonatomic) EODOrderRateModel *orderRate; // @synthesize orderRate=_orderRate;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)loadUI;
- (id)initWithOrderRate:(id)arg1;

@end

