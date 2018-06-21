//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiServiceExChangedTitle.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChangedTitle")
#ifdef RESTRICT_ImDiyalogCoreApiApiServiceExChangedTitle
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChangedTitle 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChangedTitle 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiServiceExChangedTitle

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiServiceExChangedTitle_) && (INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChangedTitle || defined(INCLUDE_ARApiServiceExChangedTitle))
#define ARApiServiceExChangedTitle_

#define RESTRICT_ImDiyalogCoreApiApiServiceEx 1
#define INCLUDE_ARApiServiceEx 1
#include "../../../../im/diyalog/core/api/ApiServiceEx.h"

@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiServiceExChangedTitle : ARApiServiceEx

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)title;

- (jint)getHeader;

- (NSString * __nonnull)getTitle;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiServiceExChangedTitle)

FOUNDATION_EXPORT void ARApiServiceExChangedTitle_initWithNSString_(ARApiServiceExChangedTitle *self, NSString *title);

FOUNDATION_EXPORT ARApiServiceExChangedTitle *new_ARApiServiceExChangedTitle_initWithNSString_(NSString *title) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExChangedTitle *create_ARApiServiceExChangedTitle_initWithNSString_(NSString *title);

FOUNDATION_EXPORT void ARApiServiceExChangedTitle_init(ARApiServiceExChangedTitle *self);

FOUNDATION_EXPORT ARApiServiceExChangedTitle *new_ARApiServiceExChangedTitle_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExChangedTitle *create_ARApiServiceExChangedTitle_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiServiceExChangedTitle)

@compatibility_alias ImDiyalogCoreApiApiServiceExChangedTitle ARApiServiceExChangedTitle;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChangedTitle")
