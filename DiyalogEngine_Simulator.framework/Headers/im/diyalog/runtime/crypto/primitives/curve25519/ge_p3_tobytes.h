//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/curve25519/ge_p3_tobytes.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_p3_tobytes")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_p3_tobytes
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_p3_tobytes 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_p3_tobytes 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_p3_tobytes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_p3_tobytes || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes))
#define ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes_

@class IOSByteArray;
@class ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3;

@interface ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)ge_p3_tobytesWithByteArray:(IOSByteArray *)s
withImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3:(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3 *)h;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes_ge_p3_tobytesWithByteArray_withImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_(IOSByteArray *s, ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3 *h);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes_init(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes *new_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes *create_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes)

@compatibility_alias ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_p3_tobytes ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_tobytes;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_p3_tobytes")
