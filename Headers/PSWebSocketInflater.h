//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface PSWebSocketInflater : NSObject
{
    long long _windowBits;
    unsigned char _chunkBuffer[16384];
    struct z_stream_s _stream;
    _Bool _ready;
    NSMutableData *_buffer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)ensureReady:(id *)arg1;
- (void)reset;
- (_Bool)end:(id *)arg1;
- (_Bool)appendBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)begin:(id)arg1 error:(id *)arg2;
- (id)initWithWindowBits:(long long)arg1;

@end

