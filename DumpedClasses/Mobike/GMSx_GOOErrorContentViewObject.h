//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_GOOTextContentViewObject.h"

@class NSString, UIImage;

@interface GMSx_GOOErrorContentViewObject : GMSx_GOOTextContentViewObject
{
    NSString *_detailText;
    UIImage *_errorImage;
    CDUnknownBlockType _errorHandler;
    id <GOOErrorContentViewObjectDelegate> _delegate;
    NSString *_buttonTitle;
}

+ (id)objectWithError:(id)arg1 tryAgainHandler:(CDUnknownBlockType)arg2;
+ (id)objectWithNetworkError:(id)arg1;
+ (id)objectWithTitle:(id)arg1 detailText:(id)arg2 delegate:(id)arg3;
+ (id)objectWithTitle:(id)arg1 detailText:(id)arg2;
+ (id)objectWithTitle:(id)arg1;
+ (id)objectWithTitle:(id)arg1 tryAgainHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) __weak id <GOOErrorContentViewObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) UIImage *errorImage; // @synthesize errorImage=_errorImage;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
- (void).cxx_destruct;
- (Class)contentViewClass;

@end
