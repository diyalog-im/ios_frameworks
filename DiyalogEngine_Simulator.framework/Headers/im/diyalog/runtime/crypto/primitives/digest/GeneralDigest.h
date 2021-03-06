//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/digest/GeneralDigest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest))
#define ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest_

@class IOSByteArray;

/*!
 @brief base implementation of MD4 family style digest as outlined in
 "Handbook of Applied Cryptography", pages 344 - 347.
 */
@interface ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest : NSObject

#pragma mark Public

- (void)finish;

- (jint)getByteLength;

- (void)reset;

- (void)updateWithByte:(jbyte)inArg;

- (void)updateWithByteArray:(IOSByteArray *)inArg
                    withInt:(jint)inOff
                    withInt:(jint)len;

#pragma mark Protected

/*!
 @brief Standard constructor
 */
- (instancetype)init;

- (instancetype)initWithByteArray:(IOSByteArray *)encodedState;

/*!
 @brief Copy constructor.
 We are using copy constructors in place
 of the Object.clone() interface as this interface is not
 supported by J2ME.
 */
- (instancetype)initWithImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest:(ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest *)t;

- (void)copyInWithImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest:(ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest *)t OBJC_METHOD_FAMILY_NONE;

- (void)populateStateWithByteArray:(IOSByteArray *)state;

- (void)processBlock;

- (void)processLengthWithLong:(jlong)bitLength;

- (void)processWordWithByteArray:(IOSByteArray *)inArg
                         withInt:(jint)inOff;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest_init(ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest *self);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest_initWithImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest_(ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest *self, ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest *t);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest_initWithByteArray_(ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest *self, IOSByteArray *encodedState);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesDigestGeneralDigest")
