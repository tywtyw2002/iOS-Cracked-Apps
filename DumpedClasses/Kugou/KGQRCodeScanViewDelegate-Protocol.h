//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGQRCodeScanView, NSString;

@protocol KGQRCodeScanViewDelegate <NSObject>
- (void)scanView:(KGQRCodeScanView *)arg1 didScanResult:(NSString *)arg2;

@optional
- (void)cannotUseCameraInScanView:(KGQRCodeScanView *)arg1;
- (void)scanViewRequestToSeeGuide:(KGQRCodeScanView *)arg1;
@end
