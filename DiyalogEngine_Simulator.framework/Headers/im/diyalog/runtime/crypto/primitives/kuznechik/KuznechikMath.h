//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/kuznechik/KuznechikMath.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath))
#define ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath_

@class ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128;

/*!
 @brief Mathematical methods for Kuzhechik encryption
 <p>
 https://github.com/mjosaarinen/kuznechik/blob/master/kuznechik_8bit.c
 Multiplication optimization from
 http://www.cs.utsa.edu/~wagner/laws/FFM.html
 */
@interface ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath : NSObject

#pragma mark Public

+ (void)kuz_lWithImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128:(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *)w;

+ (void)kuz_l_invWithImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128:(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *)w;

+ (jbyte)kuz_mul_gf256WithByte:(jbyte)x
                      withByte:(jbyte)y;

+ (jbyte)kuz_mul_gf256_fastWithByte:(jbyte)a
                           withByte:(jbyte)b;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath)

FOUNDATION_EXPORT jbyte ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath_kuz_mul_gf256WithByte_withByte_(jbyte x, jbyte y);

FOUNDATION_EXPORT jbyte ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath_kuz_mul_gf256_fastWithByte_withByte_(jbyte a, jbyte b);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath_kuz_lWithImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128_(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *w);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath_kuz_l_invWithImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128_(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128 *w);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath_init(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath *new_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath *create_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuznechikMath")
