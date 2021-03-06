//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/Curve25519KeyPair.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoCurve25519KeyPair")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoCurve25519KeyPair
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoCurve25519KeyPair 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoCurve25519KeyPair 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoCurve25519KeyPair

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCurve25519KeyPair_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoCurve25519KeyPair || defined(INCLUDE_ARCurve25519KeyPair))
#define ARCurve25519KeyPair_

@class IOSByteArray;

@interface ARCurve25519KeyPair : NSObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)publicKey
                    withByteArray:(IOSByteArray *)privateKey;

- (IOSByteArray *)getPrivateKey;

- (IOSByteArray *)getPublicKey;

@end

J2OBJC_EMPTY_STATIC_INIT(ARCurve25519KeyPair)

FOUNDATION_EXPORT void ARCurve25519KeyPair_initWithByteArray_withByteArray_(ARCurve25519KeyPair *self, IOSByteArray *publicKey, IOSByteArray *privateKey);

FOUNDATION_EXPORT ARCurve25519KeyPair *new_ARCurve25519KeyPair_initWithByteArray_withByteArray_(IOSByteArray *publicKey, IOSByteArray *privateKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARCurve25519KeyPair *create_ARCurve25519KeyPair_initWithByteArray_withByteArray_(IOSByteArray *publicKey, IOSByteArray *privateKey);

J2OBJC_TYPE_LITERAL_HEADER(ARCurve25519KeyPair)

@compatibility_alias ImDiyalogRuntimeCryptoCurve25519KeyPair ARCurve25519KeyPair;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoCurve25519KeyPair")
