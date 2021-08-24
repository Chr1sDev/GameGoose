//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, NSURLRequest, PSWebSocketDeflater, PSWebSocketInflater;

@interface PSWebSocketDriver : NSObject
{
    NSURLRequest *_request;
    long long _state;
    _Bool _failed;
    NSString *_handshakeSecKey;
    NSMutableArray *_frames;
    _Bool _pmdEnabled;
    long long _pmdClientWindowBits;
    _Bool _pmdClientNoContextTakeover;
    long long _pmdServerWindowBits;
    _Bool _pmdServerNoContextTakeover;
    PSWebSocketInflater *_inflater;
    PSWebSocketDeflater *_deflater;
    unsigned int _utf8DecoderState;
    unsigned int _utf8DecoderCodePoint;
    long long _mode;
    id <PSWebSocketDriverDelegate> _delegate;
    NSString *_protocol;
}

+ (id)errorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)serverDriverWithRequest:(id)arg1;
+ (id)clientDriverWithRequest:(id)arg1;
+ (_Bool)isWebSocketRequest:(id)arg1;
@property(retain, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) __weak id <PSWebSocketDriverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)base64EncodedData:(id)arg1;
- (id)acceptHeaderForKey:(id)arg1;
- (_Bool)pmdConfigureWithExtensionsHeaderComponents:(id)arg1;
- (id)pmdExtensionsHeaderComponents;
- (void)failWithError:(id)arg1;
- (void)failWithErrorCode:(long long)arg1 reason:(id)arg2;
- (_Bool)processFramesAndDelegate:(id *)arg1;
- (long long)readBytes:(void *)arg1 maxLength:(unsigned long long)arg2 error:(id *)arg3;
- (void)writeMessageWithOpCode:(unsigned char)arg1 data:(id)arg2;
- (void)writeHandshakeResponse;
- (void)writeHandshakeRequest;
- (void)sendPong:(id)arg1;
- (void)sendPing:(id)arg1;
- (void)sendCloseCode:(long long)arg1 reason:(id)arg2;
- (void)sendBinary:(id)arg1;
- (void)sendText:(id)arg1;
- (unsigned long long)execute:(void *)arg1 maxLength:(unsigned long long)arg2;
- (void)start;
- (id)initWithMode:(long long)arg1 request:(id)arg2;

@end
