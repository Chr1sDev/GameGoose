//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameScene.h"

@class ActionButton, BasketballBall, BasketballView, GoalNode, GolfBall, GolfCounter, GolfZoomButton, NSDate, NSMutableArray, NSMutableString, NSString, NSTimer, PoolSkipButton, SCNNode, SCNPhysicsBody, SCNScene, SK3DNode, SKAudioNode, SKLabelNode, SKNode, SKShapeNode, SKSpriteNode, ShufflePuck, TipNode;

@interface BasketballScene : GameScene
{
    GolfZoomButton *zoom_button;
    _Bool zoom;
    int shoot_state;
    float map_size;
    float map_size2;
    int map_num;
    int map_stroke;
    struct CGPoint move_start;
    SKSpriteNode *mtip;
    SKNode *hole_screen;
    SKSpriteNode *hole_screen_white;
    SKSpriteNode *hole_screen_flag;
    SKNode *hole_screen_title;
    SKLabelNode *hole_screen_label;
    GolfCounter *counter;
    GolfCounter *counter2;
    int strokes;
    int strokes2;
    SKNode *walls;
    SKNode *shadows;
    SKNode *camera;
    SKNode *top;
    SKNode *ground;
    SKNode *ground2;
    GolfBall *golf_ball;
    GolfBall *golf_ball1;
    GolfBall *golf_ball2;
    struct b2Body *golf_ball_body;
    SKSpriteNode *hole;
    SKNode *move_tip;
    SKNode *stick1;
    SKNode *stick2;
    SKSpriteNode *stick1_sprite;
    SKSpriteNode *stick2_sprite;
    SKSpriteNode *golf_flag;
    SKNode *stick1_shadow;
    SKNode *stick2_shadow;
    SKSpriteNode *stick1_sprite_shadow;
    SKSpriteNode *stick2_sprite_shadow;
    NSString *map;
    SKNode *pucks_left;
    SKNode *walle;
    SKSpriteNode *walle_shadow;
    SKAudioNode *counting;
    NSMutableArray *particles;
    SKNode *board;
    SKSpriteNode *board2;
    SKNode *table;
    struct b2World *world;
    ShufflePuck *puck;
    SKNode *selected;
    struct CGPoint last_pos;
    struct CGPoint puck_pos;
    float board_size;
    float board_size_h;
    PoolSkipButton *skip_button;
    SKSpriteNode *arrow;
    int state;
    int player;
    NSString *player_id1;
    NSString *player_id2;
    int score1;
    int score2;
    int skip_score1;
    int skip_score2;
    int skip_skip_score1;
    int skip_skip_score2;
    int round;
    _Bool shot;
    int seed;
    int seed1;
    int seed2;
    ShufflePuck *puck1;
    ShufflePuck *puck2;
    NSMutableString *replay_send;
    NSMutableArray *nums;
    NSMutableArray *segments;
    NSMutableString *pre_send;
    NSMutableArray *replay;
    NSMutableArray *replay2;
    NSMutableArray *replay3;
    NSMutableArray *replay4;
    NSMutableString *replay_string;
    NSMutableString *replay_string2;
    NSMutableString *replay_string3;
    NSMutableString *replay_string4;
    SKLabelNode *score1_label;
    SKLabelNode *score2_label;
    NSMutableArray *nuke;
    ActionButton *actionButton;
    TipNode *tip;
    SKSpriteNode *tip_bg;
    float left;
    float right;
    SKLabelNode *marker1;
    SKLabelNode *marker2;
    _Bool shown;
    GoalNode *goal;
    SKSpriteNode *bg_node;
    ShufflePuck *tip_penguin;
    SKAudioNode *drag_sound;
    int melt;
    int win;
    NSDate *last_hit;
    struct GolfContactListener *listener;
    _Bool v2;
    SCNNode *ball;
    SCNNode *net;
    SCNNode *net2;
    SCNNode *net_col;
    SCNNode *ball_shadow;
    SCNNode *selected2;
    SCNPhysicsBody *selected_body;
    SCNScene *scene;
    float speed;
    float speed_x;
    struct CGPoint touch_start;
    struct CGPoint prev_pos;
    struct CGPoint prev_pos2;
    struct CGVector vec;
    NSTimer *timer;
    int time;
    int last_shot;
    int net_frame;
    NSMutableArray *balls;
    BasketballBall *game_ball;
    SK3DNode *scene3;
    SKShapeNode *_spinnyNode;
    SKLabelNode *_label;
    NSString *mode;
    BasketballView *scene3d;
}

@property(retain) BasketballView *scene3d; // @synthesize scene3d;
@property(retain) NSString *mode; // @synthesize mode;
- (void).cxx_destruct;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)resize;
- (void)sendComplete;
- (void)sendMessage;
- (id)exportBoard:(_Bool)arg1;
- (id)exportBoard;
- (void)blink;
- (void)setBoard:(id)arg1;
- (void)playReplay;
- (void)skipReplay;
- (_Bool)new_round;
- (int)getScore:(struct CGPoint)arg1;
- (void)removeAll;
- (void)skip;
- (void)Skip;
- (void)FinalSkip;
- (id)parseReplay:(id)arg1;
- (void)closeGoal;
- (void)showGoal;
- (void)receiveMessage:(id)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)ShootShoot;
- (void)Shoot;
- (void)savePlaceBack:(id)arg1 what:(id)arg2;
- (void)placeBack:(id)arg1;
- (id)generatePreview;
- (void)ball_hit:(float)arg1;
- (void)touchUpAtPoint:(struct CGPoint)arg1;
- (void)touchMovedToPoint:(struct CGPoint)arg1;
- (void)touchDownAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)Slerp:(struct CGPoint)arg1 pos2:(struct CGPoint)arg2 ratio:(float)arg3;
- (void)saveGame;
- (void)unload;
- (void)update:(double)arg1;
- (id)create;
- (void)updateLeft;
- (void)ActionShoot;
- (struct b2FixtureDef *)makeFixture:(struct b2PolygonShape)arg1;
- (void)createSceneContents;
- (void)didMoveToView:(id)arg1;
- (id)initWithMain:(id)arg1 msg:(id)arg2;

@end

