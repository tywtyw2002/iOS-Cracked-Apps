//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NVMUserDefaults : NSObject
{
}

+ (id)shareUserDefault;
+ (void)load;
+ (id)objectForKey:(id)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (void)removeUserDefault:(id)arg1;
+ (void)alreadyShowedPage:(id)arg1;
+ (_Bool)canShowGuidePage:(id)arg1;
- (void)saveData:(id)arg1;
- (void)dealloc;
- (id)init;

@end

