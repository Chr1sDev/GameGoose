//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtobufMessage.h"

@class NSMutableArray, NSString;

@interface PlayerInsightState : NSObject <ProtobufMessage>
{
    int cachedSize;
    int cachedSizeId;
    int playersOnline;
    NSMutableArray *segments;
}

+ (id)playerInsightStateWithPlayersOnline:(int)arg1 segments:(id)arg2;
@property(retain) NSMutableArray *segments; // @synthesize segments;
@property int playersOnline; // @synthesize playersOnline;
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(id)arg1;
- (void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2;
- (id)initWithPlayersOnline:(int)arg1 segments:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

