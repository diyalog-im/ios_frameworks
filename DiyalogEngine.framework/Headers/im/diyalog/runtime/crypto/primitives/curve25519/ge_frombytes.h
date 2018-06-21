//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/curve25519/ge_frombytes.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_frombytes")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_frombytes
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_frombytes 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_frombytes 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_frombytes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_frombytes || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes))
#define ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_

@class IOSByteArray;
@class IOSIntArray;
@class ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3;

@interface ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes : NSObject

+ (IOSIntArray *)d;

+ (void)setD:(IOSIntArray *)value;

+ (IOSIntArray *)sqrtm1;

+ (void)setSqrtm1:(IOSIntArray *)value;

#pragma mark Public

- (instancetype)init;

#pragma mark Package-Private

+ (jint)ge_frombytes_negate_vartimeWithImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3:(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3 *)h
                                                                         withByteArray:(IOSByteArray *)s;

@end

J2OBJC_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes)

inline IOSIntArray *ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_get_d();
inline IOSIntArray *ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_set_d(IOSIntArray *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_d;
J2OBJC_STATIC_FIELD_OBJ(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes, d, IOSIntArray *)

inline IOSIntArray *ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_get_sqrtm1();
inline IOSIntArray *ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_set_sqrtm1(IOSIntArray *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_sqrtm1;
J2OBJC_STATIC_FIELD_OBJ(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes, sqrtm1, IOSIntArray *)

FOUNDATION_EXPORT jint ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_ge_frombytes_negate_vartimeWithImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_withByteArray_(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3 *h, IOSByteArray *s);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_init(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes *new_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes *create_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes)

@compatibility_alias ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_frombytes ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_frombytes;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_frombytes")