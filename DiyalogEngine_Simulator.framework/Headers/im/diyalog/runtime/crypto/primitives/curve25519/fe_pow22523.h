//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/curve25519/fe_pow22523.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_pow22523")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_pow22523
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_pow22523 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_pow22523 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_pow22523

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_pow22523 || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523))
#define ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523_

@class IOSIntArray;

@interface ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523 : NSObject

#pragma mark Public

- (instancetype)init;

+ (void)fe_pow22523WithIntArray:(IOSIntArray *)outArg
                   withIntArray:(IOSIntArray *)z;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523_fe_pow22523WithIntArray_withIntArray_(IOSIntArray *outArg, IOSIntArray *z);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523_init(ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523 *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523 *new_ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523 *create_ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523)

@compatibility_alias ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_pow22523 ImDiyalogRuntimeCryptoPrimitivesCurve25519fe_pow22523;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesCurve25519Fe_pow22523")
