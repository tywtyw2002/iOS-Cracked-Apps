//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WIDaoBase.h"

@interface WIHotspotRecordDao : WIDaoBase
{
}

- (id)getByCoordinate:(float)arg1 longitude:(float)arg2;
- (id)getInfoArray;
- (_Bool)removeAll;
- (_Bool)remove:(id)arg1;
- (_Bool)update:(id)arg1;
- (_Bool)add:(id)arg1;
- (_Bool)alterTable;
- (_Bool)createTable;

@end
