//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/ResponseRawRequest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseRawRequest")
#ifdef RESTRICT_ImDiyalogCoreApiRpcResponseRawRequest
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseRawRequest 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseRawRequest 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcResponseRawRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseRawRequest_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcResponseRawRequest || defined(INCLUDE_ARResponseRawRequest))
#define ARResponseRawRequest_

#define RESTRICT_ImDiyalogCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/diyalog/core/network/parser/Response.h"

@class ARApiRawValue;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseRawRequest : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiRawValue:(ARApiRawValue * __nonnull)result;

+ (ARResponseRawRequest *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiRawValue * __nonnull)getResult;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseRawRequest)

inline jint ARResponseRawRequest_get_HEADER();
#define ARResponseRawRequest_HEADER 2570
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseRawRequest, HEADER, jint)

FOUNDATION_EXPORT ARResponseRawRequest *ARResponseRawRequest_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseRawRequest_initWithARApiRawValue_(ARResponseRawRequest *self, ARApiRawValue *result);

FOUNDATION_EXPORT ARResponseRawRequest *new_ARResponseRawRequest_initWithARApiRawValue_(ARApiRawValue *result) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseRawRequest *create_ARResponseRawRequest_initWithARApiRawValue_(ARApiRawValue *result);

FOUNDATION_EXPORT void ARResponseRawRequest_init(ARResponseRawRequest *self);

FOUNDATION_EXPORT ARResponseRawRequest *new_ARResponseRawRequest_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseRawRequest *create_ARResponseRawRequest_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseRawRequest)

@compatibility_alias ImDiyalogCoreApiRpcResponseRawRequest ARResponseRawRequest;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseRawRequest")
