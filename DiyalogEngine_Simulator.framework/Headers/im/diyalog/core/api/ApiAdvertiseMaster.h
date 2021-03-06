//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiAdvertiseMaster.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiAdvertiseMaster")
#ifdef RESTRICT_ImDiyalogCoreApiApiAdvertiseMaster
#define INCLUDE_ALL_ImDiyalogCoreApiApiAdvertiseMaster 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiAdvertiseMaster 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiAdvertiseMaster

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiAdvertiseMaster_) && (INCLUDE_ALL_ImDiyalogCoreApiApiAdvertiseMaster || defined(INCLUDE_ARApiAdvertiseMaster))
#define ARApiAdvertiseMaster_

#define RESTRICT_ImDiyalogCoreApiApiWebRTCSignaling 1
#define INCLUDE_ARApiWebRTCSignaling 1
#include "../../../../im/diyalog/core/api/ApiWebRTCSignaling.h"

@class ARBserValues;
@class ARBserWriter;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiAdvertiseMaster : ARApiWebRTCSignaling

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)server;

- (jint)getHeader;

- (id<JavaUtilList> __nonnull)getServer;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiAdvertiseMaster)

FOUNDATION_EXPORT void ARApiAdvertiseMaster_initWithJavaUtilList_(ARApiAdvertiseMaster *self, id<JavaUtilList> server);

FOUNDATION_EXPORT ARApiAdvertiseMaster *new_ARApiAdvertiseMaster_initWithJavaUtilList_(id<JavaUtilList> server) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiAdvertiseMaster *create_ARApiAdvertiseMaster_initWithJavaUtilList_(id<JavaUtilList> server);

FOUNDATION_EXPORT void ARApiAdvertiseMaster_init(ARApiAdvertiseMaster *self);

FOUNDATION_EXPORT ARApiAdvertiseMaster *new_ARApiAdvertiseMaster_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiAdvertiseMaster *create_ARApiAdvertiseMaster_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiAdvertiseMaster)

@compatibility_alias ImDiyalogCoreApiApiAdvertiseMaster ARApiAdvertiseMaster;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiAdvertiseMaster")
