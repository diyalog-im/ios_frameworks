//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiDocumentExUnsupported.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiDocumentExUnsupported")
#ifdef RESTRICT_ImDiyalogCoreApiApiDocumentExUnsupported
#define INCLUDE_ALL_ImDiyalogCoreApiApiDocumentExUnsupported 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiDocumentExUnsupported 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiDocumentExUnsupported

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiDocumentExUnsupported_) && (INCLUDE_ALL_ImDiyalogCoreApiApiDocumentExUnsupported || defined(INCLUDE_ARApiDocumentExUnsupported))
#define ARApiDocumentExUnsupported_

#define RESTRICT_ImDiyalogCoreApiApiDocumentEx 1
#define INCLUDE_ARApiDocumentEx 1
#include "../../../../im/diyalog/core/api/ApiDocumentEx.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARApiDocumentExUnsupported : ARApiDocumentEx

#pragma mark Public

- (instancetype)initWithInt:(jint)key
              withByteArray:(IOSByteArray *)content;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiDocumentExUnsupported)

FOUNDATION_EXPORT void ARApiDocumentExUnsupported_initWithInt_withByteArray_(ARApiDocumentExUnsupported *self, jint key, IOSByteArray *content);

FOUNDATION_EXPORT ARApiDocumentExUnsupported *new_ARApiDocumentExUnsupported_initWithInt_withByteArray_(jint key, IOSByteArray *content) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiDocumentExUnsupported *create_ARApiDocumentExUnsupported_initWithInt_withByteArray_(jint key, IOSByteArray *content);

J2OBJC_TYPE_LITERAL_HEADER(ARApiDocumentExUnsupported)

@compatibility_alias ImDiyalogCoreApiApiDocumentExUnsupported ARApiDocumentExUnsupported;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiDocumentExUnsupported")
