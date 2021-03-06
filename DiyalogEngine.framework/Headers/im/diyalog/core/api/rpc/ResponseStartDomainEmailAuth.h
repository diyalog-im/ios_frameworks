//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/ResponseStartDomainEmailAuth.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseStartDomainEmailAuth")
#ifdef RESTRICT_ImDiyalogCoreApiRpcResponseStartDomainEmailAuth
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseStartDomainEmailAuth 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseStartDomainEmailAuth 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcResponseStartDomainEmailAuth

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseStartDomainEmailAuth_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcResponseStartDomainEmailAuth || defined(INCLUDE_ARResponseStartDomainEmailAuth))
#define ARResponseStartDomainEmailAuth_

#define RESTRICT_ImDiyalogCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/diyalog/core/network/parser/Response.h"

@class ARApiEmailActivationType;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseStartDomainEmailAuth : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)transactionHash
                     withBoolean:(jboolean)isRegistered
    withARApiEmailActivationType:(ARApiEmailActivationType * __nonnull)activationType;

+ (ARResponseStartDomainEmailAuth *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiEmailActivationType * __nonnull)getActivationType;

- (jint)getHeaderKey;

- (NSString * __nonnull)getTransactionHash;

- (jboolean)isRegistered;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseStartDomainEmailAuth)

inline jint ARResponseStartDomainEmailAuth_get_HEADER();
#define ARResponseStartDomainEmailAuth_HEADER 286
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseStartDomainEmailAuth, HEADER, jint)

FOUNDATION_EXPORT ARResponseStartDomainEmailAuth *ARResponseStartDomainEmailAuth_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseStartDomainEmailAuth_initWithNSString_withBoolean_withARApiEmailActivationType_(ARResponseStartDomainEmailAuth *self, NSString *transactionHash, jboolean isRegistered, ARApiEmailActivationType *activationType);

FOUNDATION_EXPORT ARResponseStartDomainEmailAuth *new_ARResponseStartDomainEmailAuth_initWithNSString_withBoolean_withARApiEmailActivationType_(NSString *transactionHash, jboolean isRegistered, ARApiEmailActivationType *activationType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseStartDomainEmailAuth *create_ARResponseStartDomainEmailAuth_initWithNSString_withBoolean_withARApiEmailActivationType_(NSString *transactionHash, jboolean isRegistered, ARApiEmailActivationType *activationType);

FOUNDATION_EXPORT void ARResponseStartDomainEmailAuth_init(ARResponseStartDomainEmailAuth *self);

FOUNDATION_EXPORT ARResponseStartDomainEmailAuth *new_ARResponseStartDomainEmailAuth_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseStartDomainEmailAuth *create_ARResponseStartDomainEmailAuth_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseStartDomainEmailAuth)

@compatibility_alias ImDiyalogCoreApiRpcResponseStartDomainEmailAuth ARResponseStartDomainEmailAuth;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseStartDomainEmailAuth")
