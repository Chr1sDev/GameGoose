//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtobufMessage.h"

@class NSMutableArray, NSString, PayVaultContents;

@interface PayVaultUsePaymentInfoOutput : NSObject <ProtobufMessage>
{
    int cachedSize;
    int cachedSizeId;
    NSMutableArray *providerResults;
    PayVaultContents *vaultContents;
}

+ (id)payVaultUsePaymentInfoOutputWithProviderResults:(id)arg1 vaultContents:(id)arg2;
@property(retain) PayVaultContents *vaultContents; // @synthesize vaultContents;
@property(retain) NSMutableArray *providerResults; // @synthesize providerResults;
- (int)sizeWithCacheId:(int)arg1;
- (void)deserializeFromReader:(id)arg1;
- (void)serializeToWriter:(id)arg1 sizeCacheId:(int)arg2;
- (id)initWithProviderResults:(id)arg1 vaultContents:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

