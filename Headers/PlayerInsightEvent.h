//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtobufMessage.h"

@class NSString;

@interface PlayerInsightEvent : NSObject <ProtobufMessage>
{
    int cachedSize;
    int cachedSizeId;
    int value;
    NSString *eventType;
}

+ (id)playerInsightEventWithEventType:(id)arg1 value:(int)arg2;
@property int value; // @synthesize value;
@property(retain) NSString *eventType; // @synthesize eventType;
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(id)arg1;
- (void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2;
- (id)initWithEventType:(id)arg1 value:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

