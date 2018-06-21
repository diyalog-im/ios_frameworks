//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestRawRequest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestRawRequest")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestRawRequest
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestRawRequest 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestRawRequest 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestRawRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestRawRequest_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestRawRequest || defined(INCLUDE_ARRequestRawRequest))
#define ARRequestRawRequest_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiRawValue;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestRawRequest : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)service
                    withNSString:(NSString * __nonnull)method
               withARApiRawValue:(ARApiRawValue * __nullable)params;

+ (ARRequestRawRequest *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getMethod;

- (ARApiRawValue * __nullable)getParams;

- (NSString * __nonnull)getService;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestRawRequest)

inline jint ARRequestRawRequest_get_HEADER();
#define ARRequestRawRequest_HEADER 2569
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestRawRequest, HEADER, jint)

FOUNDATION_EXPORT ARRequestRawRequest *ARRequestRawRequest_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestRawRequest_initWithNSString_withNSString_withARApiRawValue_(ARRequestRawRequest *self, NSString *service, NSString *method, ARApiRawValue *params);

FOUNDATION_EXPORT ARRequestRawRequest *new_ARRequestRawRequest_initWithNSString_withNSString_withARApiRawValue_(NSString *service, NSString *method, ARApiRawValue *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestRawRequest *create_ARRequestRawRequest_initWithNSString_withNSString_withARApiRawValue_(NSString *service, NSString *method, ARApiRawValue *params);

FOUNDATION_EXPORT void ARRequestRawRequest_init(ARRequestRawRequest *self);

FOUNDATION_EXPORT ARRequestRawRequest *new_ARRequestRawRequest_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestRawRequest *create_ARRequestRawRequest_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestRawRequest)

@compatibility_alias ImDiyalogCoreApiRpcRequestRawRequest ARRequestRawRequest;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestRawRequest")