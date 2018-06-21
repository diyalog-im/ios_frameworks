//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestGetOAuth2Params.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetOAuth2Params")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestGetOAuth2Params
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetOAuth2Params 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetOAuth2Params 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestGetOAuth2Params

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestGetOAuth2Params_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetOAuth2Params || defined(INCLUDE_ARRequestGetOAuth2Params))
#define ARRequestGetOAuth2Params_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestGetOAuth2Params : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)transactionHash
                    withNSString:(NSString * __nonnull)redirectUrl;

+ (ARRequestGetOAuth2Params *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getRedirectUrl;

- (NSString * __nonnull)getTransactionHash;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestGetOAuth2Params)

inline jint ARRequestGetOAuth2Params_get_HEADER();
#define ARRequestGetOAuth2Params_HEADER 194
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestGetOAuth2Params, HEADER, jint)

FOUNDATION_EXPORT ARRequestGetOAuth2Params *ARRequestGetOAuth2Params_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestGetOAuth2Params_initWithNSString_withNSString_(ARRequestGetOAuth2Params *self, NSString *transactionHash, NSString *redirectUrl);

FOUNDATION_EXPORT ARRequestGetOAuth2Params *new_ARRequestGetOAuth2Params_initWithNSString_withNSString_(NSString *transactionHash, NSString *redirectUrl) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestGetOAuth2Params *create_ARRequestGetOAuth2Params_initWithNSString_withNSString_(NSString *transactionHash, NSString *redirectUrl);

FOUNDATION_EXPORT void ARRequestGetOAuth2Params_init(ARRequestGetOAuth2Params *self);

FOUNDATION_EXPORT ARRequestGetOAuth2Params *new_ARRequestGetOAuth2Params_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestGetOAuth2Params *create_ARRequestGetOAuth2Params_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestGetOAuth2Params)

@compatibility_alias ImDiyalogCoreApiRpcRequestGetOAuth2Params ARRequestGetOAuth2Params;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetOAuth2Params")
