//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiServiceExUserLeft.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExUserLeft")
#ifdef RESTRICT_ImDiyalogCoreApiApiServiceExUserLeft
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExUserLeft 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExUserLeft 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiServiceExUserLeft

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiServiceExUserLeft_) && (INCLUDE_ALL_ImDiyalogCoreApiApiServiceExUserLeft || defined(INCLUDE_ARApiServiceExUserLeft))
#define ARApiServiceExUserLeft_

#define RESTRICT_ImDiyalogCoreApiApiServiceEx 1
#define INCLUDE_ARApiServiceEx 1
#include "../../../../im/diyalog/core/api/ApiServiceEx.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiServiceExUserLeft : ARApiServiceEx

#pragma mark Public

- (instancetype)init;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiServiceExUserLeft)

FOUNDATION_EXPORT void ARApiServiceExUserLeft_init(ARApiServiceExUserLeft *self);

FOUNDATION_EXPORT ARApiServiceExUserLeft *new_ARApiServiceExUserLeft_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExUserLeft *create_ARApiServiceExUserLeft_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiServiceExUserLeft)

@compatibility_alias ImDiyalogCoreApiApiServiceExUserLeft ARApiServiceExUserLeft;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExUserLeft")