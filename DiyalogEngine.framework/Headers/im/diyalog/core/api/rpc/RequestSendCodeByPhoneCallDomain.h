//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestSendCodeByPhoneCallDomain.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSendCodeByPhoneCallDomain")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestSendCodeByPhoneCallDomain
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSendCodeByPhoneCallDomain 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSendCodeByPhoneCallDomain 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestSendCodeByPhoneCallDomain

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestSendCodeByPhoneCallDomain_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSendCodeByPhoneCallDomain || defined(INCLUDE_ARRequestSendCodeByPhoneCallDomain))
#define ARRequestSendCodeByPhoneCallDomain_

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

@interface ARRequestSendCodeByPhoneCallDomain : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)transactionHash;

+ (ARRequestSendCodeByPhoneCallDomain *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (NSString * __nonnull)getTransactionHash;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestSendCodeByPhoneCallDomain)

inline jint ARRequestSendCodeByPhoneCallDomain_get_HEADER();
#define ARRequestSendCodeByPhoneCallDomain_HEADER 397
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestSendCodeByPhoneCallDomain, HEADER, jint)

FOUNDATION_EXPORT ARRequestSendCodeByPhoneCallDomain *ARRequestSendCodeByPhoneCallDomain_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestSendCodeByPhoneCallDomain_initWithNSString_(ARRequestSendCodeByPhoneCallDomain *self, NSString *transactionHash);

FOUNDATION_EXPORT ARRequestSendCodeByPhoneCallDomain *new_ARRequestSendCodeByPhoneCallDomain_initWithNSString_(NSString *transactionHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSendCodeByPhoneCallDomain *create_ARRequestSendCodeByPhoneCallDomain_initWithNSString_(NSString *transactionHash);

FOUNDATION_EXPORT void ARRequestSendCodeByPhoneCallDomain_init(ARRequestSendCodeByPhoneCallDomain *self);

FOUNDATION_EXPORT ARRequestSendCodeByPhoneCallDomain *new_ARRequestSendCodeByPhoneCallDomain_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSendCodeByPhoneCallDomain *create_ARRequestSendCodeByPhoneCallDomain_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestSendCodeByPhoneCallDomain)

@compatibility_alias ImDiyalogCoreApiRpcRequestSendCodeByPhoneCallDomain ARRequestSendCodeByPhoneCallDomain;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSendCodeByPhoneCallDomain")
