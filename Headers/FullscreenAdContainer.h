//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface FullscreenAdContainer : UIView
{
    UIView *_skip_container;
    UILabel *_skip_counter;
    UILabel *_skip_label;
    UIImageView *_skip_background;
    UIView *_ad_container;
    UIImageView *_close_button;
    UIView *_countdown_background;
    UIView *_countdown;
    UILabel *_sponsored;
}

@property(retain) UILabel *sponsored; // @synthesize sponsored=_sponsored;
@property(retain) UIView *countdown; // @synthesize countdown=_countdown;
@property(retain) UIView *countdown_background; // @synthesize countdown_background=_countdown_background;
@property(retain) UIImageView *close_button; // @synthesize close_button=_close_button;
@property(retain) UIView *ad_container; // @synthesize ad_container=_ad_container;
@property(retain) UIImageView *skip_background; // @synthesize skip_background=_skip_background;
@property(retain) UILabel *skip_label; // @synthesize skip_label=_skip_label;
@property(retain) UILabel *skip_counter; // @synthesize skip_counter=_skip_counter;
@property(retain) UIView *skip_container; // @synthesize skip_container=_skip_container;
- (void).cxx_destruct;
- (id)init;

@end

