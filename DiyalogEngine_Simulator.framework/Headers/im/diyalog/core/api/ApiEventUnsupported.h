//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiEventUnsupported.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiEventUnsupported")
#ifdef RESTRICT_ImDiyalogCoreApiApiEventUnsupported
#define INCLUDE_ALL_ImDiyalogCoreApiApiEventUnsupported 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiEventUnsupported 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiEventUnsupported

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiEventUnsupported_) && (INCLUDE_ALL_ImDiyalogCoreApiApiEventUnsupported || defined(INCLUDE_ARApiEventUnsupported))
#define ARApiEventUnsupported_

#define RESTRICT_ImDiyalogCoreApiApiEvent 1
#define INCLUDE_ARApiEvent 1
#include "../../../../im/diyalog/core/api/ApiEvent.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARApiEventUnsupported : ARApiEvent

#pragma mark Public

- (instancetype)initWithInt:(jint)key
              withByteArray:(IOSByteArray *)content;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiEventUnsupported)

FOUNDATION_EXPORT void ARApiEventUnsupported_initWithInt_withByteArray_(ARApiEventUnsupported *self, jint key, IOSByteArray *content);

FOUNDATION_EXPORT ARApiEventUnsupported *new_ARApiEventUnsupported_initWithInt_withByteArray_(jint key, IOSByteArray *content) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiEventUnsupported *create_ARApiEventUnsupported_initWithInt_withByteArray_(jint key, IOSByteArray *content);

J2OBJC_TYPE_LITERAL_HEADER(ARApiEventUnsupported)

@compatibility_alias ImDiyalogCoreApiApiEventUnsupported ARApiEventUnsupported;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiEventUnsupported")
