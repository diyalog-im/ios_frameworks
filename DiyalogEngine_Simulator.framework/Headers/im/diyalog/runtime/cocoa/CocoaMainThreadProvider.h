//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-cocoa/src/main/java/im/diyalog/runtime/cocoa/CocoaMainThreadProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaMainThreadProvider")
#ifdef RESTRICT_ImDiyalogRuntimeCocoaCocoaMainThreadProvider
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaMainThreadProvider 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaMainThreadProvider 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCocoaCocoaMainThreadProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCocoaMainThreadProvider_) && (INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaMainThreadProvider || defined(INCLUDE_ARCocoaMainThreadProvider))
#define ARCocoaMainThreadProvider_

#define RESTRICT_ImDiyalogRuntimeMainThreadRuntime 1
#define INCLUDE_ARMainThreadRuntime 1
#include "../../../../im/diyalog/runtime/MainThreadRuntime.h"

@class ImDiyalogRuntimeOsOSType;
@protocol JavaLangRunnable;

@interface ARCocoaMainThreadProvider : NSObject < ARMainThreadRuntime >

#pragma mark Public

- (instancetype)init;

- (ImDiyalogRuntimeOsOSType *)getOSType;

- (jboolean)isMainThread;

- (jboolean)isSingleThread;

- (void)postToMainThreadWithRunnable:(id<JavaLangRunnable>)runnable;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCocoaMainThreadProvider)

FOUNDATION_EXPORT void ARCocoaMainThreadProvider_init(ARCocoaMainThreadProvider *self);

FOUNDATION_EXPORT ARCocoaMainThreadProvider *new_ARCocoaMainThreadProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARCocoaMainThreadProvider *create_ARCocoaMainThreadProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARCocoaMainThreadProvider)

@compatibility_alias ImDiyalogRuntimeCocoaCocoaMainThreadProvider ARCocoaMainThreadProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaMainThreadProvider")