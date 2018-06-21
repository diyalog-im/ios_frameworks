//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestNotifyAboutDeviceInfo.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestNotifyAboutDeviceInfo")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestNotifyAboutDeviceInfo
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestNotifyAboutDeviceInfo 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestNotifyAboutDeviceInfo 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestNotifyAboutDeviceInfo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestNotifyAboutDeviceInfo_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestNotifyAboutDeviceInfo || defined(INCLUDE_ARRequestNotifyAboutDeviceInfo))
#define ARRequestNotifyAboutDeviceInfo_

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

@interface ARRequestNotifyAboutDeviceInfo : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)preferredLanguages
                        withNSString:(NSString * __nullable)timeZone;

+ (ARRequestNotifyAboutDeviceInfo *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getPreferredLanguages;

- (NSString * __nullable)getTimeZone;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestNotifyAboutDeviceInfo)

inline jint ARRequestNotifyAboutDeviceInfo_get_HEADER();
#define ARRequestNotifyAboutDeviceInfo_HEADER 229
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestNotifyAboutDeviceInfo, HEADER, jint)

FOUNDATION_EXPORT ARRequestNotifyAboutDeviceInfo *ARRequestNotifyAboutDeviceInfo_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestNotifyAboutDeviceInfo_initWithJavaUtilList_withNSString_(ARRequestNotifyAboutDeviceInfo *self, id<JavaUtilList> preferredLanguages, NSString *timeZone);

FOUNDATION_EXPORT ARRequestNotifyAboutDeviceInfo *new_ARRequestNotifyAboutDeviceInfo_initWithJavaUtilList_withNSString_(id<JavaUtilList> preferredLanguages, NSString *timeZone) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestNotifyAboutDeviceInfo *create_ARRequestNotifyAboutDeviceInfo_initWithJavaUtilList_withNSString_(id<JavaUtilList> preferredLanguages, NSString *timeZone);

FOUNDATION_EXPORT void ARRequestNotifyAboutDeviceInfo_init(ARRequestNotifyAboutDeviceInfo *self);

FOUNDATION_EXPORT ARRequestNotifyAboutDeviceInfo *new_ARRequestNotifyAboutDeviceInfo_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestNotifyAboutDeviceInfo *create_ARRequestNotifyAboutDeviceInfo_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestNotifyAboutDeviceInfo)

@compatibility_alias ImDiyalogCoreApiRpcRequestNotifyAboutDeviceInfo ARRequestNotifyAboutDeviceInfo;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestNotifyAboutDeviceInfo")
