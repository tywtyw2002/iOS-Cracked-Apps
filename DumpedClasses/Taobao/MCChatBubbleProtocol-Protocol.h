//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCChatPageTableViewCellObject;

@protocol MCChatBubbleProtocol <NSObject>
+ (struct CGSize)bubbleSizeForMessage:(id <TBIMMessageAdapter>)arg1 withContainer:(struct CGSize)arg2;
@property(readonly, nonatomic) id <MCBubbleHandlerProtocol> bubbleHandler;
@property(readonly, nonatomic) MCChatPageTableViewCellObject *cellObject;
@property(readonly, nonatomic) long long subStyle;
@property(readonly, nonatomic) long long style;
- (void)recycle;
- (void)updateBubbleWithCellObject:(MCChatPageTableViewCellObject *)arg1 bubbleHandler:(id <MCBubbleHandlerProtocol>)arg2;
- (id)initWithBubbleStyle:(long long)arg1 subStyle:(long long)arg2;
@end
