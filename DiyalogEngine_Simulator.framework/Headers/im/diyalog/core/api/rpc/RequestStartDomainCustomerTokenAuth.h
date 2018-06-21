//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestStartDomainCustomerTokenAuth.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainCustomerTokenAuth")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestStartDomainCustomerTokenAuth
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainCustomerTokenAuth 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainCustomerTokenAuth 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestStartDomainCustomerTokenAuth

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestStartDomainCustomerTokenAuth_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainCustomerTokenAuth || defined(INCLUDE_ARRequestStartDomainCustomerTokenAuth))
#define ARRequestStartDomainCustomerTokenAuth_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class JavaLangLong;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestStartDomainCustomerTokenAuth : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)deviceId
                    withNSString:(NSString * __nonnull)custId
                    withNSString:(NSString * __nonnull)custName
                withJavaLangLong:(JavaLangLong * __nullable)userPhone
                    withNSString:(NSString * __nullable)userEmail
                         withInt:(jint)appId
                    withNSString:(NSString * __nonnull)apiKey
                   withByteArray:(IOSByteArray * __nonnull)deviceHash
                    withNSString:(NSString * __nonnull)deviceTitle
                    withNSString:(NSString * __nullable)timeZone
                withJavaUtilList:(id<JavaUtilList> __nonnull)preferredLanguages;

+ (ARRequestStartDomainCustomerTokenAuth *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getApiKey;

- (jint)getAppId;

- (NSString * __nonnull)getCustId;

- (NSString * __nonnull)getCustName;

- (IOSByteArray * __nonnull)getDeviceHash;

- (NSString * __nonnull)getDeviceId;

- (NSString * __nonnull)getDeviceTitle;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getPreferredLanguages;

- (NSString * __nullable)getTimeZone;

- (NSString * __nullable)getUserEmail;

- (JavaLangLong * __nullable)getUserPhone;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestStartDomainCustomerTokenAuth)

inline jint ARRequestStartDomainCustomerTokenAuth_get_HEADER();
#define ARRequestStartDomainCustomerTokenAuth_HEADER 208
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestStartDomainCustomerTokenAuth, HEADER, jint)

FOUNDATION_EXPORT ARRequestStartDomainCustomerTokenAuth *ARRequestStartDomainCustomerTokenAuth_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestStartDomainCustomerTokenAuth_initWithNSString_withNSString_withNSString_withJavaLangLong_withNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(ARRequestStartDomainCustomerTokenAuth *self, NSString *deviceId, NSString *custId, NSString *custName, JavaLangLong *userPhone, NSString *userEmail, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages);

FOUNDATION_EXPORT ARRequestStartDomainCustomerTokenAuth *new_ARRequestStartDomainCustomerTokenAuth_initWithNSString_withNSString_withNSString_withJavaLangLong_withNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(NSString *deviceId, NSString *custId, NSString *custName, JavaLangLong *userPhone, NSString *userEmail, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStartDomainCustomerTokenAuth *create_ARRequestStartDomainCustomerTokenAuth_initWithNSString_withNSString_withNSString_withJavaLangLong_withNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(NSString *deviceId, NSString *custId, NSString *custName, JavaLangLong *userPhone, NSString *userEmail, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages);

FOUNDATION_EXPORT void ARRequestStartDomainCustomerTokenAuth_init(ARRequestStartDomainCustomerTokenAuth *self);

FOUNDATION_EXPORT ARRequestStartDomainCustomerTokenAuth *new_ARRequestStartDomainCustomerTokenAuth_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStartDomainCustomerTokenAuth *create_ARRequestStartDomainCustomerTokenAuth_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestStartDomainCustomerTokenAuth)

@compatibility_alias ImDiyalogCoreApiRpcRequestStartDomainCustomerTokenAuth ARRequestStartDomainCustomerTokenAuth;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartDomainCustomerTokenAuth")