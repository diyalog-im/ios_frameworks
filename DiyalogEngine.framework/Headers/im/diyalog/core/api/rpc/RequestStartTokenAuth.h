//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestStartTokenAuth.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartTokenAuth")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestStartTokenAuth
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartTokenAuth 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartTokenAuth 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestStartTokenAuth

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestStartTokenAuth_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartTokenAuth || defined(INCLUDE_ARRequestStartTokenAuth))
#define ARRequestStartTokenAuth_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestStartTokenAuth : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)token
                         withInt:(jint)appId
                    withNSString:(NSString * __nonnull)apiKey
                   withByteArray:(IOSByteArray * __nonnull)deviceHash
                    withNSString:(NSString * __nonnull)deviceTitle
                    withNSString:(NSString * __nullable)timeZone
                withJavaUtilList:(id<JavaUtilList> __nonnull)preferredLanguages;

+ (ARRequestStartTokenAuth *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getApiKey;

- (jint)getAppId;

- (IOSByteArray * __nonnull)getDeviceHash;

- (NSString * __nonnull)getDeviceTitle;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getPreferredLanguages;

- (NSString * __nullable)getTimeZone;

- (NSString * __nonnull)getToken;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestStartTokenAuth)

inline jint ARRequestStartTokenAuth_get_HEADER();
#define ARRequestStartTokenAuth_HEADER 203
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestStartTokenAuth, HEADER, jint)

FOUNDATION_EXPORT ARRequestStartTokenAuth *ARRequestStartTokenAuth_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestStartTokenAuth_initWithNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(ARRequestStartTokenAuth *self, NSString *token, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages);

FOUNDATION_EXPORT ARRequestStartTokenAuth *new_ARRequestStartTokenAuth_initWithNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(NSString *token, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStartTokenAuth *create_ARRequestStartTokenAuth_initWithNSString_withInt_withNSString_withByteArray_withNSString_withNSString_withJavaUtilList_(NSString *token, jint appId, NSString *apiKey, IOSByteArray *deviceHash, NSString *deviceTitle, NSString *timeZone, id<JavaUtilList> preferredLanguages);

FOUNDATION_EXPORT void ARRequestStartTokenAuth_init(ARRequestStartTokenAuth *self);

FOUNDATION_EXPORT ARRequestStartTokenAuth *new_ARRequestStartTokenAuth_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestStartTokenAuth *create_ARRequestStartTokenAuth_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestStartTokenAuth)

@compatibility_alias ImDiyalogCoreApiRpcRequestStartTokenAuth ARRequestStartTokenAuth;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestStartTokenAuth")