//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralListModel.h"

@class NSMutableArray;

@interface TBRspGetPublicCommentList : TBRspGeneralListModel
{
    unsigned int _is_comment_end;
    unsigned int _total_comment_num;
    NSMutableArray *_comment_list;
}

@property(nonatomic) unsigned int total_comment_num; // @synthesize total_comment_num=_total_comment_num;
@property(nonatomic) unsigned int is_comment_end; // @synthesize is_comment_end=_is_comment_end;
@property(retain, nonatomic) NSMutableArray *comment_list; // @synthesize comment_list=_comment_list;
- (void)dealloc;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;

@end
