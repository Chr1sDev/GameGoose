//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class SKSpriteNode;

@interface ReversiPiece : SKNode
{
    int num;
    _Bool instant;
    _Bool king;
    _Bool origin_king;
    _Bool last;
    _Bool _force;
    int player;
    float vy;
    float z;
    int original;
    SKSpriteNode *sprite;
    SKSpriteNode *shadow;
    SKSpriteNode *shade;
    struct CGPoint pos;
    struct CGPoint origin;
}

@property _Bool force; // @synthesize force=_force;
@property int original; // @synthesize original;
@property _Bool last; // @synthesize last;
@property float z; // @synthesize z;
@property _Bool origin_king; // @synthesize origin_king;
@property _Bool king; // @synthesize king;
@property struct CGPoint origin; // @synthesize origin;
@property(retain) SKSpriteNode *shade; // @synthesize shade;
@property _Bool instant; // @synthesize instant;
@property float vy; // @synthesize vy;
@property struct CGPoint pos; // @synthesize pos;
@property(retain) SKSpriteNode *shadow; // @synthesize shadow;
@property(retain) SKSpriteNode *sprite; // @synthesize sprite;
@property int player; // @synthesize player;
- (void).cxx_destruct;
- (void)setPuck:(int)arg1;
- (void)setPuck:(int)arg1 king:(_Bool)arg2;
- (void)flipImg;
- (void)flip;
- (void)blink;
- (void)blinkWin;
- (void)unblink;
- (id)init;

@end

