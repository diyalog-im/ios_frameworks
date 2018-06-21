//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiOnRenegotiationNeeded.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiOnRenegotiationNeeded")
#ifdef RESTRICT_ImDiyalogCoreApiApiOnRenegotiationNeeded
#define INCLUDE_ALL_ImDiyalogCoreApiApiOnRenegotiationNeeded 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiOnRenegotiationNeeded 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiOnRenegotiationNeeded

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiOnRenegotiationNeeded_) && (INCLUDE_ALL_ImDiyalogCoreApiApiOnRenegotiationNeeded || defined(INCLUDE_ARApiOnRenegotiationNeeded))
#define ARApiOnRenegotiationNeeded_

#define RESTRICT_ImDiyalogCoreApiApiWebRTCSignaling 1
#define INCLUDE_ARApiWebRTCSignaling 1
#include "../../../../im/diyalog/core/api/ApiWebRTCSignaling.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiOnRenegotiationNeeded : ARApiWebRTCSignaling

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)device
                    withLong:(jlong)sessionId;

- (jlong)getDevice;

- (jint)getHeader;

- (jlong)getSessionId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiOnRenegotiationNeeded)

FOUNDATION_EXPORT void ARApiOnRenegotiationNeeded_initWithLong_withLong_(ARApiOnRenegotiationNeeded *self, jlong device, jlong sessionId);

FOUNDATION_EXPORT ARApiOnRenegotiationNeeded *new_ARApiOnRenegotiationNeeded_initWithLong_withLong_(jlong device, jlong sessionId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiOnRenegotiationNeeded *create_ARApiOnRenegotiationNeeded_initWithLong_withLong_(jlong device, jlong sessionId);

FOUNDATION_EXPORT void ARApiOnRenegotiationNeeded_init(ARApiOnRenegotiationNeeded *self);

FOUNDATION_EXPORT ARApiOnRenegotiationNeeded *new_ARApiOnRenegotiationNeeded_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiOnRenegotiationNeeded *create_ARApiOnRenegotiationNeeded_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiOnRenegotiationNeeded)

@compatibility_alias ImDiyalogCoreApiApiOnRenegotiationNeeded ARApiOnRenegotiationNeeded;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiOnRenegotiationNeeded")