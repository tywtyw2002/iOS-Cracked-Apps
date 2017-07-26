//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface QQGroupMemberRecentChatManager : QQGroupPropertyModel
{
    NSString *_groupCode;
    NSString *_memUin;
    int _curPage;
    int _messageCount;
    id <QQGroupMemberRecentChatDelegate> _delegate;
}

@property(nonatomic) id <QQGroupMemberRecentChatDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *memUin; // @synthesize memUin=_memUin;
@property(retain, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
- (void)dealloc;
- (void)recentChatMsgLoadMore;
- (void)dealRecentChatMessage:(id)arg1 pageSize:(int)arg2;
- (void)loadLocalMessage;
- (void)loadFirstLatestLocalMessage;
- (id)initWithGroupCode:(id)arg1 memUin:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *groupMemberChatMsg; // @dynamic groupMemberChatMsg;
@property(nonatomic) _Bool hasMoreData; // @dynamic hasMoreData;
@property(nonatomic) _Bool isLoding; // @dynamic isLoding;
@property(retain, nonatomic) NSMutableArray *timeSectionTitle; // @dynamic timeSectionTitle;

@end
