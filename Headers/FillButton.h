//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class SKSpriteNode;

@interface FillButton : SKNode
{
    int num;
    int player;
    int i;
    int j;
    SKSpriteNode *sprite;
}

@property(retain) SKSpriteNode *sprite; // @synthesize sprite;
@property int j; // @synthesize j;
@property int i; // @synthesize i;
@property int player; // @synthesize player;
@property int num; // @synthesize num;
- (void).cxx_destruct;
- (void)setPiece2:(int)arg1;
- (void)setPiece:(int)arg1;
- (id)init;

@end
