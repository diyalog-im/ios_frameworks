//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/digest/MD5.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestMD5")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestMD5
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestMD5 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestMD5 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestMD5

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesDigestMD5_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestMD5 || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesDigestMD5))
#define ImDiyalogRuntimeCryptoPrimitivesDigestMD5_

#define RESTRICT_ImDiyalogRuntimeCryptoDigest 1
#define INCLUDE_ARDigest 1
#include "../../../../../../im/diyalog/runtime/crypto/Digest.h"

@class IOSByteArray;

@interface ImDiyalogRuntimeCryptoPrimitivesDigestMD5 : NSObject < ARDigest >

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

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesDigestMD5)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestMD5_init(ImDiyalogRuntimeCryptoPrimitivesDigestMD5 *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestMD5 *new_ImDiyalogRuntimeCryptoPrimitivesDigestMD5_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestMD5 *create_ImDiyalogRuntimeCryptoPrimitivesDigestMD5_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesDigestMD5)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestMD5")