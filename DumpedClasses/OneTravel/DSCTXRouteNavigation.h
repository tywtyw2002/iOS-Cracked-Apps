//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DMConnectionWrapperDelegate.h"

@class DMConnectionWrapper, DSCTXRoute, DiMapView, DiRouteOverlayGroup, NSArray, NSString, ONETimer, SCTXTrafficStatusReq;

@interface DSCTXRouteNavigation : NSObject <DMConnectionWrapperDelegate>
{
    DiMapView *_qMapView;
    NSArray *_drawLineEventsArray;
    DSCTXRoute *_qDidiSCTXRoute;
    SCTXTrafficStatusReq *_sCTXTrafficStatusReq;
    ONETimer *_timer;
    void *_rgHandle;
    DiRouteOverlayGroup *_qRouteOverlayGroup;
}

@property(retain, nonatomic) DiRouteOverlayGroup *qRouteOverlayGroup; // @synthesize qRouteOverlayGroup=_qRouteOverlayGroup;
@property(nonatomic) void *rgHandle; // @synthesize rgHandle=_rgHandle;
@property(retain, nonatomic) ONETimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) SCTXTrafficStatusReq *sCTXTrafficStatusReq; // @synthesize sCTXTrafficStatusReq=_sCTXTrafficStatusReq;
@property(retain, nonatomic) DSCTXRoute *qDidiSCTXRoute; // @synthesize qDidiSCTXRoute=_qDidiSCTXRoute;
@property(retain, nonatomic) NSArray *drawLineEventsArray; // @synthesize drawLineEventsArray=_drawLineEventsArray;
@property(nonatomic) __weak DiMapView *qMapView; // @synthesize qMapView=_qMapView;
- (void).cxx_destruct;
- (void)refreshRouteOverlay:(id)arg1 routeID:(id)arg2;
- (_Bool)isValidTraffic:(id)arg1;
- (void)deleteRoute;
- (void)clearRoute;
- (struct _DSCTXEventPoint)eventPointFromRoutePoint:(struct _DiDiRouteEventPoint)arg1;
- (int)updateThroughedIndex:(int)arg1;
- (void)updateGrayLineTo:(struct _DiDiRouteGPSPoint)arg1 NextEventPoint:(struct _DSCTXEventPoint)arg2;
- (void)updateGrayLineTo:(int)arg1 DSCTXMapPoint:(struct _DiDiRouteMapPoint)arg2;
- (struct _DiDiRouteGPSPoint)writeLocation:(id)arg1 lon:(double *)arg2 lat:(double *)arg3 course:(double *)arg4;
- (void)dealloc;
- (id)initWithMapView:(id)arg1;
- (id)parseTrafficRadioArray:(id)arg1;
- (id)parseRainbowV2:(id)arg1;
- (void)drawRoute;
- (id)addRouteOverlay:(id)arg1;
- (void)setDSCTXRouteToEngine:(id)arg1;
@property(readonly, nonatomic) long long routeOverlayGroupIndex;
- (void)handleDynamicRouteConnectionItemDidFail:(id)arg1;
- (void)handleDynamicRouteConnectionItemDidFinish:(id)arg1;
- (void)connectionItem:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionItemDidFinish:(id)arg1;
- (void)updateRainbowData;
- (void)stopRouteTrafficRefresh;
- (void)startRouteTrafficRefresh;
@property(retain, nonatomic) DMConnectionWrapper *qConnectionItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
