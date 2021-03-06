//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiServiceExChangedAbout.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChangedAbout")
#ifdef RESTRICT_ImDiyalogCoreApiApiServiceExChangedAbout
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChangedAbout 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChangedAbout 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiServiceExChangedAbout

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiServiceExChangedAbout_) && (INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChangedAbout || defined(INCLUDE_ARApiServiceExChangedAbout))
#define ARApiServiceExChangedAbout_

#define RESTRICT_ImDiyalogCoreApiApiServiceEx 1
#define INCLUDE_ARApiServiceEx 1
#include "../../../../im/diyalog/core/api/ApiServiceEx.h"

@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiServiceExChangedAbout : ARApiServiceEx

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nullable)about;

- (NSString * __nullable)getAbout;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiServiceExChangedAbout)

FOUNDATION_EXPORT void ARApiServiceExChangedAbout_initWithNSString_(ARApiServiceExChangedAbout *self, NSString *about);

FOUNDATION_EXPORT ARApiServiceExChangedAbout *new_ARApiServiceExChangedAbout_initWithNSString_(NSString *about) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExChangedAbout *create_ARApiServiceExChangedAbout_initWithNSString_(NSString *about);

FOUNDATION_EXPORT void ARApiServiceExChangedAbout_init(ARApiServiceExChangedAbout *self);

FOUNDATION_EXPORT ARApiServiceExChangedAbout *new_ARApiServiceExChangedAbout_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExChangedAbout *create_ARApiServiceExChangedAbout_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiServiceExChangedAbout)

@compatibility_alias ImDiyalogCoreApiApiServiceExChangedAbout ARApiServiceExChangedAbout;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChangedAbout")
