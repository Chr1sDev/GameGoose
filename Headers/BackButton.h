//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVAudioPlayer;

@interface BackButton : UIView
{
    AVAudioPlayer *button_down;
    AVAudioPlayer *button_up;
    AVAudioPlayer *button_cancel;
    struct CGPoint tap_origin;
}

- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setSounds:(id)arg1 up:(id)arg2 cancel:(id)arg3;
- (id)init;

@end

