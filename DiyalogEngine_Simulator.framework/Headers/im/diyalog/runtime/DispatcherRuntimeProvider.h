//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-cocoa/src/main/java/im/diyalog/runtime/DispatcherRuntimeProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeDispatcherRuntimeProvider")
#ifdef RESTRICT_ImDiyalogRuntimeDispatcherRuntimeProvider
#define INCLUDE_ALL_ImDiyalogRuntimeDispatcherRuntimeProvider 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeDispatcherRuntimeProvider 1
#endif
#undef RESTRICT_ImDiyalogRuntimeDispatcherRuntimeProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDispatcherRuntimeProvider_) && (INCLUDE_ALL_ImDiyalogRuntimeDispatcherRuntimeProvider || defined(INCLUDE_ARDispatcherRuntimeProvider))
#define ARDispatcherRuntimeProvider_

#define RESTRICT_ImDiyalogRuntimeCocoaCocoaDispatcherProvider 1
#define INCLUDE_ARCocoaDispatcherProvider 1
#include "../../../im/diyalog/runtime/cocoa/CocoaDispatcherProvider.h"

@interface ARDispatcherRuntimeProvider : ARCocoaDispatcherProvider

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDispatcherRuntimeProvider)

FOUNDATION_EXPORT void ARDispatcherRuntimeProvider_init(ARDispatcherRuntimeProvider *self);

FOUNDATION_EXPORT ARDispatcherRuntimeProvider *new_ARDispatcherRuntimeProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARDispatcherRuntimeProvider *create_ARDispatcherRuntimeProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARDispatcherRuntimeProvider)

@compatibility_alias ImDiyalogRuntimeDispatcherRuntimeProvider ARDispatcherRuntimeProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeDispatcherRuntimeProvider")
