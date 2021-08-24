//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtobufMessage.h"

@class NSString;

@interface OneScoreValue : NSObject <ProtobufMessage>
{
    int cachedSize;
    int cachedSizeId;
    int score;
    float percentile;
    int topRank;
    NSString *userId;
}

+ (id)oneScoreValueWithUserId:(id)arg1 score:(int)arg2 percentile:(float)arg3 topRank:(int)arg4;
@property int topRank; // @synthesize topRank;
@property float percentile; // @synthesize percentile;
@property int score; // @synthesize score;
@property(retain) NSString *userId; // @synthesize userId;
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(id)arg1;
- (void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2;
- (id)initWithUserId:(id)arg1 score:(int)arg2 percentile:(float)arg3 topRank:(int)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

