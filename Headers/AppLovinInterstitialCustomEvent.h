//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPInterstitialCustomEvent.h"

#import "ALAdDisplayDelegate.h"
#import "ALAdLoadDelegate.h"
#import "ALAdVideoPlaybackDelegate.h"

@class ALAd, ALInterstitialAd, ALSdk, NSString;

@interface AppLovinInterstitialCustomEvent : MPInterstitialCustomEvent <ALAdLoadDelegate, ALAdDisplayDelegate, ALAdVideoPlaybackDelegate>
{
    _Bool _tokenEvent;
    ALSdk *_sdk;
    ALInterstitialAd *_interstitialAd;
    NSString *_zoneIdentifier;
    ALAd *_tokenAd;
}

+ (void)enqueueAd:(id)arg1 forZoneIdentifier:(id)arg2;
+ (id)dequeueAdForZoneIdentifier:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) ALAd *tokenAd; // @synthesize tokenAd=_tokenAd;
@property(nonatomic, getter=isTokenEvent) _Bool tokenEvent; // @synthesize tokenEvent=_tokenEvent;
@property(copy, nonatomic) NSString *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(retain, nonatomic) ALInterstitialAd *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (id)getAdNetworkId;
- (id)SDKFromCustomEventInfo:(id)arg1;
- (int)toMoPubErrorCode:(int)arg1;
- (void)videoPlaybackEndedInAd:(id)arg1 atPlaybackPercent:(id)arg2 fullyWatched:(_Bool)arg3;
- (void)videoPlaybackBeganInAd:(id)arg1;
- (void)ad:(id)arg1 wasClickedIn:(id)arg2;
- (void)ad:(id)arg1 wasHiddenIn:(id)arg2;
- (void)ad:(id)arg1 wasDisplayedIn:(id)arg2;
- (void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2;
- (void)adService:(id)arg1 didLoadAd:(id)arg2;
- (void)showInterstitialFromRootViewController:(id)arg1;
- (void)requestInterstitialWithCustomEventInfo:(id)arg1 adMarkup:(id)arg2;
- (void)requestInterstitialWithCustomEventInfo:(id)arg1;
- (_Bool)enableAutomaticImpressionAndClickTracking;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

