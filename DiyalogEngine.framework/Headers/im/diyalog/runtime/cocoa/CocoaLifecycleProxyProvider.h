//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-cocoa/src/main/java/im/diyalog/runtime/cocoa/CocoaLifecycleProxyProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaLifecycleProxyProvider")
#ifdef RESTRICT_ImDiyalogRuntimeCocoaCocoaLifecycleProxyProvider
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaLifecycleProxyProvider 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaLifecycleProxyProvider 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCocoaCocoaLifecycleProxyProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCocoaLifecycleProxyProvider_) && (INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaLifecycleProxyProvider || defined(INCLUDE_ARCocoaLifecycleProxyProvider))
#define ARCocoaLifecycleProxyProvider_

#define RESTRICT_ImDiyalogRuntimeLifecycleRuntime 1
#define INCLUDE_ARLifecycleRuntime 1
#include "../../../../im/diyalog/runtime/LifecycleRuntime.h"

@protocol ARWakeLock;

@interface ARCocoaLifecycleProxyProvider : NSObject < ARLifecycleRuntime >

#pragma mark Public

- (instancetype)init;

- (void)killApp;

- (id<ARWakeLock>)makeWakeLock;

+ (void)setLifecycleRuntime:(id<ARLifecycleRuntime>)lifecycleRuntime;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCocoaLifecycleProxyProvider)

FOUNDATION_EXPORT void ARCocoaLifecycleProxyProvider_setLifecycleRuntime_(id<ARLifecycleRuntime> lifecycleRuntime);

FOUNDATION_EXPORT void ARCocoaLifecycleProxyProvider_init(ARCocoaLifecycleProxyProvider *self);

FOUNDATION_EXPORT ARCocoaLifecycleProxyProvider *new_ARCocoaLifecycleProxyProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARCocoaLifecycleProxyProvider *create_ARCocoaLifecycleProxyProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARCocoaLifecycleProxyProvider)

@compatibility_alias ImDiyalogRuntimeCocoaCocoaLifecycleProxyProvider ARCocoaLifecycleProxyProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaLifecycleProxyProvider")
