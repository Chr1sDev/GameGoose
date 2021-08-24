//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKScene.h"

@class ActionButton, AvatarNode, DartsCustomizeItem, MessagesViewController, NSMutableArray, SKCropNode, SKLabelNode, SKMultilineLabel, SKNode, SKSpriteNode;

@interface DartsCustomizeScene : SKScene
{
    NSMutableArray *packs;
    _Bool premium;
    SKSpriteNode *black;
    SKNode *unlock_screen;
    ActionButton *unlock_button;
    ActionButton *restore_button;
    SKSpriteNode *unlock_sprite;
    SKSpriteNode *unlock_line;
    SKLabelNode *unlock_loading;
    SKLabelNode *unlock_text;
    SKLabelNode *restore_loading;
    SKNode *screen;
    SKCropNode *buttons;
    ActionButton *sound_button;
    ActionButton *music_button;
    ActionButton *send_button;
    _Bool landscape;
    _Bool contentCreated;
    struct CGSize stageSize;
    float ratio;
    SKMultilineLabel *send_tip;
    SKLabelNode *editor_soon;
    SKNode *selected;
    MessagesViewController *main;
    SKNode *editor;
    AvatarNode *avatar;
    SKSpriteNode *editor_arrow;
    SKSpriteNode *category1;
    SKSpriteNode *category2;
    SKSpriteNode *category3;
    SKSpriteNode *category4;
    SKSpriteNode *category5;
    struct CGPoint touchPos;
    SKCropNode *area1;
    SKCropNode *area2;
    SKNode *scroll1;
    SKNode *scroll2;
    SKSpriteNode *crop1;
    SKSpriteNode *crop2;
    int category;
    struct CGPoint last_touch;
    _Bool scrolled;
    int selected_buy;
    DartsCustomizeItem *selected_item;
    SKSpriteNode *unlock_node;
    float max_size;
}

- (void).cxx_destruct;
- (void)resize;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchUpAtPoint:(struct CGPoint)arg1;
- (void)touchMovedToPoint:(struct CGPoint)arg1;
- (void)hideUnlock;
- (void)showUnlock;
- (void)touchDownAtPoint:(struct CGPoint)arg1;
- (void)buyAvatars;
- (void)update:(double)arg1;
- (void)restoreAvatars;
- (void)setup;
- (void)createSceneContents;
- (id)playSound:(id)arg1;
- (void)buttonCancel;
- (void)buttonDown;
- (void)buttonUp;
- (void)avatarsUnlocked;
- (void)didMoveToView:(id)arg1;
- (void)setMain:(id)arg1;

@end

