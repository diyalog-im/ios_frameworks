//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiDomainSecurity.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiDomainSecurity")
#ifdef RESTRICT_ImDiyalogCoreApiApiDomainSecurity
#define INCLUDE_ALL_ImDiyalogCoreApiApiDomainSecurity 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiDomainSecurity 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiDomainSecurity

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiDomainSecurity_) && (INCLUDE_ALL_ImDiyalogCoreApiApiDomainSecurity || defined(INCLUDE_ARApiDomainSecurity))
#define ARApiDomainSecurity_

#define RESTRICT_ImDiyalogCoreApiApiDomainSecurityEx 1
#define INCLUDE_ARApiDomainSecurityEx 1
#include "../../../../im/diyalog/core/api/ApiDomainSecurityEx.h"

@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiDomainSecurity : ARApiDomainSecurityEx

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)domainUserId
                    withNSString:(NSString * __nonnull)token
                    withNSString:(NSString * __nonnull)additionalData;

- (NSString * __nonnull)getAdditionalData;

- (NSString * __nonnull)getDomainUserId;

- (jint)getHeader;

- (NSString * __nonnull)getToken;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiDomainSecurity)

FOUNDATION_EXPORT void ARApiDomainSecurity_initWithNSString_withNSString_withNSString_(ARApiDomainSecurity *self, NSString *domainUserId, NSString *token, NSString *additionalData);

FOUNDATION_EXPORT ARApiDomainSecurity *new_ARApiDomainSecurity_initWithNSString_withNSString_withNSString_(NSString *domainUserId, NSString *token, NSString *additionalData) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiDomainSecurity *create_ARApiDomainSecurity_initWithNSString_withNSString_withNSString_(NSString *domainUserId, NSString *token, NSString *additionalData);

FOUNDATION_EXPORT void ARApiDomainSecurity_init(ARApiDomainSecurity *self);

FOUNDATION_EXPORT ARApiDomainSecurity *new_ARApiDomainSecurity_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiDomainSecurity *create_ARApiDomainSecurity_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiDomainSecurity)

@compatibility_alias ImDiyalogCoreApiApiDomainSecurity ARApiDomainSecurity;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiDomainSecurity")
