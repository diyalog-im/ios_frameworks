//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/threading/GenericAtomicLong.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericAtomicLong")
#ifdef RESTRICT_ImDiyalogRuntimeGenericThreadingGenericAtomicLong
#define INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericAtomicLong 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericAtomicLong 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericThreadingGenericAtomicLong

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARGenericAtomicLong_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericAtomicLong || defined(INCLUDE_ARGenericAtomicLong))
#define ARGenericAtomicLong_

#define RESTRICT_ImDiyalogRuntimeThreadingAtomicLongCompat 1
#define INCLUDE_ARAtomicLongCompat 1
#include "../../../../../im/diyalog/runtime/threading/AtomicLongCompat.h"

@class JavaUtilConcurrentAtomicAtomicLong;

@interface ARGenericAtomicLong : ARAtomicLongCompat {
 @public
  JavaUtilConcurrentAtomicAtomicLong *atomicLong_;
}

#pragma mark Public

- (instancetype)initWithLong:(jlong)value;

- (jlong)get;

- (jlong)getAndIncrement;

- (jlong)incrementAndGet;

- (void)setWithLong:(jlong)v;

@end

J2OBJC_EMPTY_STATIC_INIT(ARGenericAtomicLong)

J2OBJC_FIELD_SETTER(ARGenericAtomicLong, atomicLong_, JavaUtilConcurrentAtomicAtomicLong *)

FOUNDATION_EXPORT void ARGenericAtomicLong_initWithLong_(ARGenericAtomicLong *self, jlong value);

FOUNDATION_EXPORT ARGenericAtomicLong *new_ARGenericAtomicLong_initWithLong_(jlong value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARGenericAtomicLong *create_ARGenericAtomicLong_initWithLong_(jlong value);

J2OBJC_TYPE_LITERAL_HEADER(ARGenericAtomicLong)

@compatibility_alias ImDiyalogRuntimeGenericThreadingGenericAtomicLong ARGenericAtomicLong;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericAtomicLong")