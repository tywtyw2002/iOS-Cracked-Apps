//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, YYClassPropertyInfo;

@interface _YYModelPropertyMeta : NSObject
{
    NSString *_name;
    unsigned long long _type;
    unsigned long long _nsType;
    _Bool _isCNumber;
    Class _cls;
    Class _genericCls;
    SEL _getter;
    SEL _setter;
    _Bool _isKVCCompatible;
    _Bool _isStructAvailableForKeyedArchiver;
    _Bool _hasCustomClassFromDictionary;
    NSString *_mappedToKey;
    NSArray *_mappedToKeyPath;
    NSArray *_mappedToKeyArray;
    YYClassPropertyInfo *_info;
    _YYModelPropertyMeta *_next;
}

+ (id)metaWithClassInfo:(id)arg1 propertyInfo:(id)arg2 generic:(Class)arg3;
- (void).cxx_destruct;

@end

