//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMHTTPRequestData.h"

@class NSString;

@interface NVMServicePOIs : NVMHTTPRequestData
{
    NSString *_keyword;
    NSString *_category;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (id)extraParameters;
- (id)initWithType:(id)arg1 keyWord:(id)arg2 cooridinate:(struct CLLocationCoordinate2D)arg3;
- (id)initWithType:(id)arg1;

@end

