//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestMessageSetReaction.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageSetReaction")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestMessageSetReaction
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageSetReaction 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageSetReaction 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestMessageSetReaction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestMessageSetReaction_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageSetReaction || defined(INCLUDE_ARRequestMessageSetReaction))
#define ARRequestMessageSetReaction_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestMessageSetReaction : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiOutPeer:(ARApiOutPeer * __nonnull)peer
                            withLong:(jlong)rid
                        withNSString:(NSString * __nonnull)code;

+ (ARRequestMessageSetReaction *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getCode;

- (jint)getHeaderKey;

- (ARApiOutPeer * __nonnull)getPeer;

- (jlong)getRid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestMessageSetReaction)

inline jint ARRequestMessageSetReaction_get_HEADER();
#define ARRequestMessageSetReaction_HEADER 210
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestMessageSetReaction, HEADER, jint)

FOUNDATION_EXPORT ARRequestMessageSetReaction *ARRequestMessageSetReaction_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestMessageSetReaction_initWithARApiOutPeer_withLong_withNSString_(ARRequestMessageSetReaction *self, ARApiOutPeer *peer, jlong rid, NSString *code);

FOUNDATION_EXPORT ARRequestMessageSetReaction *new_ARRequestMessageSetReaction_initWithARApiOutPeer_withLong_withNSString_(ARApiOutPeer *peer, jlong rid, NSString *code) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestMessageSetReaction *create_ARRequestMessageSetReaction_initWithARApiOutPeer_withLong_withNSString_(ARApiOutPeer *peer, jlong rid, NSString *code);

FOUNDATION_EXPORT void ARRequestMessageSetReaction_init(ARRequestMessageSetReaction *self);

FOUNDATION_EXPORT ARRequestMessageSetReaction *new_ARRequestMessageSetReaction_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestMessageSetReaction *create_ARRequestMessageSetReaction_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestMessageSetReaction)

@compatibility_alias ImDiyalogCoreApiRpcRequestMessageSetReaction ARRequestMessageSetReaction;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestMessageSetReaction")
