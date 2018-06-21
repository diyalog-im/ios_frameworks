//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/threading/GenericAtomicInteger.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericAtomicInteger")
#ifdef RESTRICT_ImDiyalogRuntimeGenericThreadingGenericAtomicInteger
#define INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericAtomicInteger 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericAtomicInteger 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericThreadingGenericAtomicInteger

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARGenericAtomicInteger_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericAtomicInteger || defined(INCLUDE_ARGenericAtomicInteger))
#define ARGenericAtomicInteger_

#define RESTRICT_ImDiyalogRuntimeThreadingAtomicIntegerCompat 1
#define INCLUDE_ARAtomicIntegerCompat 1
#include "../../../../../im/diyalog/runtime/threading/AtomicIntegerCompat.h"

@interface ARGenericAtomicInteger : ARAtomicIntegerCompat

#pragma mark Public

- (instancetype)initWithInt:(jint)value;

- (void)compareAndSetWithInt:(jint)exp
                     withInt:(jint)v;

- (jint)get;

- (jint)getAndIncrement;

- (jint)incrementAndGet;

- (void)setWithInt:(jint)v;

@end

J2OBJC_EMPTY_STATIC_INIT(ARGenericAtomicInteger)

FOUNDATION_EXPORT void ARGenericAtomicInteger_initWithInt_(ARGenericAtomicInteger *self, jint value);

FOUNDATION_EXPORT ARGenericAtomicInteger *new_ARGenericAtomicInteger_initWithInt_(jint value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARGenericAtomicInteger *create_ARGenericAtomicInteger_initWithInt_(jint value);

J2OBJC_TYPE_LITERAL_HEADER(ARGenericAtomicInteger)

@compatibility_alias ImDiyalogRuntimeGenericThreadingGenericAtomicInteger ARGenericAtomicInteger;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericThreadingGenericAtomicInteger")
