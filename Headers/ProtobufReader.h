//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CodedInputStream;

@interface ProtobufReader : NSObject
{
    CodedInputStream *input;
    int recursionDepth;
    int recursionLimit;
}

- (id)readMessage:(id)arg1;
- (id)readBytes;
- (id)readString;
- (_Bool)readBool;
- (long long)readSFixed64;
- (int)readSFixed32;
- (long long)readFixed64;
- (int)readFixed32;
- (long long)readSInt64;
- (int)readSInt32;
- (unsigned long long)readUInt64;
- (unsigned int)readUInt32;
- (long long)readInt64;
- (int)readInt32;
- (float)readFloat;
- (double)readDouble;
- (void)skip:(int)arg1 wireType:(int)arg2;
- (_Bool)readHeader:(int *)arg1 fieldNumber:(int *)arg2;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1;
- (id)init;

@end

