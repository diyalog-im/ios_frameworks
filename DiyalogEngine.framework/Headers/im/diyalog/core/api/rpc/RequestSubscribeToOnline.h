//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestSubscribeToOnline.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSubscribeToOnline")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestSubscribeToOnline
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSubscribeToOnline 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSubscribeToOnline 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestSubscribeToOnline

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestSubscribeToOnline_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSubscribeToOnline || defined(INCLUDE_ARRequestSubscribeToOnline))
#define ARRequestSubscribeToOnline_

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

@interface ARRequestSubscribeToOnline : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)users;

+ (ARRequestSubscribeToOnline *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getUsers;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestSubscribeToOnline)

inline jint ARRequestSubscribeToOnline_get_HEADER();
#define ARRequestSubscribeToOnline_HEADER 32
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestSubscribeToOnline, HEADER, jint)

FOUNDATION_EXPORT ARRequestSubscribeToOnline *ARRequestSubscribeToOnline_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestSubscribeToOnline_initWithJavaUtilList_(ARRequestSubscribeToOnline *self, id<JavaUtilList> users);

FOUNDATION_EXPORT ARRequestSubscribeToOnline *new_ARRequestSubscribeToOnline_initWithJavaUtilList_(id<JavaUtilList> users) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSubscribeToOnline *create_ARRequestSubscribeToOnline_initWithJavaUtilList_(id<JavaUtilList> users);

FOUNDATION_EXPORT void ARRequestSubscribeToOnline_init(ARRequestSubscribeToOnline *self);

FOUNDATION_EXPORT ARRequestSubscribeToOnline *new_ARRequestSubscribeToOnline_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSubscribeToOnline *create_ARRequestSubscribeToOnline_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestSubscribeToOnline)

@compatibility_alias ImDiyalogCoreApiRpcRequestSubscribeToOnline ARRequestSubscribeToOnline;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSubscribeToOnline")
