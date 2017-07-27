//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMLocationServiceProtocol.h"

@class NSString;

@interface NVMLocationServiceProtocolHandler : NSObject <NVMLocationServiceProtocol>
{
    struct CLLocationCoordinate2D _userLocation;
}

@property(nonatomic) struct CLLocationCoordinate2D userLocation; // @synthesize userLocation=_userLocation;
- (void)updateUserLocation:(id)arg1;
- (id)currentCoordinateDictionary;
- (struct CLLocationCoordinate2D)getCachedUserLogicalCoordinate;
- (struct CLLocationCoordinate2D)userLogicalCoordinate;
- (struct CLLocationCoordinate2D)userPhysicalCoordinate;
- (id)cityID;
- (id)geoID;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

