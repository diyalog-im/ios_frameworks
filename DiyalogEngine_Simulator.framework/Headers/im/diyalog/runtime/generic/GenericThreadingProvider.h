//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/GenericThreadingProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericGenericThreadingProvider")
#ifdef RESTRICT_ImDiyalogRuntimeGenericGenericThreadingProvider
#define INCLUDE_ALL_ImDiyalogRuntimeGenericGenericThreadingProvider 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericGenericThreadingProvider 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericGenericThreadingProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARGenericThreadingProvider_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericGenericThreadingProvider || defined(INCLUDE_ARGenericThreadingProvider))
#define ARGenericThreadingProvider_

#define RESTRICT_ImDiyalogRuntimeThreadingRuntime 1
#define INCLUDE_ARThreadingRuntime 1
#include "../../../../im/diyalog/runtime/ThreadingRuntime.h"

@class ARAtomicIntegerCompat;
@class ARAtomicLongCompat;
@class ARThreadLocalCompat;
@class ARThreadPriority;
@class ARWeakReferenceCompat;
@protocol ARImmediateDispatcher;

@interface ARGenericThreadingProvider : NSObject < ARThreadingRuntime >

#pragma mark Public

- (instancetype)init;

- (ARAtomicIntegerCompat *)createAtomicIntWithInitValue:(jint)value;

- (ARAtomicLongCompat *)createAtomicLongWithInitValue:(jlong)value;

- (id<ARImmediateDispatcher>)createImmediateDispatcherWithName:(NSString *)name
                                                  withPriority:(ARThreadPriority *)priority;

- (ARThreadLocalCompat *)createThreadLocal;

- (ARWeakReferenceCompat *)createWeakReference:(id)val;

- (jlong)getActorTime;

- (jint)getCoresCount;

- (jlong)getCurrentTime;

- (jlong)getSyncedCurrentTime;

@end

J2OBJC_EMPTY_STATIC_INIT(ARGenericThreadingProvider)

FOUNDATION_EXPORT void ARGenericThreadingProvider_init(ARGenericThreadingProvider *self);

J2OBJC_TYPE_LITERAL_HEADER(ARGenericThreadingProvider)

@compatibility_alias ImDiyalogRuntimeGenericGenericThreadingProvider ARGenericThreadingProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericGenericThreadingProvider")
