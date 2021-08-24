//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class NSMutableDictionary, NSString, NSTimer;

@interface SoundMaster : NSObject <AVAudioPlayerDelegate>
{
    _Bool _isPlayingMusic;
    double _musicVolume;
    double _effectsVolume;
    double _musicFadeTime;
    CDUnknownBlockType _musicCompletion;
    NSMutableDictionary *_effects;
    NSMutableDictionary *_effectsRelativeVolumes;
    NSMutableDictionary *_musics;
    NSString *_currentMusicPath;
    NSTimer *_musicTimer;
    NSTimer *_musicTimer2;
}

+ (id)sharedMaster;
@property(retain) NSTimer *musicTimer2; // @synthesize musicTimer2=_musicTimer2;
@property(retain) NSTimer *musicTimer; // @synthesize musicTimer=_musicTimer;
@property(retain) NSString *currentMusicPath; // @synthesize currentMusicPath=_currentMusicPath;
@property(retain, nonatomic) NSMutableDictionary *musics; // @synthesize musics=_musics;
@property(retain, nonatomic) NSMutableDictionary *effectsRelativeVolumes; // @synthesize effectsRelativeVolumes=_effectsRelativeVolumes;
@property(retain, nonatomic) NSMutableDictionary *effects; // @synthesize effects=_effects;
@property(copy) CDUnknownBlockType musicCompletion; // @synthesize musicCompletion=_musicCompletion;
@property(readonly) _Bool isPlayingMusic; // @synthesize isPlayingMusic=_isPlayingMusic;
@property(nonatomic) double musicFadeTime; // @synthesize musicFadeTime=_musicFadeTime;
@property(nonatomic) double effectsVolume; // @synthesize effectsVolume=_effectsVolume;
@property(nonatomic) double musicVolume; // @synthesize musicVolume=_musicVolume;
- (void).cxx_destruct;
- (void)releaseUnnecessaryEffectCopies:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)timerSelector:(id)arg1;
- (void)makeMusicPlayer:(id)arg1 fadeIn:(_Bool)arg2 duration:(double)arg3 timer:(id)arg4;
- (id)playerWithFileName:(id)arg1;
- (void)performCrossFade:(id)arg1;
- (void)clearCache;
- (void)crossFadeToMusic:(id)arg1 loop:(_Bool)arg2;
- (void)crossFadeToMusic:(id)arg1 loop:(_Bool)arg2 fadeDuration:(double)arg3;
- (void)crossFadeToMusic:(id)arg1 loop:(_Bool)arg2 fadeDuration:(double)arg3 waitUntilCurrentLoopEnds:(_Bool)arg4;
- (void)resumeMusic;
- (void)resumeMusicWithFadeIn:(_Bool)arg1;
- (void)pauseMusic;
- (void)pauseMusicWithFadeOut:(_Bool)arg1;
- (void)playMusic:(id)arg1;
- (void)playMusic:(id)arg1 loop:(_Bool)arg2;
- (void)playMusic:(id)arg1 loop:(_Bool)arg2 fadeIn:(_Bool)arg3;
- (void)preloadMusic:(id)arg1;
- (void)setRelativeVolume:(double)arg1 effect:(id)arg2;
- (void)preloadEffect:(id)arg1;
- (void)playEffect:(id)arg1 relativeVolume:(double)arg2;
- (void)playEffect:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

