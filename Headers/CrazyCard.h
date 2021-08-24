//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class CrazyPlayer, SKSpriteNode;

@interface CrazyCard : SKNode
{
    _Bool show;
    _Bool active;
    int suit;
    int rank;
    float rot;
    CrazyPlayer *player;
    SKSpriteNode *front;
    SKSpriteNode *back;
    SKSpriteNode *shadow;
    SKSpriteNode *dark;
    SKSpriteNode *white;
    SKNode *white_node;
    struct CGPoint dist;
}

@property struct CGPoint dist; // @synthesize dist;
@property float rot; // @synthesize rot;
@property _Bool active; // @synthesize active;
@property(retain) SKNode *white_node; // @synthesize white_node;
@property(retain) SKSpriteNode *white; // @synthesize white;
@property(retain) SKSpriteNode *dark; // @synthesize dark;
@property(retain) SKSpriteNode *shadow; // @synthesize shadow;
@property(retain) SKSpriteNode *back; // @synthesize back;
@property(retain) SKSpriteNode *front; // @synthesize front;
@property _Bool show; // @synthesize show;
@property(retain) CrazyPlayer *player; // @synthesize player;
@property int rank; // @synthesize rank;
@property int suit; // @synthesize suit;
- (void).cxx_destruct;
- (void)setCard:(int)arg1 rank:(int)arg2;
- (void)setCard2;
- (void)setCard;
- (void)crazy8:(float)arg1;
- (void)crazy4:(float)arg1;
- (id)init;

@end

