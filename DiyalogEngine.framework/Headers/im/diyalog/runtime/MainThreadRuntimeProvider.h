//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-cocoa/src/main/java/im/diyalog/runtime/MainThreadRuntimeProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeMainThreadRuntimeProvider")
#ifdef RESTRICT_ImDiyalogRuntimeMainThreadRuntimeProvider
#define INCLUDE_ALL_ImDiyalogRuntimeMainThreadRuntimeProvider 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeMainThreadRuntimeProvider 1
#endif
#undef RESTRICT_ImDiyalogRuntimeMainThreadRuntimeProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARMainThreadRuntimeProvider_) && (INCLUDE_ALL_ImDiyalogRuntimeMainThreadRuntimeProvider || defined(INCLUDE_ARMainThreadRuntimeProvider))
#define ARMainThreadRuntimeProvider_

#define RESTRICT_ImDiyalogRuntimeCocoaCocoaMainThreadProvider 1
#define INCLUDE_ARCocoaMainThreadProvider 1
#include "../../../im/diyalog/runtime/cocoa/CocoaMainThreadProvider.h"

@interface ARMainThreadRuntimeProvider : ARCocoaMainThreadProvider

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ARMainThreadRuntimeProvider)

FOUNDATION_EXPORT void ARMainThreadRuntimeProvider_init(ARMainThreadRuntimeProvider *self);

FOUNDATION_EXPORT ARMainThreadRuntimeProvider *new_ARMainThreadRuntimeProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARMainThreadRuntimeProvider *create_ARMainThreadRuntimeProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARMainThreadRuntimeProvider)

@compatibility_alias ImDiyalogRuntimeMainThreadRuntimeProvider ARMainThreadRuntimeProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeMainThreadRuntimeProvider")