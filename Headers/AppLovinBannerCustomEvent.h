//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPBannerCustomEvent.h"

@class ALAdView, ALSdk;

@interface AppLovinBannerCustomEvent : MPBannerCustomEvent
{
    ALSdk *_sdk;
    ALAdView *_adView;
}

+ (id)adViewForFrame:(struct CGRect)arg1 adSize:(id)arg2 zoneIdentifier:(id)arg3 customEvent:(id)arg4 sdk:(id)arg5;
+ (void)initialize;
@property(retain, nonatomic) ALAdView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (id)SDKFromCustomEventInfo:(id)arg1;
- (int)toMoPubErrorCode:(int)arg1;
- (struct CGRect)rectFromAppLovinAdSize:(id)arg1;
- (id)appLovinAdSizeFromRequestedSize:(struct CGSize)arg1;
- (_Bool)enableAutomaticImpressionAndClickTracking;
- (void)requestAdWithSize:(struct CGSize)arg1 customEventInfo:(id)arg2 adMarkup:(id)arg3;
- (void)requestAdWithSize:(struct CGSize)arg1 customEventInfo:(id)arg2;

@end

