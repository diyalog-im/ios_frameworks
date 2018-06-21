//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiAppVisibleChanged.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiAppVisibleChanged")
#ifdef RESTRICT_ImDiyalogCoreApiApiAppVisibleChanged
#define INCLUDE_ALL_ImDiyalogCoreApiApiAppVisibleChanged 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiAppVisibleChanged 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiAppVisibleChanged

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiAppVisibleChanged_) && (INCLUDE_ALL_ImDiyalogCoreApiApiAppVisibleChanged || defined(INCLUDE_ARApiAppVisibleChanged))
#define ARApiAppVisibleChanged_

#define RESTRICT_ImDiyalogCoreApiApiEvent 1
#define INCLUDE_ARApiEvent 1
#include "../../../../im/diyalog/core/api/ApiEvent.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiAppVisibleChanged : ARApiEvent

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithBoolean:(jboolean)visible;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

- (jboolean)visible;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiAppVisibleChanged)

FOUNDATION_EXPORT void ARApiAppVisibleChanged_initWithBoolean_(ARApiAppVisibleChanged *self, jboolean visible);

FOUNDATION_EXPORT ARApiAppVisibleChanged *new_ARApiAppVisibleChanged_initWithBoolean_(jboolean visible) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiAppVisibleChanged *create_ARApiAppVisibleChanged_initWithBoolean_(jboolean visible);

FOUNDATION_EXPORT void ARApiAppVisibleChanged_init(ARApiAppVisibleChanged *self);

FOUNDATION_EXPORT ARApiAppVisibleChanged *new_ARApiAppVisibleChanged_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiAppVisibleChanged *create_ARApiAppVisibleChanged_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiAppVisibleChanged)

@compatibility_alias ImDiyalogCoreApiApiAppVisibleChanged ARApiAppVisibleChanged;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiAppVisibleChanged")