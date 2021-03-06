//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiMapValueItem.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiMapValueItem")
#ifdef RESTRICT_ImDiyalogCoreApiApiMapValueItem
#define INCLUDE_ALL_ImDiyalogCoreApiApiMapValueItem 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiMapValueItem 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiMapValueItem

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiMapValueItem_) && (INCLUDE_ALL_ImDiyalogCoreApiApiMapValueItem || defined(INCLUDE_ARApiMapValueItem))
#define ARApiMapValueItem_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARApiRawValue;
@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiMapValueItem : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)key
               withARApiRawValue:(ARApiRawValue * __nonnull)value;

- (NSString * __nonnull)getKey;

- (ARApiRawValue * __nonnull)getValue;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiMapValueItem)

FOUNDATION_EXPORT void ARApiMapValueItem_initWithNSString_withARApiRawValue_(ARApiMapValueItem *self, NSString *key, ARApiRawValue *value);

FOUNDATION_EXPORT ARApiMapValueItem *new_ARApiMapValueItem_initWithNSString_withARApiRawValue_(NSString *key, ARApiRawValue *value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiMapValueItem *create_ARApiMapValueItem_initWithNSString_withARApiRawValue_(NSString *key, ARApiRawValue *value);

FOUNDATION_EXPORT void ARApiMapValueItem_init(ARApiMapValueItem *self);

FOUNDATION_EXPORT ARApiMapValueItem *new_ARApiMapValueItem_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiMapValueItem *create_ARApiMapValueItem_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiMapValueItem)

@compatibility_alias ImDiyalogCoreApiApiMapValueItem ARApiMapValueItem;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiMapValueItem")
