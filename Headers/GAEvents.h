//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, NSTimer;

@interface GAEvents : NSObject
{
    NSTimer *_eventQueueTimer;
    NSString *_categorySessionStart;
    NSString *_categorySessionEnd;
    NSString *_categoryDesign;
    NSString *_categoryBusiness;
    NSString *_categoryProgression;
    NSString *_categoryResource;
    NSString *_categoryError;
    NSString *_categorySdkError;
    NSNumber *_queueTimerWaitSeconds;
}

+ (id)sdkErrorTypeString:(long long)arg1;
+ (id)resourceFlowTypeString:(long long)arg1;
+ (id)errorSeverityString:(long long)arg1;
+ (id)progressionStatusString:(long long)arg1;
+ (void)addDimensionsToEventWithEventData:(id)arg1;
+ (void)addEventToStoreWithEventData:(id)arg1;
+ (void)sendSdkErrorEventWithType:(long long)arg1;
+ (void)addErrorEventWithSeverity:(long long)arg1 andMessage:(id)arg2;
+ (void)addDesignEventWithEventId:(id)arg1 andValue:(id)arg2;
+ (void)addProgressionEventWithProgressionStatus:(long long)arg1 andProgression01:(id)arg2 andProgression02:(id)arg3 andProgression03:(id)arg4 andScore:(id)arg5;
+ (void)addResourceEventWithFlowType:(long long)arg1 andCurrency:(id)arg2 andAmount:(id)arg3 andItemType:(id)arg4 andItemId:(id)arg5;
+ (void)addBusinessEventWithCurrency:(id)arg1 andAmount:(long long)arg2 andItemType:(id)arg3 andItemId:(id)arg4 andCartType:(id)arg5 andReceipt:(id)arg6;
+ (void)addSessionEndEvent;
+ (void)addSessionStartEvent;
+ (void)fixMissingSessionEndEvents;
+ (void)deleteAllEvents;
+ (void)cleanupEvents;
+ (void)processEventsWithCategory:(id)arg1 andPerformCleanup:(_Bool)arg2;
+ (void)processEventQueue:(id)arg1;
+ (void)stopEventQueue;
+ (void)startEventQueue;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSNumber *queueTimerWaitSeconds; // @synthesize queueTimerWaitSeconds=_queueTimerWaitSeconds;
@property(retain, nonatomic) NSString *categorySdkError; // @synthesize categorySdkError=_categorySdkError;
@property(retain, nonatomic) NSString *categoryError; // @synthesize categoryError=_categoryError;
@property(retain, nonatomic) NSString *categoryResource; // @synthesize categoryResource=_categoryResource;
@property(retain, nonatomic) NSString *categoryProgression; // @synthesize categoryProgression=_categoryProgression;
@property(retain, nonatomic) NSString *categoryBusiness; // @synthesize categoryBusiness=_categoryBusiness;
@property(retain, nonatomic) NSString *categoryDesign; // @synthesize categoryDesign=_categoryDesign;
@property(retain, nonatomic) NSString *categorySessionEnd; // @synthesize categorySessionEnd=_categorySessionEnd;
@property(retain, nonatomic) NSString *categorySessionStart; // @synthesize categorySessionStart=_categorySessionStart;
@property(retain, nonatomic) NSTimer *eventQueueTimer; // @synthesize eventQueueTimer=_eventQueueTimer;
- (void).cxx_destruct;
- (id)init;

@end

