//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class SKLabelNode, SKSpriteNode;

@interface AnagramsBlock : SKNode
{
    SKLabelNode *letter;
    SKLabelNode *letter_white;
    _Bool selected;
    _Bool _visited;
    int y;
    int x;
    SKSpriteNode *bg;
}

@property _Bool visited; // @synthesize visited=_visited;
@property(retain) SKSpriteNode *bg; // @synthesize bg;
@property int x; // @synthesize x;
@property int y; // @synthesize y;
@property _Bool selected; // @synthesize selected;
- (void).cxx_destruct;
- (void)setLetter:(id)arg1;
- (id)getLetter;
- (void)setType:(int)arg1;
- (void)setOrange;
- (void)setBlue;
- (void)setGreen;
- (void)setYellow;
- (void)setRepeat;
- (void)setWhite;
- (id)init;

@end

