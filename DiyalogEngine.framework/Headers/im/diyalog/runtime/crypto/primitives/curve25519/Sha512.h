//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/curve25519/Sha512.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512 || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512))
#define ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512_

@class IOSByteArray;

@protocol ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512 < NSObject, JavaObject >

- (void)calculateDigestWithByteArray:(IOSByteArray *)outArg
                       withByteArray:(IOSByteArray *)inArg
                            withLong:(jlong)length;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512)

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Sha512")