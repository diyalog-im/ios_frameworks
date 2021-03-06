//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/streebog/StreebogFastDigest.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest))
#define ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest_

@class IOSByteArray;

@interface ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)hashLength;

- (void)doFinalWithByteArray:(IOSByteArray *)outArg
                     withInt:(jint)offset;

- (void)reset;

- (void)updateWithByteArray:(IOSByteArray *)inArg
                    withInt:(jint)offset
                    withInt:(jint)length;

@end

J2OBJC_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest_initWithInt_(ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest *self, jint hashLength);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest *new_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest_initWithInt_(jint hashLength) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest *create_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest_initWithInt_(jint hashLength);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesStreebogStreebogFastDigest")
