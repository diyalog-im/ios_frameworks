//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-cocoa/src/main/java/im/diyalog/runtime/LocaleRuntimeProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeLocaleRuntimeProvider")
#ifdef RESTRICT_ImDiyalogRuntimeLocaleRuntimeProvider
#define INCLUDE_ALL_ImDiyalogRuntimeLocaleRuntimeProvider 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeLocaleRuntimeProvider 1
#endif
#undef RESTRICT_ImDiyalogRuntimeLocaleRuntimeProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARLocaleRuntimeProvider_) && (INCLUDE_ALL_ImDiyalogRuntimeLocaleRuntimeProvider || defined(INCLUDE_ARLocaleRuntimeProvider))
#define ARLocaleRuntimeProvider_

#define RESTRICT_ImDiyalogRuntimeCocoaCocoaLocaleProvider 1
#define INCLUDE_ARCocoaLocaleProvider 1
#include "../../../im/diyalog/runtime/cocoa/CocoaLocaleProvider.h"

@interface ARLocaleRuntimeProvider : ARCocoaLocaleProvider

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ARLocaleRuntimeProvider)

FOUNDATION_EXPORT void ARLocaleRuntimeProvider_init(ARLocaleRuntimeProvider *self);

FOUNDATION_EXPORT ARLocaleRuntimeProvider *new_ARLocaleRuntimeProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARLocaleRuntimeProvider *create_ARLocaleRuntimeProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARLocaleRuntimeProvider)

@compatibility_alias ImDiyalogRuntimeLocaleRuntimeProvider ARLocaleRuntimeProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeLocaleRuntimeProvider")