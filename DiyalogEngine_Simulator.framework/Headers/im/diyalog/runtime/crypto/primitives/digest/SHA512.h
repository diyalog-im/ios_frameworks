//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/digest/SHA512.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestSHA512")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestSHA512
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestSHA512 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestSHA512 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestSHA512

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesDigestSHA512_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestSHA512 || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesDigestSHA512))
#define ImDiyalogRuntimeCryptoPrimitivesDigestSHA512_

#define RESTRICT_ImDiyalogRuntimeCryptoDigest 1
#define INCLUDE_ARDigest 1
#include "../../../../../../im/diyalog/runtime/crypto/Digest.h"

@class IOSByteArray;

@interface ImDiyalogRuntimeCryptoPrimitivesDigestSHA512 : NSObject < ARDigest >

#pragma mark Public

- (instancetype)init;

- (void)doFinal:(IOSByteArray *)dest
     withOffset:(jint)destOffset;

- (jint)getDigestSize;

- (void)reset;

- (void)update:(IOSByteArray *)src
    withOffset:(jint)offset
    withLength:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesDigestSHA512)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestSHA512_init(ImDiyalogRuntimeCryptoPrimitivesDigestSHA512 *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestSHA512 *new_ImDiyalogRuntimeCryptoPrimitivesDigestSHA512_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestSHA512 *create_ImDiyalogRuntimeCryptoPrimitivesDigestSHA512_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesDigestSHA512)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestSHA512")
