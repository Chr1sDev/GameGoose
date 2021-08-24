//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, PIOBigDB, PlayerIOChannel;

@interface QueuedSave : NSObject
{
    _Bool useOptimisticLock;
    _Bool fullOverwrite;
    _Bool createIfMissing;
    NSMutableArray *objects;
    NSMutableArray *changesets;
    NSMutableArray *futureSaves;
    PIOBigDB *owner;
    PlayerIOChannel *channel;
    CDUnknownBlockType successBlock;
    CDUnknownBlockType errorBlock;
}

@property(copy) CDUnknownBlockType errorBlock; // @synthesize errorBlock;
@property(copy) CDUnknownBlockType successBlock; // @synthesize successBlock;
@property(retain) PlayerIOChannel *channel; // @synthesize channel;
@property(retain) PIOBigDB *owner; // @synthesize owner;
@property(retain) NSMutableArray *futureSaves; // @synthesize futureSaves;
@property(retain) NSMutableArray *changesets; // @synthesize changesets;
@property(retain) NSMutableArray *objects; // @synthesize objects;
@property _Bool createIfMissing; // @synthesize createIfMissing;
@property _Bool fullOverwrite; // @synthesize fullOverwrite;
@property _Bool useOptimisticLock; // @synthesize useOptimisticLock;
- (void)execute;
- (void)done;
- (void)setIsSavingOnAll:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end
