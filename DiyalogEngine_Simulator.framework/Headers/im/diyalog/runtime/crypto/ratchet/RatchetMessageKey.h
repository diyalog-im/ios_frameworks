//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/ratchet/RatchetMessageKey.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoRatchetRatchetMessageKey")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoRatchetRatchetMessageKey
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoRatchetRatchetMessageKey 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoRatchetRatchetMessageKey 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoRatchetRatchetMessageKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoRatchetRatchetMessageKey_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoRatchetRatchetMessageKey || defined(INCLUDE_ImDiyalogRuntimeCryptoRatchetRatchetMessageKey))
#define ImDiyalogRuntimeCryptoRatchetRatchetMessageKey_

@class IOSByteArray;
@class ImDiyalogRuntimeCryptoBoxActorBoxKey;

@interface ImDiyalogRuntimeCryptoRatchetRatchetMessageKey : NSObject

#pragma mark Public

- (instancetype)init;

+ (ImDiyalogRuntimeCryptoBoxActorBoxKey *)buildKeyWithByteArray:(IOSByteArray *)rootChainKey
                                                        withInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoRatchetRatchetMessageKey)

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoBoxActorBoxKey *ImDiyalogRuntimeCryptoRatchetRatchetMessageKey_buildKeyWithByteArray_withInt_(IOSByteArray *rootChainKey, jint index);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoRatchetRatchetMessageKey_init(ImDiyalogRuntimeCryptoRatchetRatchetMessageKey *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoRatchetRatchetMessageKey *new_ImDiyalogRuntimeCryptoRatchetRatchetMessageKey_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoRatchetRatchetMessageKey *create_ImDiyalogRuntimeCryptoRatchetRatchetMessageKey_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoRatchetRatchetMessageKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoRatchetRatchetMessageKey")
