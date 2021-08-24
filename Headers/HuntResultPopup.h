//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class NSMutableArray, NSString, SKSpriteNode;

@interface HuntResultPopup : SKNode
{
    SKNode *board;
    NSMutableArray *grid;
    SKNode *path;
    SKSpriteNode *corner;
    SKSpriteNode *close;
    SKSpriteNode *bg;
    NSString *_game;
    NSString *_word_string;
}

@property(retain) NSString *word_string; // @synthesize word_string=_word_string;
@property(retain) NSString *game; // @synthesize game=_game;
@property(retain) SKSpriteNode *bg; // @synthesize bg;
@property(retain) SKSpriteNode *close; // @synthesize close;
@property(retain) SKSpriteNode *corner; // @synthesize corner;
@property(retain) SKNode *path; // @synthesize path;
@property(retain) NSMutableArray *grid; // @synthesize grid;
@property(retain) SKNode *board; // @synthesize board;
- (void).cxx_destruct;
- (void)setLetters:(id)arg1;
- (void)setWord:(id)arg1;
- (void)setWordString:(id)arg1;
- (void)setWord:(id)arg1 type:(int)arg2;
- (void)bottom;
- (void)top;
- (id)init;

@end

