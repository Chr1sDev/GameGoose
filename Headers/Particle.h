//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKSpriteNode.h"

@interface Particle : SKSpriteNode
{
    float vx;
    float vy;
    float vs;
    float va;
    float vr;
    int life;
    float vsc;
    float gravity;
}

@property float gravity; // @synthesize gravity;
@property float vsc; // @synthesize vsc;
@property int life; // @synthesize life;
@property float vr; // @synthesize vr;
@property float va; // @synthesize va;
@property float vs; // @synthesize vs;
@property float vy; // @synthesize vy;
@property float vx; // @synthesize vx;
- (void)update;
- (id)init;

@end

