//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtobufMessage.h"

@class NSMutableArray, NSString;

@interface PayVaultGiveArgs : NSObject <ProtobufMessage>
{
    int cachedSize;
    int cachedSizeId;
    NSMutableArray *items;
    NSString *targetUserId;
}

+ (id)payVaultGiveArgsWithItems:(id)arg1 targetUserId:(id)arg2;
@property(retain) NSString *targetUserId; // @synthesize targetUserId;
@property(retain) NSMutableArray *items; // @synthesize items;
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(id)arg1;
- (void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2;
- (id)initWithItems:(id)arg1 targetUserId:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

