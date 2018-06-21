//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestDeleteMessage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestDeleteMessage")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestDeleteMessage
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestDeleteMessage 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestDeleteMessage 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestDeleteMessage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestDeleteMessage_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestDeleteMessage || defined(INCLUDE_ARRequestDeleteMessage))
#define ARRequestDeleteMessage_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestDeleteMessage : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiOutPeer:(ARApiOutPeer * __nonnull)peer
                    withJavaUtilList:(id<JavaUtilList> __nonnull)rids;

+ (ARRequestDeleteMessage *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiOutPeer * __nonnull)getPeer;

- (id<JavaUtilList> __nonnull)getRids;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestDeleteMessage)

inline jint ARRequestDeleteMessage_get_HEADER();
#define ARRequestDeleteMessage_HEADER 98
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestDeleteMessage, HEADER, jint)

FOUNDATION_EXPORT ARRequestDeleteMessage *ARRequestDeleteMessage_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestDeleteMessage_initWithARApiOutPeer_withJavaUtilList_(ARRequestDeleteMessage *self, ARApiOutPeer *peer, id<JavaUtilList> rids);

FOUNDATION_EXPORT ARRequestDeleteMessage *new_ARRequestDeleteMessage_initWithARApiOutPeer_withJavaUtilList_(ARApiOutPeer *peer, id<JavaUtilList> rids) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestDeleteMessage *create_ARRequestDeleteMessage_initWithARApiOutPeer_withJavaUtilList_(ARApiOutPeer *peer, id<JavaUtilList> rids);

FOUNDATION_EXPORT void ARRequestDeleteMessage_init(ARRequestDeleteMessage *self);

FOUNDATION_EXPORT ARRequestDeleteMessage *new_ARRequestDeleteMessage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestDeleteMessage *create_ARRequestDeleteMessage_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestDeleteMessage)

@compatibility_alias ImDiyalogCoreApiRpcRequestDeleteMessage ARRequestDeleteMessage;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestDeleteMessage")
