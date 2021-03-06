//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiUpdateContainer.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiUpdateContainer")
#ifdef RESTRICT_ImDiyalogCoreApiApiUpdateContainer
#define INCLUDE_ALL_ImDiyalogCoreApiApiUpdateContainer 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiUpdateContainer 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiUpdateContainer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiUpdateContainer_) && (INCLUDE_ALL_ImDiyalogCoreApiApiUpdateContainer || defined(INCLUDE_ARApiUpdateContainer))
#define ARApiUpdateContainer_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiUpdateContainer : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)updateHeader
              withByteArray:(IOSByteArray * __nonnull)update;

- (IOSByteArray * __nonnull)getUpdate;

- (jint)getUpdateHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiUpdateContainer)

FOUNDATION_EXPORT void ARApiUpdateContainer_initWithInt_withByteArray_(ARApiUpdateContainer *self, jint updateHeader, IOSByteArray *update);

FOUNDATION_EXPORT ARApiUpdateContainer *new_ARApiUpdateContainer_initWithInt_withByteArray_(jint updateHeader, IOSByteArray *update) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiUpdateContainer *create_ARApiUpdateContainer_initWithInt_withByteArray_(jint updateHeader, IOSByteArray *update);

FOUNDATION_EXPORT void ARApiUpdateContainer_init(ARApiUpdateContainer *self);

FOUNDATION_EXPORT ARApiUpdateContainer *new_ARApiUpdateContainer_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiUpdateContainer *create_ARApiUpdateContainer_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiUpdateContainer)

@compatibility_alias ImDiyalogCoreApiApiUpdateContainer ARApiUpdateContainer;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiUpdateContainer")
