//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALAdDisplayDelegate.h"
#import "ALAdLoadDelegate.h"
#import "ALAdViewEventDelegate.h"

@class AppLovinBannerCustomEvent, NSString;

@interface AppLovinMoPubBannerDelegate : NSObject <ALAdLoadDelegate, ALAdDisplayDelegate, ALAdViewEventDelegate>
{
    AppLovinBannerCustomEvent *_parentCustomEvent;
}

@property(nonatomic) __weak AppLovinBannerCustomEvent *parentCustomEvent; // @synthesize parentCustomEvent=_parentCustomEvent;
- (void).cxx_destruct;
- (id)getAdNetworkId;
- (void)ad:(id)arg1 didFailToDisplayInAdView:(id)arg2 withError:(long long)arg3;
- (void)ad:(id)arg1 willLeaveApplicationForAdView:(id)arg2;
- (void)ad:(id)arg1 didDismissFullscreenForAdView:(id)arg2;
- (void)ad:(id)arg1 willDismissFullscreenForAdView:(id)arg2;
- (void)ad:(id)arg1 didPresentFullscreenForAdView:(id)arg2;
- (void)ad:(id)arg1 wasClickedIn:(id)arg2;
- (void)ad:(id)arg1 wasHiddenIn:(id)arg2;
- (void)ad:(id)arg1 wasDisplayedIn:(id)arg2;
- (void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2;
- (void)adService:(id)arg1 didLoadAd:(id)arg2;
- (id)initWithCustomEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

