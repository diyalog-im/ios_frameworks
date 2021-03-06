//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/curve25519/ge_madd.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_madd")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_madd
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_madd 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_madd 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_madd

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_madd || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd))
#define ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd_

@class ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p1p1;
@class ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3;
@class ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_precomp;

@interface ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)ge_maddWithImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p1p1:(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p1p1 *)r
                 withImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3:(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3 *)p
            withImDiyalogRuntimeCryptoPrimitivesCurve25519ge_precomp:(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_precomp *)q;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd_ge_maddWithImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p1p1_withImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3_withImDiyalogRuntimeCryptoPrimitivesCurve25519ge_precomp_(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p1p1 *r, ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_p3 *p, ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_precomp *q);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd_init(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd *new_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd *create_ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd)

@compatibility_alias ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_madd ImDiyalogRuntimeCryptoPrimitivesCurve25519ge_madd;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Ge_madd")
