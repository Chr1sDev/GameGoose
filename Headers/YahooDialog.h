//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, PlayerIOWebView, UIActivityIndicatorView, UIControl, UIView;

@interface YahooDialog : NSObject <UIWebViewDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, UIScrollViewDelegate>
{
    PlayerIOWebView *_webView;
    UIView *_background;
    CDUnknownBlockType _callback;
    NSString *_dialogName;
    UIControl *_cancelButton;
    UIControl *_backButton;
    UIActivityIndicatorView *_loadingIndicator;
}

+ (void)showWithDialog:(id)arg1 options:(id)arg2 apiToken:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4;
+ (void)removeAllCookies;
+ (id)getCookiesFromUrl:(id)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIControl *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIControl *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSString *dialogName; // @synthesize dialogName=_dialogName;
- (void)showWithDialog:(id)arg1 options:(id)arg2 apiToken:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)dealloc;
- (id)initWithDialogWithCallbackBlock:(CDUnknownBlockType)arg1;
- (void)animateWebViewWithAnchorType:(int)arg1 contentWidth:(int)arg2 contentHeight:(int)arg3 loading:(_Bool)arg4 webViewVisible:(_Bool)arg5 duration:(float)arg6 completion:(CDUnknownBlockType)arg7;
- (void)scrollViewDidScroll:(id)arg1;
- (void)backButtonHandler:(id)arg1;
- (void)cancelButtonHandler:(id)arg1;
- (void)createWebViewWithParent:(id)arg1;
- (void)dismissDialogWithData:(id)arg1;
- (void)processMessageWithOuterDict:(id)arg1 inner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

