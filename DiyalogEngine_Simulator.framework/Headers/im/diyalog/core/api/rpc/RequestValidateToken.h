//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestValidateToken.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestValidateToken")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestValidateToken
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestValidateToken 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestValidateToken 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestValidateToken

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestValidateToken_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestValidateToken || defined(INCLUDE_ARRequestValidateToken))
#define ARRequestValidateToken_

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

@interface ARRequestValidateToken : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)transactionHash
                    withNSString:(NSString * __nonnull)dlgToken;

+ (ARRequestValidateToken *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getDlgToken;

- (jint)getHeaderKey;

- (NSString * __nonnull)getTransactionHash;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestValidateToken)

inline jint ARRequestValidateToken_get_HEADER();
#define ARRequestValidateToken_HEADER 408
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestValidateToken, HEADER, jint)

FOUNDATION_EXPORT ARRequestValidateToken *ARRequestValidateToken_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestValidateToken_initWithNSString_withNSString_(ARRequestValidateToken *self, NSString *transactionHash, NSString *dlgToken);

FOUNDATION_EXPORT ARRequestValidateToken *new_ARRequestValidateToken_initWithNSString_withNSString_(NSString *transactionHash, NSString *dlgToken) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestValidateToken *create_ARRequestValidateToken_initWithNSString_withNSString_(NSString *transactionHash, NSString *dlgToken);

FOUNDATION_EXPORT void ARRequestValidateToken_init(ARRequestValidateToken *self);

FOUNDATION_EXPORT ARRequestValidateToken *new_ARRequestValidateToken_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestValidateToken *create_ARRequestValidateToken_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestValidateToken)

@compatibility_alias ImDiyalogCoreApiRpcRequestValidateToken ARRequestValidateToken;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestValidateToken")
