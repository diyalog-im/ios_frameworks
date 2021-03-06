//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestStoreEvents.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStoreEvents")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestStoreEvents
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStoreEvents 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStoreEvents 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestStoreEvents

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestStoreEvents_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStoreEvents || defined(INCLUDE_ARRequestStoreEvents))
#define ARRequestStoreEvents_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestStoreEvents : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)events;

+ (ARRequestStoreEvents *)fromBytesWithByteArray:(IOSByteArray *)data;

- (id<JavaUtilList> __nonnull)getEvents;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestStoreEvents)

inline jint ARRequestStoreEvents_get_HEADER();
#define ARRequestStoreEvents_HEADER 243
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestStoreEvents, HEADER, jint)

FOUNDATION_EXPORT ARRequestStoreEvents *ARRequestStoreEvents_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestStoreEvents_initWithJavaUtilList_(ARRequestStoreEvents *self, id<JavaUtilList> events);

FOUNDATION_EXPORT ARRequestStoreEvents *new_ARRequestStoreEvents_initWithJavaUtilList_(id<JavaUtilList> events) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStoreEvents *create_ARRequestStoreEvents_initWithJavaUtilList_(id<JavaUtilList> events);

FOUNDATION_EXPORT void ARRequestStoreEvents_init(ARRequestStoreEvents *self);

FOUNDATION_EXPORT ARRequestStoreEvents *new_ARRequestStoreEvents_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStoreEvents *create_ARRequestStoreEvents_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestStoreEvents)

@compatibility_alias ImDiyalogCoreApiRpcRequestStoreEvents ARRequestStoreEvents;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStoreEvents")
