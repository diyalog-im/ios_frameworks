//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/primitives/kuznechik/KuzIntKey.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey || defined(INCLUDE_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey))
#define ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey_

@class IOSObjectArray;

/*!
 @brief Internal presentation of a Kuzhechik key
 */
@interface ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey : NSObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128Array:(IOSObjectArray *)k;

- (IOSObjectArray *)getK;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey)

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey_initWithImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128Array_(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey *self, IOSObjectArray *k);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey *new_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey_initWithImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128Array_(IOSObjectArray *k) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey *create_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey_initWithImDiyalogRuntimeCryptoPrimitivesKuznechikKuz128Array_(IOSObjectArray *k);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey_init(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey *new_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey *create_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoPrimitivesKuznechikKuzIntKey")