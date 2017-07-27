//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NVMOrderItemExtra;

@interface NVMOrderBasket : NVMModel
{
    NSArray *_extras;
    NVMOrderItemExtra *_agentFee;
    NVMOrderItemExtra *_packingFee;
    NSArray *_personItemGroup;
    NSArray *_pindanMap;
    NVMOrderItemExtra *_hongbao;
    NSArray *_virtualProducts;
}

+ (id)personItemGroupJSONTransformer;
+ (id)virtualProductsJSONTransformer;
+ (id)paymentConstitutionJSONTransformer;
+ (id)packingFeeJSONTransformer;
+ (id)agentFeeJSONTransformer;
+ (id)extrasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *virtualProducts; // @synthesize virtualProducts=_virtualProducts;
@property(copy, nonatomic) NVMOrderItemExtra *hongbao; // @synthesize hongbao=_hongbao;
@property(copy, nonatomic) NSArray *pindanMap; // @synthesize pindanMap=_pindanMap;
@property(copy, nonatomic) NSArray *personItemGroup; // @synthesize personItemGroup=_personItemGroup;
@property(copy, nonatomic) NVMOrderItemExtra *packingFee; // @synthesize packingFee=_packingFee;
@property(copy, nonatomic) NVMOrderItemExtra *agentFee; // @synthesize agentFee=_agentFee;
@property(copy, nonatomic) NSArray *extras; // @synthesize extras=_extras;
- (void).cxx_destruct;
- (long long)totalQuantity;
- (void)setupPersonItemOwner;
- (id)theMostExpensiveItem;
- (id)foodItems;
- (id)detailItems;
- (id)detailPersonItems;

@end

