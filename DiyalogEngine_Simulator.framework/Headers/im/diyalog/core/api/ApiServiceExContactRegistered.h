//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiServiceExContactRegistered.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExContactRegistered")
#ifdef RESTRICT_ImDiyalogCoreApiApiServiceExContactRegistered
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExContactRegistered 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExContactRegistered 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiServiceExContactRegistered

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiServiceExContactRegistered_) && (INCLUDE_ALL_ImDiyalogCoreApiApiServiceExContactRegistered || defined(INCLUDE_ARApiServiceExContactRegistered))
#define ARApiServiceExContactRegistered_

#define RESTRICT_ImDiyalogCoreApiApiServiceEx 1
#define INCLUDE_ARApiServiceEx 1
#include "../../../../im/diyalog/core/api/ApiServiceEx.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiServiceExContactRegistered : ARApiServiceEx

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)uid;

- (jint)getHeader;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiServiceExContactRegistered)

FOUNDATION_EXPORT void ARApiServiceExContactRegistered_initWithInt_(ARApiServiceExContactRegistered *self, jint uid);

FOUNDATION_EXPORT ARApiServiceExContactRegistered *new_ARApiServiceExContactRegistered_initWithInt_(jint uid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExContactRegistered *create_ARApiServiceExContactRegistered_initWithInt_(jint uid);

FOUNDATION_EXPORT void ARApiServiceExContactRegistered_init(ARApiServiceExContactRegistered *self);

FOUNDATION_EXPORT ARApiServiceExContactRegistered *new_ARApiServiceExContactRegistered_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExContactRegistered *create_ARApiServiceExContactRegistered_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiServiceExContactRegistered)

@compatibility_alias ImDiyalogCoreApiApiServiceExContactRegistered ARApiServiceExContactRegistered;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExContactRegistered")
