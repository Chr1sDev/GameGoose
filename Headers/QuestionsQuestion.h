//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class NSString, SKLabelNode, SKMultilineLabel, SKSpriteNode, Sprite;

@interface QuestionsQuestion : SKNode
{
    SKSpriteNode *shadow;
    SKMultilineLabel *q;
    SKNode *container;
    SKSpriteNode *answer_bg;
    SKSpriteNode *answer_shadow;
    SKLabelNode *answer;
    SKLabelNode *num;
    int num_i;
    int answr;
    Sprite *bg;
    NSString *question;
    SKSpriteNode *question_mark;
}

@property int answr; // @synthesize answr;
@property(retain) SKSpriteNode *question_mark; // @synthesize question_mark;
@property int num_i; // @synthesize num_i;
@property(retain) NSString *question; // @synthesize question;
@property(retain) Sprite *bg; // @synthesize bg;
- (void).cxx_destruct;
- (void)SetQuestion:(id)arg1 num:(int)arg2 answer:(int)arg3;
- (id)Export;
- (void)setAnswer:(id)arg1;
- (id)init;

@end

