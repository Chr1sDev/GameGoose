//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameScene.h"

@class NSMutableArray, NSMutableString, NSString, PoolSkipButton, SKLabelNode, SKNode, SKShapeNode, SKSpriteNode, ShufflePuck;

@interface ShuffleScene2 : GameScene
{
    SKSpriteNode *board;
    SKNode *table;
    struct b2World *world;
    ShufflePuck *puck;
    SKNode *selected;
    struct CGPoint last_pos;
    struct CGPoint puck_pos;
    float speed;
    float board_size;
    float board_size_h;
    PoolSkipButton *skip_button;
    int state;
    int player;
    NSString *player_id1;
    NSString *player_id2;
    int score1;
    int score2;
    _Bool shot;
    NSMutableString *replay_send;
    NSMutableString *pre_send;
    NSMutableArray *replay;
    SKLabelNode *score1_label;
    SKLabelNode *score2_label;
    SKShapeNode *_spinnyNode;
    SKLabelNode *_label;
}

- (void).cxx_destruct;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)resize;
- (void)sendMessage;
- (id)exportBoard:(_Bool)arg1;
- (id)exportBoard;
- (void)setBoard:(id)arg1;
- (void)shoot;
- (void)Shoot:(struct CGPoint)arg1;
- (void)playReplay;
- (void)new_round;
- (void)skip;
- (void)Skip;
- (id)parseReplay:(id)arg1;
- (void)receiveMessage:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchUpAtPoint:(struct CGPoint)arg1;
- (void)touchMovedToPoint:(struct CGPoint)arg1;
- (void)touchDownAtPoint:(struct CGPoint)arg1;
- (void)update:(double)arg1;
- (id)create;
- (void)createSceneContents;
- (void)didMoveToView:(id)arg1;
- (id)initWithMain:(id)arg1 msg:(id)arg2;

@end

