//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtobufMessage.h"

@class NSMutableArray, NSString;

@interface CreateRoomArgs : NSObject <ProtobufMessage>
{
    int cachedSize;
    int cachedSizeId;
    _Bool visible;
    _Bool isDevRoom;
    NSString *roomId;
    NSString *roomType;
    NSMutableArray *roomData;
}

+ (id)createRoomArgsWithRoomId:(id)arg1 roomType:(id)arg2 visible:(_Bool)arg3 roomData:(id)arg4 isDevRoom:(_Bool)arg5;
@property _Bool isDevRoom; // @synthesize isDevRoom;
@property(retain) NSMutableArray *roomData; // @synthesize roomData;
@property _Bool visible; // @synthesize visible;
@property(retain) NSString *roomType; // @synthesize roomType;
@property(retain) NSString *roomId; // @synthesize roomId;
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(id)arg1;
- (void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2;
- (id)initWithRoomId:(id)arg1 roomType:(id)arg2 visible:(_Bool)arg3 roomData:(id)arg4 isDevRoom:(_Bool)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
