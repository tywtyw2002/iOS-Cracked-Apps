//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRegularExpression.h"

@interface NSRegularExpression (ObjectiveCRegexCategories)
+ (id)rx:(id)arg1 options:(unsigned long long)arg2;
+ (id)rx:(id)arg1 ignoreCase:(_Bool)arg2;
+ (id)rx:(id)arg1;
- (id)firstMatchWithDetails:(id)arg1;
- (id)matchesWithDetails:(id)arg1;
- (id)resultToMatch:(id)arg1 original:(id)arg2;
- (id)firstMatch:(id)arg1;
- (id)matches:(id)arg1;
- (id)replace:(id)arg1 withDetailsBlock:(CDUnknownBlockType)arg2;
- (id)replace:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)replace:(id)arg1 with:(id)arg2;
- (id)split:(id)arg1;
- (int)indexOf:(id)arg1;
- (_Bool)isMatch:(id)arg1;
- (id)initWithPattern:(id)arg1;
@end
