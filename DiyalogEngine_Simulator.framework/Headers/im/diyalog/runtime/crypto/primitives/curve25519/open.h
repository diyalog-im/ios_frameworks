//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/curve25519/open.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Open")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Open
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Open 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Open 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Open

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesCurve25519open_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Open || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesCurve25519open))
#define ImDiyalogRuntimeCryptoPrimitivesCurve25519open_

@class IOSByteArray;
@protocol ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512;

@interface ImDiyalogRuntimeCryptoPrimitivesCurve25519open : NSObject

#pragma mark Public

- (instancetype)init;

+ (jint)crypto_sign_openWithImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512:(id<ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512>)sha512provider
                                                               withByteArray:(IOSByteArray *)m
                                                                    withLong:(jlong)mlen
                                                               withByteArray:(IOSByteArray *)sm
                                                                    withLong:(jlong)smlen
                                                               withByteArray:(IOSByteArray *)pk;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesCurve25519open)

FOUNDATION_EXPORT jint ImDiyalogRuntimeCryptoPrimitivesCurve25519open_crypto_sign_openWithImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512_withByteArray_withLong_withByteArray_withLong_withByteArray_(id<ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512> sha512provider, IOSByteArray *m, jlong mlen, IOSByteArray *sm, jlong smlen, IOSByteArray *pk);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519open_init(ImDiyalogRuntimeCryptoPrimitivesCurve25519open *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519open *new_ImDiyalogRuntimeCryptoPrimitivesCurve25519open_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519open *create_ImDiyalogRuntimeCryptoPrimitivesCurve25519open_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesCurve25519open)

@compatibility_alias ImDiyalogRuntimeCryptoPrimitivesCurve25519Open ImDiyalogRuntimeCryptoPrimitivesCurve25519open;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Open")
