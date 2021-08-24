//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMNativeDelegate.h"
#import "MPAdDestinationDisplayAgentDelegate.h"
#import "MPNativeAdAdapter.h"

@class ALCarouselCardView, ALCarouselMediaView, ALNativeAd, MPAdDestinationDisplayAgent, NSDictionary, NSString, NSURL, UIImageView, UIView;

@interface AppLovinNativeAdAdapter : NSObject <MPAdDestinationDisplayAgentDelegate, MPNativeAdAdapter, IMNativeDelegate>
{
    NSDictionary *_properties;
    NSURL *_defaultActionURL;
    id <MPNativeAdAdapterDelegate> _delegate;
    ALNativeAd *_alNativeAd;
    MPAdDestinationDisplayAgent *_destinationDisplayAgent;
    UIView *_adView;
    ALCarouselCardView *_card;
    ALCarouselMediaView *_med;
    UIImageView *_iconView;
}

@property(retain) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain) ALCarouselMediaView *med; // @synthesize med=_med;
@property(retain) ALCarouselCardView *card; // @synthesize card=_card;
@property(retain) UIView *adView; // @synthesize adView=_adView;
@property(readonly, nonatomic) MPAdDestinationDisplayAgent *destinationDisplayAgent; // @synthesize destinationDisplayAgent=_destinationDisplayAgent;
@property(readonly, nonatomic) ALNativeAd *alNativeAd; // @synthesize alNativeAd=_alNativeAd;
@property(nonatomic) __weak id <MPNativeAdAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *defaultActionURL; // @synthesize defaultActionURL=_defaultActionURL;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (void)dealloc;
- (void)displayAgentDidDismissModal;
- (void)displayAgentWillLeaveApplication;
- (void)displayAgentWillPresentModal;
- (id)viewControllerForPresentingModalView;
- (id)mainMediaView;
- (void)displayContentForURL:(id)arg1 rootViewController:(id)arg2;
- (id)iconMediaView;
- (void)willAttachToView:(id)arg1;
- (void)launchClickTarget;
- (void)trackImpression:(id)arg1;
- (id)initWithAppLovinAd:(id)arg1 card:(id)arg2 med:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

