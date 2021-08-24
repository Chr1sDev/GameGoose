//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtobufMessage.h"

@class NSString;

@interface Achievement : NSObject <ProtobufMessage>
{
    int cachedSize;
    int cachedSizeId;
    unsigned int progressGoal;
    unsigned int progress;
    NSString *identifier;
    NSString *title;
    NSString *descriptionText;
    NSString *imageUrl;
    long long lastUpdated;
}

+ (id)achievementWithIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 imageUrl:(id)arg4 progressGoal:(unsigned int)arg5 progress:(unsigned int)arg6 lastUpdated:(long long)arg7;
@property long long lastUpdated; // @synthesize lastUpdated;
@property unsigned int progress; // @synthesize progress;
@property unsigned int progressGoal; // @synthesize progressGoal;
@property(retain) NSString *imageUrl; // @synthesize imageUrl;
@property(retain) NSString *descriptionText; // @synthesize descriptionText;
@property(retain) NSString *title; // @synthesize title;
@property(retain) NSString *identifier; // @synthesize identifier;
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(id)arg1;
- (void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 imageUrl:(id)arg4 progressGoal:(unsigned int)arg5 progress:(unsigned int)arg6 lastUpdated:(long long)arg7;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
