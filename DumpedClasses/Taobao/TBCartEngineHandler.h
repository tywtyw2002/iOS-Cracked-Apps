//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBCartEventBase, TBCartTicket, TBShopCartUIModel, TBShopCartView;

@interface TBCartEngineHandler : NSObject
{
    _Bool _cacheCallback;
    _Bool _isLoading;
    int _networkType;
    TBCartEventBase *_eventBase;
    TBShopCartView *_shopCartView;
    TBShopCartUIModel *_cartModel;
    long long _retryCount;
    long long _fillRetry;
    TBCartTicket *_cartTicket;
}

@property(retain, nonatomic) TBCartTicket *cartTicket; // @synthesize cartTicket=_cartTicket;
@property(nonatomic) int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) long long fillRetry; // @synthesize fillRetry=_fillRetry;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool cacheCallback; // @synthesize cacheCallback=_cacheCallback;
@property(retain, nonatomic) TBShopCartUIModel *cartModel; // @synthesize cartModel=_cartModel;
@property(nonatomic) __weak TBShopCartView *shopCartView; // @synthesize shopCartView=_shopCartView;
@property(retain, nonatomic) TBCartEventBase *eventBase; // @synthesize eventBase=_eventBase;
- (void).cxx_destruct;
- (void)popTicketView:(id)arg1 withShop:(id)arg2;
- (void)registerCartEngine;
- (void)handleRequestResultFailedwithEvent:(id)arg1 refreshUI:(_Bool)arg2 showMsg:(id)arg3;
- (void)handleRequestSuccesswithEvent:(id)arg1 refreshData:(_Bool)arg2 refreshUI:(_Bool)arg3 showMsg:(id)arg4 sendNotify:(id)arg5;
- (void)reloadListQuery:(_Bool)arg1 isFirstPage:(_Bool)arg2;
- (void)refreshData;

@end
