//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameScene.h"

@class ActionButton, ChessPiece, ChessTip2, DotsLine, NSDate, NSMutableArray, NSMutableString, NSString, SKLabelNode, SKNode, SKSpriteNode, TipNode;

@interface ChessScene : GameScene
{
    SKSpriteNode *bo3;
    SKSpriteNode *promo_bg;
    ChessPiece *promo_piece1;
    ChessPiece *promo_piece2;
    SKNode *board;
    SKNode *table;
    _Bool force;
    ChessPiece *force_piece;
    SKNode *selected;
    SKNode *selected2;
    struct CGPoint last_pos;
    struct CGPoint puck_pos;
    float speed;
    float board_size;
    float board_size_h;
    int state;
    int player;
    NSString *player_id1;
    NSString *player_id2;
    int score1;
    int score2;
    _Bool selected_moved;
    _Bool shot;
    SKNode *board2;
    NSDate *last_swoosh;
    NSMutableString *replay_send;
    NSMutableString *pre_send;
    NSMutableArray *replay;
    SKLabelNode *score1_label;
    SKLabelNode *score2_label;
    SKSpriteNode *score1_box;
    SKSpriteNode *score2_box;
    NSMutableArray *map;
    NSMutableArray *lines;
    NSMutableArray *squares;
    ActionButton *actionButton;
    TipNode *tip;
    SKSpriteNode *marker1;
    SKSpriteNode *marker2;
    DotsLine *line;
    float size;
    _Bool sent;
    float left;
    float right;
    int winner;
    int player2;
    SKSpriteNode *piece1;
    SKSpriteNode *piece2;
    float radius;
    SKSpriteNode *shade;
    SKSpriteNode *board3;
    NSMutableArray *win_stones;
    ChessTip2 *me_tip;
    ChessTip2 *opponent_tip;
    ChessTip2 *check_tip;
    ChessTip2 *me_tip2;
    ChessTip2 *opponent_tip2;
    NSString *mode;
    _Bool done;
    struct CGPoint origin2;
    NSMutableArray *reset_board;
    _Bool game_check;
    _Bool mine;
}

- (void).cxx_destruct;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)resize;
- (void)savePlaceBack:(id)arg1 what:(id)arg2;
- (void)placeBack:(id)arg1;
- (id)generatePreview;
- (id)getPreview;
- (void)sendMessage;
- (id)exportBoard:(_Bool)arg1;
- (id)exportBoard;
- (void)setBoard:(id)arg1;
- (_Bool)lineExists:(id)arg1;
- (void)shoot;
- (void)playReplay2:(int)arg1;
- (void)playReplay2;
- (void)playReplay;
- (void)testWin;
- (void)skip;
- (id)parseReplay:(id)arg1;
- (void)new_round;
- (void)swoosh;
- (void)swoosh2;
- (void)receiveMessage:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)Kill:(id)arg1;
- (void)removeTips;
- (_Bool)checkAttack:(id)arg1 add:(_Bool)arg2;
- (_Bool)showMove:(id)arg1 add:(_Bool)arg2 pl:(int)arg3;
- (_Bool)inCheckMate:(int)arg1;
- (_Bool)inStale:(int)arg1;
- (_Bool)inCheckMate2:(int)arg1;
- (_Bool)showMove:(id)arg1 add:(_Bool)arg2;
- (id)clone:(id)arg1;
- (_Bool)inCheck:(int)arg1;
- (_Bool)checkAttack;
- (void)resetBoard;
- (void)touchUpAtPoint:(struct CGPoint)arg1;
- (void)touchMovedToPoint:(struct CGPoint)arg1;
- (void)touchDownAtPoint:(struct CGPoint)arg1;
- (void)playMarker;
- (void)showScore;
- (void)update:(double)arg1;
- (struct CGPoint)Slerp:(struct CGPoint)arg1 pos2:(struct CGPoint)arg2 ratio:(float)arg3;
- (void)createSceneContents;
- (void)didMoveToView:(id)arg1;
- (id)initWithMain:(id)arg1 msg:(id)arg2;

@end
