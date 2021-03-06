//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-cocoa/src/main/java/im/diyalog/runtime/cocoa/CocoaAssetsProxyProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaAssetsProxyProvider")
#ifdef RESTRICT_ImDiyalogRuntimeCocoaCocoaAssetsProxyProvider
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaAssetsProxyProvider 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaAssetsProxyProvider 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCocoaCocoaAssetsProxyProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCocoaAssetsProxyProvider_) && (INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaAssetsProxyProvider || defined(INCLUDE_ARCocoaAssetsProxyProvider))
#define ARCocoaAssetsProxyProvider_

#define RESTRICT_ImDiyalogRuntimeAssetsRuntime 1
#define INCLUDE_ARAssetsRuntime 1
#include "../../../../im/diyalog/runtime/AssetsRuntime.h"

@class IOSByteArray;

@interface ARCocoaAssetsProxyProvider : NSObject < ARAssetsRuntime >

#pragma mark Public

- (instancetype)init;

- (jboolean)hasAssetWithNSString:(NSString *)name;

- (NSString *)loadAssetWithNSString:(NSString *)name;

- (IOSByteArray *)loadBinAssetWithNSString:(NSString *)name;

+ (void)setAssetsRuntimeWithARAssetsRuntime:(id<ARAssetsRuntime>)assetsRuntime;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCocoaAssetsProxyProvider)

FOUNDATION_EXPORT void ARCocoaAssetsProxyProvider_setAssetsRuntimeWithARAssetsRuntime_(id<ARAssetsRuntime> assetsRuntime);

FOUNDATION_EXPORT void ARCocoaAssetsProxyProvider_init(ARCocoaAssetsProxyProvider *self);

FOUNDATION_EXPORT ARCocoaAssetsProxyProvider *new_ARCocoaAssetsProxyProvider_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARCocoaAssetsProxyProvider *create_ARCocoaAssetsProxyProvider_init();

J2OBJC_TYPE_LITERAL_HEADER(ARCocoaAssetsProxyProvider)

@compatibility_alias ImDiyalogRuntimeCocoaCocoaAssetsProxyProvider ARCocoaAssetsProxyProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCocoaCocoaAssetsProxyProvider")
