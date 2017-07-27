//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NSString;

@interface ESPAutoCompletionResult : NVMModel
{
    NSArray *_restaurants;
    NSArray *_foods;
    NSArray *_words;
    NSString *_searchWord;
    NSString *_rankID;
    NSArray *_rawRestaurants;
    NSArray *_rawFoods;
    NSArray *_rawWords;
}

+ (id)rawWordsJSONTransformer;
+ (id)rawFoodsJSONTransformer;
+ (id)rawRestaurantsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *rawWords; // @synthesize rawWords=_rawWords;
@property(copy, nonatomic) NSArray *rawFoods; // @synthesize rawFoods=_rawFoods;
@property(copy, nonatomic) NSArray *rawRestaurants; // @synthesize rawRestaurants=_rawRestaurants;
@property(copy, nonatomic) NSString *rankID; // @synthesize rankID=_rankID;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(copy, nonatomic) NSArray *words; // @synthesize words=_words;
@property(copy, nonatomic) NSArray *foods; // @synthesize foods=_foods;
@property(copy, nonatomic) NSArray *restaurants; // @synthesize restaurants=_restaurants;
- (void).cxx_destruct;

@end

