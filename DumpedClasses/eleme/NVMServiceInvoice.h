//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMHTTPRequestData.h"

@class NVMInvoice;

@interface NVMServiceInvoice : NVMHTTPRequestData
{
    NVMInvoice *_invoice;
}

+ (id)deleteInvoiceID:(id)arg1 WithCallBack:(CDUnknownBlockType)arg2;
+ (id)updateInvoice:(id)arg1 WithCallBack:(CDUnknownBlockType)arg2;
+ (id)addInvoice:(id)arg1 WithCallBack:(CDUnknownBlockType)arg2;
+ (id)invoicesWithCallBack:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NVMInvoice *invoice; // @synthesize invoice=_invoice;
- (void).cxx_destruct;
- (id)extraParameters;
- (id)initWithType:(unsigned long long)arg1 invoice:(id)arg2;

@end

