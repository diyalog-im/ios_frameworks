//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/digest/SHA256Digest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest))
#define ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest_

#define RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest 1
#define INCLUDE_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest 1
#include "../../../../../../im/diyalog/runtime/crypto/primitives/digest/GeneralDigest.h"

@class IOSByteArray;
@class IOSIntArray;

/*!
 @brief FIPS 180-2 implementation of SHA-256.
 <p>
 @code

         block  word  digest
  SHA-1   512    32    160
  SHA-256 512    32    256
  SHA-384 1024   64    384
  SHA-512 1024   64    512
  
@endcode
 */
@interface ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest : ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest

+ (IOSIntArray *)K;

#pragma mark Public

/*!
 @brief Standard constructor
 */
- (instancetype)init;

- (jint)doFinalWithByteArray:(IOSByteArray *)outArg
                     withInt:(jint)outOff;

- (NSString *)getAlgorithmName;

- (jint)getDigestSize;

/*!
 @brief reset the chaining variables
 */
- (void)reset;

#pragma mark Protected

- (void)processBlock;

- (void)processLengthWithLong:(jlong)bitLength;

- (void)processWordWithByteArray:(IOSByteArray *)inArg
                         withInt:(jint)inOff;

@end

J2OBJC_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest)

inline IOSIntArray *ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest_get_K();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest_K;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest, K, IOSIntArray *)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest_init(ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest *new_ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest *create_ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestSHA256Digest")
