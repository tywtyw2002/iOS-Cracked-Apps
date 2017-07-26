//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DbBaseTable.h"

@interface ScheduleDbStateInfoTable : DbBaseTable
{
}

- (void)deleteItem:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (void)deleteItem:(id)arg1 inDb:(id)arg2;
- (void)updateAllReaded:(id)arg1 callback:(id)arg2;
- (void)updateAllReaded:(id)arg1;
- (void)updateReadStatus:(id)arg1 readStatus:(unsigned int)arg2 userdata:(id)arg3 callback:(id)arg4;
- (void)updateReadStatus:(id)arg1 readStatus:(unsigned int)arg2 inDb:(id)arg3;
- (id)recordWithResultSetEx:(id)arg1;
- (id)recordWithResultSet:(id)arg1;
- (id)getOutContentInfoList:(unsigned long long)arg1 endtime:(unsigned long long)arg2;
- (id)getOutContentInfoList:(unsigned long long)arg1 endtime:(unsigned long long)arg2 inDb:(id)arg3;
- (id)getContentInfoList:(unsigned long long)arg1 endtime:(unsigned long long)arg2;
- (id)getContentInfoList:(unsigned long long)arg1 endtime:(unsigned long long)arg2 inDb:(id)arg3;
- (id)getOutScheduleStateInfoList:(unsigned long long)arg1 count:(unsigned int)arg2;
- (id)getOutScheduleStateInfoList:(unsigned long long)arg1 count:(unsigned int)arg2 inDb:(id)arg3;
- (id)getScheduleStateInfoList:(unsigned long long)arg1 count:(unsigned int)arg2;
- (id)getScheduleStateInfoList:(unsigned long long)arg1 count:(unsigned int)arg2 inDb:(id)arg3;
- (void)insertItemArray:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (void)insertItemArray:(id)arg1 inDb:(id)arg2;
- (void)insertItem:(id)arg1;
- (void)insertItem:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (void)insertItem:(id)arg1 inDb:(id)arg2;
- (long long)getEfficacyCountById:(id)arg1;
- (long long)getEfficacyCountById:(id)arg1 inDB:(id)arg2;
- (id)getContentInfoById:(id)arg1;
- (id)getContentInfoById:(id)arg1 inDB:(id)arg2;
- (id)getIndex;
- (id)getTableColumn;
- (id)getTableColumnWithType;

@end
