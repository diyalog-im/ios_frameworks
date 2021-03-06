//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestClearChat.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestClearChat")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestClearChat
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestClearChat 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestClearChat 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestClearChat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestClearChat_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestClearChat || defined(INCLUDE_ARRequestClearChat))
#define ARRequestClearChat_

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

@interface ARRequestClearChat : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiOutPeer:(ARApiOutPeer * __nonnull)peer;

+ (ARRequestClearChat *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiOutPeer * __nonnull)getPeer;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestClearChat)

inline jint ARRequestClearChat_get_HEADER();
#define ARRequestClearChat_HEADER 99
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestClearChat, HEADER, jint)

FOUNDATION_EXPORT ARRequestClearChat *ARRequestClearChat_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestClearChat_initWithARApiOutPeer_(ARRequestClearChat *self, ARApiOutPeer *peer);

FOUNDATION_EXPORT ARRequestClearChat *new_ARRequestClearChat_initWithARApiOutPeer_(ARApiOutPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestClearChat *create_ARRequestClearChat_initWithARApiOutPeer_(ARApiOutPeer *peer);

FOUNDATION_EXPORT void ARRequestClearChat_init(ARRequestClearChat *self);

FOUNDATION_EXPORT ARRequestClearChat *new_ARRequestClearChat_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestClearChat *create_ARRequestClearChat_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestClearChat)

@compatibility_alias ImDiyalogCoreApiRpcRequestClearChat ARRequestClearChat;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestClearChat")
