//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSearchRequestModel.h"

#import "TBXSearchRequestServiceDelegate.h"

@class NSArray, NSString, TBXSearchRequestService;

@interface TBSearchInshopPromotionTipsModel : TBSearchRequestModel <TBXSearchRequestServiceDelegate>
{
    TBXSearchRequestService *_request;
    NSString *_content;
    NSString *_preContent;
    NSString *_target;
    NSString *_url;
    NSString *_targetTitle;
    NSArray *_keywords;
}

@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *targetTitle; // @synthesize targetTitle=_targetTitle;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *preContent; // @synthesize preContent=_preContent;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) TBXSearchRequestService *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)requestServiceFailed:(id)arg1 Error:(id)arg2;
- (void)requestServiceSuccess:(id)arg1;
- (void)requestServiceStart:(id)arg1;
- (void)getInshopPromotionTipsWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
