//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/threading/GenericWeakReference.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericWeakReference")
#ifdef RESTRICT_ImDiyalogRuntimeGenericThreadingGenericWeakReference
#define INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericWeakReference 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericWeakReference 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericThreadingGenericWeakReference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARGenericWeakReference_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericWeakReference || defined(INCLUDE_ARGenericWeakReference))
#define ARGenericWeakReference_

#define RESTRICT_ImDiyalogRuntimeThreadingWeakReferenceCompat 1
#define INCLUDE_ARWeakReferenceCompat 1
#include "../../../../../im/diyalog/runtime/threading/WeakReferenceCompat.h"

@interface ARGenericWeakReference : ARWeakReferenceCompat

#pragma mark Public

- (instancetype)initWithId:(id)val;

- (id)get;

@end

J2OBJC_EMPTY_STATIC_INIT(ARGenericWeakReference)

FOUNDATION_EXPORT void ARGenericWeakReference_initWithId_(ARGenericWeakReference *self, id val);

FOUNDATION_EXPORT ARGenericWeakReference *new_ARGenericWeakReference_initWithId_(id val) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARGenericWeakReference *create_ARGenericWeakReference_initWithId_(id val);

J2OBJC_TYPE_LITERAL_HEADER(ARGenericWeakReference)

@compatibility_alias ImDiyalogRuntimeGenericThreadingGenericWeakReference ARGenericWeakReference;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericWeakReference")
