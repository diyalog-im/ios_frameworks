//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/ResponseStartBusinessPhoneAuth.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseStartBusinessPhoneAuth")
#ifdef RESTRICT_ImDiyalogCoreApiRpcResponseStartBusinessPhoneAuth
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseStartBusinessPhoneAuth 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseStartBusinessPhoneAuth 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcResponseStartBusinessPhoneAuth

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseStartBusinessPhoneAuth_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcResponseStartBusinessPhoneAuth || defined(INCLUDE_ARResponseStartBusinessPhoneAuth))
#define ARResponseStartBusinessPhoneAuth_

#define RESTRICT_ImDiyalogCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/diyalog/core/network/parser/Response.h"

@class ARApiPhoneActivationType;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseStartBusinessPhoneAuth : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)transactionHash
                     withBoolean:(jboolean)isRegistered
    withARApiPhoneActivationType:(ARApiPhoneActivationType * __nullable)activationType;

+ (ARResponseStartBusinessPhoneAuth *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiPhoneActivationType * __nullable)getActivationType;

- (jint)getHeaderKey;

- (NSString * __nonnull)getTransactionHash;

- (jboolean)isRegistered;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseStartBusinessPhoneAuth)

inline jint ARResponseStartBusinessPhoneAuth_get_HEADER();
#define ARResponseStartBusinessPhoneAuth_HEADER 394
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseStartBusinessPhoneAuth, HEADER, jint)

FOUNDATION_EXPORT ARResponseStartBusinessPhoneAuth *ARResponseStartBusinessPhoneAuth_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseStartBusinessPhoneAuth_initWithNSString_withBoolean_withARApiPhoneActivationType_(ARResponseStartBusinessPhoneAuth *self, NSString *transactionHash, jboolean isRegistered, ARApiPhoneActivationType *activationType);

FOUNDATION_EXPORT ARResponseStartBusinessPhoneAuth *new_ARResponseStartBusinessPhoneAuth_initWithNSString_withBoolean_withARApiPhoneActivationType_(NSString *transactionHash, jboolean isRegistered, ARApiPhoneActivationType *activationType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseStartBusinessPhoneAuth *create_ARResponseStartBusinessPhoneAuth_initWithNSString_withBoolean_withARApiPhoneActivationType_(NSString *transactionHash, jboolean isRegistered, ARApiPhoneActivationType *activationType);

FOUNDATION_EXPORT void ARResponseStartBusinessPhoneAuth_init(ARResponseStartBusinessPhoneAuth *self);

FOUNDATION_EXPORT ARResponseStartBusinessPhoneAuth *new_ARResponseStartBusinessPhoneAuth_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseStartBusinessPhoneAuth *create_ARResponseStartBusinessPhoneAuth_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseStartBusinessPhoneAuth)

@compatibility_alias ImDiyalogCoreApiRpcResponseStartBusinessPhoneAuth ARResponseStartBusinessPhoneAuth;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseStartBusinessPhoneAuth")
