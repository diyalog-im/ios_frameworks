//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-cocoa/src/main/java/im/diyalog/runtime/cocoa/CocoaDispatcherProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaDispatcherProvider")
#ifdef RESTRICT_ImDiyalogRuntimeCocoaCocoaDispatcherProvider
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaDispatcherProvider 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaDispatcherProvider 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCocoaCocoaDispatcherProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCocoaDispatcherProvider_) && (INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaDispatcherProvider || defined(INCLUDE_ARCocoaDispatcherProvider))
#define ARCocoaDispatcherProvider_

#define RESTRICT_ImDiyalogRuntimeDispatcherRuntime 1
#define INCLUDE_ARDispatcherRuntime 1
#include "../../../../im/diyalog/runtime/DispatcherRuntime.h"

@protocol JavaLangRunnable;

@interface ARCocoaDispatcherProvider : NSObject < ARDispatcherRuntime >

#pragma mark Public

- (instancetype)init;

- (void)dispatchWithRunnable:(id<JavaLangRunnable>)runnable;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCocoaDispatcherProvider)

FOUNDATION_EXPORT void ARCocoaDispatcherProvider_init(ARCocoaDispatcherProvider *self);

FOUNDATION_EXPORT ARCocoaDispatcherProvider *new_ARCocoaDispatcherProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARCocoaDispatcherProvider *create_ARCocoaDispatcherProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARCocoaDispatcherProvider)

@compatibility_alias ImDiyalogRuntimeCocoaCocoaDispatcherProvider ARCocoaDispatcherProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaDispatcherProvider")
