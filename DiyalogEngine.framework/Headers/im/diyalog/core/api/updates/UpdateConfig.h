//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateConfig.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateConfig")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateConfig
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateConfig 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateConfig 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateConfig

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateConfig_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateConfig || defined(INCLUDE_ARUpdateConfig))
#define ARUpdateConfig_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARApiConfig;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateConfig : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiConfig:(ARApiConfig * __nonnull)config;

+ (ARUpdateConfig *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiConfig * __nonnull)getConfig;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateConfig)

inline jint ARUpdateConfig_get_HEADER();
#define ARUpdateConfig_HEADER 42
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateConfig, HEADER, jint)

FOUNDATION_EXPORT ARUpdateConfig *ARUpdateConfig_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateConfig_initWithARApiConfig_(ARUpdateConfig *self, ARApiConfig *config);

FOUNDATION_EXPORT ARUpdateConfig *new_ARUpdateConfig_initWithARApiConfig_(ARApiConfig *config) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateConfig *create_ARUpdateConfig_initWithARApiConfig_(ARApiConfig *config);

FOUNDATION_EXPORT void ARUpdateConfig_init(ARUpdateConfig *self);

FOUNDATION_EXPORT ARUpdateConfig *new_ARUpdateConfig_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateConfig *create_ARUpdateConfig_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateConfig)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateConfig ARUpdateConfig;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateConfig")
