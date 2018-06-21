//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestStopTyping.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStopTyping")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestStopTyping
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStopTyping 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStopTyping 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestStopTyping

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestStopTyping_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStopTyping || defined(INCLUDE_ARRequestStopTyping))
#define ARRequestStopTyping_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiOutPeer;
@class ARApiTypingType;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestStopTyping : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiOutPeer:(ARApiOutPeer * __nonnull)peer
                 withARApiTypingType:(ARApiTypingType * __nonnull)typingType;

+ (ARRequestStopTyping *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiOutPeer * __nonnull)getPeer;

- (ARApiTypingType * __nonnull)getTypingType;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestStopTyping)

inline jint ARRequestStopTyping_get_HEADER();
#define ARRequestStopTyping_HEADER 30
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestStopTyping, HEADER, jint)

FOUNDATION_EXPORT ARRequestStopTyping *ARRequestStopTyping_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestStopTyping_initWithARApiOutPeer_withARApiTypingType_(ARRequestStopTyping *self, ARApiOutPeer *peer, ARApiTypingType *typingType);

FOUNDATION_EXPORT ARRequestStopTyping *new_ARRequestStopTyping_initWithARApiOutPeer_withARApiTypingType_(ARApiOutPeer *peer, ARApiTypingType *typingType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStopTyping *create_ARRequestStopTyping_initWithARApiOutPeer_withARApiTypingType_(ARApiOutPeer *peer, ARApiTypingType *typingType);

FOUNDATION_EXPORT void ARRequestStopTyping_init(ARRequestStopTyping *self);

FOUNDATION_EXPORT ARRequestStopTyping *new_ARRequestStopTyping_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStopTyping *create_ARRequestStopTyping_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestStopTyping)

@compatibility_alias ImDiyalogCoreApiRpcRequestStopTyping ARRequestStopTyping;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStopTyping")
