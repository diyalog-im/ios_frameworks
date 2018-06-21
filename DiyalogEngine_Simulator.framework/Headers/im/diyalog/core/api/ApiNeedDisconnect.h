//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiNeedDisconnect.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiNeedDisconnect")
#ifdef RESTRICT_ImDiyalogCoreApiApiNeedDisconnect
#define INCLUDE_ALL_ImDiyalogCoreApiApiNeedDisconnect 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiNeedDisconnect 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiNeedDisconnect

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiNeedDisconnect_) && (INCLUDE_ALL_ImDiyalogCoreApiApiNeedDisconnect || defined(INCLUDE_ARApiNeedDisconnect))
#define ARApiNeedDisconnect_

#define RESTRICT_ImDiyalogCoreApiApiWebRTCSignaling 1
#define INCLUDE_ARApiWebRTCSignaling 1
#include "../../../../im/diyalog/core/api/ApiWebRTCSignaling.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiNeedDisconnect : ARApiWebRTCSignaling

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)device;

- (jlong)getDevice;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiNeedDisconnect)

FOUNDATION_EXPORT void ARApiNeedDisconnect_initWithLong_(ARApiNeedDisconnect *self, jlong device);

FOUNDATION_EXPORT ARApiNeedDisconnect *new_ARApiNeedDisconnect_initWithLong_(jlong device) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiNeedDisconnect *create_ARApiNeedDisconnect_initWithLong_(jlong device);

FOUNDATION_EXPORT void ARApiNeedDisconnect_init(ARApiNeedDisconnect *self);

FOUNDATION_EXPORT ARApiNeedDisconnect *new_ARApiNeedDisconnect_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiNeedDisconnect *create_ARApiNeedDisconnect_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiNeedDisconnect)

@compatibility_alias ImDiyalogCoreApiApiNeedDisconnect ARApiNeedDisconnect;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiNeedDisconnect")
