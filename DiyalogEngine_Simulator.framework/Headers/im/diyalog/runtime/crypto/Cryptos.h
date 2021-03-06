//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/Cryptos.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoCryptos")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoCryptos
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoCryptos 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoCryptos 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoCryptos

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCryptos_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoCryptos || defined(INCLUDE_ARCryptos))
#define ARCryptos_

@class IOSByteArray;
@class ImDiyalogRuntimeCryptoPrimitivesHmacHMAC;
@class ImDiyalogRuntimeCryptoPrimitivesPrfPRF;

@interface ARCryptos : NSObject

#pragma mark Public

+ (ImDiyalogRuntimeCryptoPrimitivesHmacHMAC *)HMAC_SHA256WithByteArray:(IOSByteArray *)secret;

+ (ImDiyalogRuntimeCryptoPrimitivesHmacHMAC *)HMAC_SHA512WithByteArray:(IOSByteArray *)secret;

+ (ImDiyalogRuntimeCryptoPrimitivesPrfPRF *)PRF_SHA256;

+ (ImDiyalogRuntimeCryptoPrimitivesPrfPRF *)PRF_SHA512;

+ (ImDiyalogRuntimeCryptoPrimitivesPrfPRF *)PRF_SHA_STREEBOG_256;

+ (ImDiyalogRuntimeCryptoPrimitivesPrfPRF *)PRF_STREEBOG256;

+ (ImDiyalogRuntimeCryptoPrimitivesPrfPRF *)PRF_STREEBOG512;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCryptos)

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesHmacHMAC *ARCryptos_HMAC_SHA256WithByteArray_(IOSByteArray *secret);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesHmacHMAC *ARCryptos_HMAC_SHA512WithByteArray_(IOSByteArray *secret);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesPrfPRF *ARCryptos_PRF_SHA256();

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesPrfPRF *ARCryptos_PRF_SHA512();

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesPrfPRF *ARCryptos_PRF_STREEBOG256();

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesPrfPRF *ARCryptos_PRF_STREEBOG512();

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesPrfPRF *ARCryptos_PRF_SHA_STREEBOG_256();

J2OBJC_TYPE_LITERAL_HEADER(ARCryptos)

@compatibility_alias ImDiyalogRuntimeCryptoCryptos ARCryptos;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoCryptos")
