//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class NSMutableArray, SKSpriteNode;

@interface PokerChip : SKNode
{
    SKSpriteNode *sprite;
    NSMutableArray *shadows;
    int value;
}

@property int value; // @synthesize value;
- (void).cxx_destruct;
- (void)rotate:(float)arg1;
- (void)changeValue:(int)arg1;
- (id)initWithValue:(int)arg1;
- (id)init;

@end

