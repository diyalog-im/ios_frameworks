//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/ActorProtoKey.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoActorProtoKey")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoActorProtoKey
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoActorProtoKey 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoActorProtoKey 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoActorProtoKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARActorProtoKey_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoActorProtoKey || defined(INCLUDE_ARActorProtoKey))
#define ARActorProtoKey_

@class IOSByteArray;

/*!
 @brief Actor's MTProto V2 keys
 */
@interface ARActorProtoKey : NSObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)masterKey;

- (IOSByteArray *)getClientKey;

- (IOSByteArray *)getClientMacKey;

- (IOSByteArray *)getClientMacRussianKey;

- (IOSByteArray *)getClientRussianKey;

- (IOSByteArray *)getServerKey;

- (IOSByteArray *)getServerMacKey;

- (IOSByteArray *)getServerMacRussianKey;

- (IOSByteArray *)getServerRussianKey;

@end

J2OBJC_EMPTY_STATIC_INIT(ARActorProtoKey)

FOUNDATION_EXPORT void ARActorProtoKey_initWithByteArray_(ARActorProtoKey *self, IOSByteArray *masterKey);

FOUNDATION_EXPORT ARActorProtoKey *new_ARActorProtoKey_initWithByteArray_(IOSByteArray *masterKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARActorProtoKey *create_ARActorProtoKey_initWithByteArray_(IOSByteArray *masterKey);

J2OBJC_TYPE_LITERAL_HEADER(ARActorProtoKey)

@compatibility_alias ImDiyalogRuntimeCryptoActorProtoKey ARActorProtoKey;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoActorProtoKey")
