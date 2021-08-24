//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVAudioPlayer, FLAnimatedImageView, NSData, NSString, UIColor, UIImageView, UILabel;

@interface GameIcon : UIView
{
    int last_frame;
    int dir;
    UIColor *color;
    AVAudioPlayer *button_down;
    AVAudioPlayer *button_up;
    AVAudioPlayer *button_cancel;
    struct CGPoint tap_origin;
    int sound_frames;
    NSString *icon_name;
    int time;
    NSData *gif_data;
    _Bool loading_image;
    UIImageView *new_icon;
    _Bool settings;
    _Bool game;
    _Bool _subfolder;
    NSString *name;
    FLAnimatedImageView *icon;
    UIImageView *play;
    NSString *_id;
    UIImageView *icon_tint;
    UIImageView *icon_shadow;
    UIImageView *crown;
    UILabel *crown_label;
    UILabel *crown_label2;
    UIView *iconView;
    UILabel *name_label;
    GameIcon *_folder;
    FLAnimatedImageView *_icon2;
    FLAnimatedImageView *_icon3;
}

@property(retain) FLAnimatedImageView *icon3; // @synthesize icon3=_icon3;
@property(retain) FLAnimatedImageView *icon2; // @synthesize icon2=_icon2;
@property _Bool subfolder; // @synthesize subfolder=_subfolder;
@property __weak GameIcon *folder; // @synthesize folder=_folder;
@property(retain) UILabel *name_label; // @synthesize name_label;
@property _Bool game; // @synthesize game;
@property(retain) UIView *iconView; // @synthesize iconView;
@property(retain) UILabel *crown_label2; // @synthesize crown_label2;
@property(retain) UILabel *crown_label; // @synthesize crown_label;
@property(retain) UIImageView *crown; // @synthesize crown;
@property(retain) UIImageView *icon_shadow; // @synthesize icon_shadow;
@property(retain) UIImageView *icon_tint; // @synthesize icon_tint;
@property _Bool settings; // @synthesize settings;
@property(retain) NSString *_id; // @synthesize _id;
@property(retain) UIImageView *play; // @synthesize play;
@property(retain) FLAnimatedImageView *icon; // @synthesize icon;
@property(retain) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (void)dark;
- (void)light;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;
- (void)setNewIcon:(_Bool)arg1;
- (void)update;
- (void)setWins:(int)arg1;
- (void)loadAnimation:(_Bool)arg1;
- (id)initWithName:(id)arg1 icon:(id)arg2 id:(id)arg3 game:(_Bool)arg4 color:(id)arg5;
- (void)big_font;
- (void)normal_font;
- (id)initWithName:(id)arg1 icon:(id)arg2 id:(id)arg3 game:(_Bool)arg4;
- (id)initWithName:(id)arg1 icon:(id)arg2 id:(id)arg3;
- (void)hidePlay;
- (void)showPlay;
- (void)setSounds:(id)arg1 up:(id)arg2 cancel:(id)arg3;

@end

