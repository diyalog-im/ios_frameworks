//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/padding/ZeroPadding.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding))
#define ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding_

#define RESTRICT_ImDiyalogRuntimeCryptoPrimitivesPadding 1
#define INCLUDE_ImDiyalogRuntimeCryptoPrimitivesPadding 1
#include "../../../../../../im/diyalog/runtime/crypto/primitives/Padding.h"

@class IOSByteArray;

/*!
 @brief Padding with zero bytes
 */
@interface ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding : NSObject < ImDiyalogRuntimeCryptoPrimitivesPadding >

#pragma mark Public

- (instancetype)init;

- (void)paddingWithByteArray:(IOSByteArray *)src
                     withInt:(jint)offset
                     withInt:(jint)length;

- (jboolean)validateWithByteArray:(IOSByteArray *)src
                          withInt:(jint)offset
                          withInt:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding_init(ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding *new_ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding *create_ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesPaddingZeroPadding")