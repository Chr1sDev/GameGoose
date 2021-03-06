//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtobufMessage.h"

@class NSMutableArray, NSString;

@interface WriteErrorArgs : NSObject <ProtobufMessage>
{
    int cachedSize;
    int cachedSizeId;
    NSString *source;
    NSString *error;
    NSString *details;
    NSString *stacktrace;
    NSMutableArray *extraData;
}

+ (id)writeErrorArgsWithSource:(id)arg1 error:(id)arg2 details:(id)arg3 stacktrace:(id)arg4 extraData:(id)arg5;
@property(retain) NSMutableArray *extraData; // @synthesize extraData;
@property(retain) NSString *stacktrace; // @synthesize stacktrace;
@property(retain) NSString *details; // @synthesize details;
@property(retain) NSString *error; // @synthesize error;
@property(retain) NSString *source; // @synthesize source;
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(id)arg1;
- (void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2;
- (id)initWithSource:(id)arg1 error:(id)arg2 details:(id)arg3 stacktrace:(id)arg4 extraData:(id)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

