//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestSubscribeFromOnline.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSubscribeFromOnline")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestSubscribeFromOnline
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSubscribeFromOnline 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSubscribeFromOnline 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestSubscribeFromOnline

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestSubscribeFromOnline_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSubscribeFromOnline || defined(INCLUDE_ARRequestSubscribeFromOnline))
#define ARRequestSubscribeFromOnline_

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

@interface ARRequestSubscribeFromOnline : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)users;

+ (ARRequestSubscribeFromOnline *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getUsers;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestSubscribeFromOnline)

inline jint ARRequestSubscribeFromOnline_get_HEADER();
#define ARRequestSubscribeFromOnline_HEADER 33
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestSubscribeFromOnline, HEADER, jint)

FOUNDATION_EXPORT ARRequestSubscribeFromOnline *ARRequestSubscribeFromOnline_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestSubscribeFromOnline_initWithJavaUtilList_(ARRequestSubscribeFromOnline *self, id<JavaUtilList> users);

FOUNDATION_EXPORT ARRequestSubscribeFromOnline *new_ARRequestSubscribeFromOnline_initWithJavaUtilList_(id<JavaUtilList> users) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSubscribeFromOnline *create_ARRequestSubscribeFromOnline_initWithJavaUtilList_(id<JavaUtilList> users);

FOUNDATION_EXPORT void ARRequestSubscribeFromOnline_init(ARRequestSubscribeFromOnline *self);

FOUNDATION_EXPORT ARRequestSubscribeFromOnline *new_ARRequestSubscribeFromOnline_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSubscribeFromOnline *create_ARRequestSubscribeFromOnline_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestSubscribeFromOnline)

@compatibility_alias ImDiyalogCoreApiRpcRequestSubscribeFromOnline ARRequestSubscribeFromOnline;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSubscribeFromOnline")
