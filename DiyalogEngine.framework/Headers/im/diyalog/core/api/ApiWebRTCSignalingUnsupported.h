//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiWebRTCSignalingUnsupported.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiWebRTCSignalingUnsupported")
#ifdef RESTRICT_ImDiyalogCoreApiApiWebRTCSignalingUnsupported
#define INCLUDE_ALL_ImDiyalogCoreApiApiWebRTCSignalingUnsupported 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiWebRTCSignalingUnsupported 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiWebRTCSignalingUnsupported

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiWebRTCSignalingUnsupported_) && (INCLUDE_ALL_ImDiyalogCoreApiApiWebRTCSignalingUnsupported || defined(INCLUDE_ARApiWebRTCSignalingUnsupported))
#define ARApiWebRTCSignalingUnsupported_

#define RESTRICT_ImDiyalogCoreApiApiWebRTCSignaling 1
#define INCLUDE_ARApiWebRTCSignaling 1
#include "../../../../im/diyalog/core/api/ApiWebRTCSignaling.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARApiWebRTCSignalingUnsupported : ARApiWebRTCSignaling

#pragma mark Public

- (instancetype)initWithInt:(jint)key
              withByteArray:(IOSByteArray *)content;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiWebRTCSignalingUnsupported)

FOUNDATION_EXPORT void ARApiWebRTCSignalingUnsupported_initWithInt_withByteArray_(ARApiWebRTCSignalingUnsupported *self, jint key, IOSByteArray *content);

FOUNDATION_EXPORT ARApiWebRTCSignalingUnsupported *new_ARApiWebRTCSignalingUnsupported_initWithInt_withByteArray_(jint key, IOSByteArray *content) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiWebRTCSignalingUnsupported *create_ARApiWebRTCSignalingUnsupported_initWithInt_withByteArray_(jint key, IOSByteArray *content);

J2OBJC_TYPE_LITERAL_HEADER(ARApiWebRTCSignalingUnsupported)

@compatibility_alias ImDiyalogCoreApiApiWebRTCSignalingUnsupported ARApiWebRTCSignalingUnsupported;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiWebRTCSignalingUnsupported")
