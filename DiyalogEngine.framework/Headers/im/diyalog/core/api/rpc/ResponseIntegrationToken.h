//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/ResponseIntegrationToken.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseIntegrationToken")
#ifdef RESTRICT_ImDiyalogCoreApiRpcResponseIntegrationToken
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseIntegrationToken 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseIntegrationToken 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcResponseIntegrationToken

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseIntegrationToken_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcResponseIntegrationToken || defined(INCLUDE_ARResponseIntegrationToken))
#define ARResponseIntegrationToken_

#define RESTRICT_ImDiyalogCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/diyalog/core/network/parser/Response.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseIntegrationToken : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)token
                    withNSString:(NSString * __nonnull)url;

+ (ARResponseIntegrationToken *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getToken;

- (NSString * __nonnull)getUrl;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseIntegrationToken)

inline jint ARResponseIntegrationToken_get_HEADER();
#define ARResponseIntegrationToken_HEADER 183
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseIntegrationToken, HEADER, jint)

FOUNDATION_EXPORT ARResponseIntegrationToken *ARResponseIntegrationToken_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseIntegrationToken_initWithNSString_withNSString_(ARResponseIntegrationToken *self, NSString *token, NSString *url);

FOUNDATION_EXPORT ARResponseIntegrationToken *new_ARResponseIntegrationToken_initWithNSString_withNSString_(NSString *token, NSString *url) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseIntegrationToken *create_ARResponseIntegrationToken_initWithNSString_withNSString_(NSString *token, NSString *url);

FOUNDATION_EXPORT void ARResponseIntegrationToken_init(ARResponseIntegrationToken *self);

FOUNDATION_EXPORT ARResponseIntegrationToken *new_ARResponseIntegrationToken_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseIntegrationToken *create_ARResponseIntegrationToken_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseIntegrationToken)

@compatibility_alias ImDiyalogCoreApiRpcResponseIntegrationToken ARResponseIntegrationToken;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseIntegrationToken")
