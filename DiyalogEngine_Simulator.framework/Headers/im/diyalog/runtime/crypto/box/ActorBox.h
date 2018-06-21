//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/crypto/box/ActorBox.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoBoxActorBox")
#ifdef RESTRICT_ImDiyalogRuntimeCryptoBoxActorBox
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoBoxActorBox 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCryptoBoxActorBox 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCryptoBoxActorBox

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeCryptoBoxActorBox_) && (INCLUDE_ALL_ImDiyalogRuntimeCryptoBoxActorBox || defined(INCLUDE_ImDiyalogRuntimeCryptoBoxActorBox))
#define ImDiyalogRuntimeCryptoBoxActorBox_

@class IOSByteArray;
@class ImDiyalogRuntimeCryptoBoxActorBoxKey;

/*!
 @brief Encrypted Actor Box.
 Encrypted and HMACed with AES-128-CBC-HMAC-SHA256 and then again
 with Kuznechik-128-CBC-HMAC-Streebog256. Cipher Text is padded with PKCS#7.
 */
@interface ImDiyalogRuntimeCryptoBoxActorBox : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Closing encrypted box
 @param header    plain-text header of a box
 @param plainText plain-text content
 @param random32  32 random bytes
 @param key       Box key
 @return encrypted context
 @throws IntegrityException
 */
+ (IOSByteArray *)closeBoxWithByteArray:(IOSByteArray *)header
                          withByteArray:(IOSByteArray *)plainText
                          withByteArray:(IOSByteArray *)random32
withImDiyalogRuntimeCryptoBoxActorBoxKey:(ImDiyalogRuntimeCryptoBoxActorBoxKey *)key;

/*!
 @brief Opening Encrypted box
 @param header     plain-text header of a box
 @param cipherText encrypted content
 @param key        Box key
 @return plain-text content
 @throws IntegrityException
 */
+ (IOSByteArray *)openBoxWithByteArray:(IOSByteArray *)header
                         withByteArray:(IOSByteArray *)cipherText
withImDiyalogRuntimeCryptoBoxActorBoxKey:(ImDiyalogRuntimeCryptoBoxActorBoxKey *)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeCryptoBoxActorBox)

FOUNDATION_EXPORT IOSByteArray *ImDiyalogRuntimeCryptoBoxActorBox_openBoxWithByteArray_withByteArray_withImDiyalogRuntimeCryptoBoxActorBoxKey_(IOSByteArray *header, IOSByteArray *cipherText, ImDiyalogRuntimeCryptoBoxActorBoxKey *key);

FOUNDATION_EXPORT IOSByteArray *ImDiyalogRuntimeCryptoBoxActorBox_closeBoxWithByteArray_withByteArray_withByteArray_withImDiyalogRuntimeCryptoBoxActorBoxKey_(IOSByteArray *header, IOSByteArray *plainText, IOSByteArray *random32, ImDiyalogRuntimeCryptoBoxActorBoxKey *key);

FOUNDATION_EXPORT void ImDiyalogRuntimeCryptoBoxActorBox_init(ImDiyalogRuntimeCryptoBoxActorBox *self);

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoBoxActorBox *new_ImDiyalogRuntimeCryptoBoxActorBox_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeCryptoBoxActorBox *create_ImDiyalogRuntimeCryptoBoxActorBox_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeCryptoBoxActorBox)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCryptoBoxActorBox")
