//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/Crypto.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCrypto")
#ifdef RESTRICT_ImDiyalogRuntimeCrypto
#define INCLUDE_ALL_ImDiyalogRuntimeCrypto 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCrypto 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCrypto

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARCrypto_) && (INCLUDE_ALL_ImDiyalogRuntimeCrypto || defined(INCLUDE_ARCrypto))
#define ARCrypto_

@class IOSByteArray;
@class IOSCharArray;
@protocol ARBlockCipher;
@protocol ARDigest;

@interface ARCrypto : NSObject

+ (IOSCharArray *)hexArray;

#pragma mark Public

- (instancetype)init;

+ (id<ARBlockCipher>)createAES128WithByteArray:(IOSByteArray *)key;

+ (id<ARDigest>)createSHA256;

+ (IOSByteArray *)fromHexWithNSString:(NSString *)hex;

/*!
 @brief Calculating lowcase hex string
 @param bytes data for hex
 @return hex string
 */
+ (NSString *)hexWithByteArray:(IOSByteArray *)bytes;

+ (NSString *)keyHashWithByteArray:(IOSByteArray *)publicKey;

+ (IOSByteArray *)MD5WithByteArray:(IOSByteArray *)data;

+ (void)nextBytesWithByteArray:(IOSByteArray *)data;

/*!
 @brief Generate securely some amount of bytes
 @param len bytes count
 @return random bytes
 */
+ (IOSByteArray *)randomBytesWithInt:(jint)len;

/*!
 @brief Generate securely random int
 @param maxValue maximum value of int
 @return random value
 */
+ (jint)randomIntWithInt:(jint)maxValue;

/*!
 @brief Calculating SHA256
 @param data source data
 @return SHA256 of data
 */
+ (IOSByteArray *)SHA256WithByteArray:(IOSByteArray *)data;

+ (void)waitForCryptoLoaded;

@end

J2OBJC_STATIC_INIT(ARCrypto)

inline IOSCharArray *ARCrypto_get_hexArray();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSCharArray *ARCrypto_hexArray;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ARCrypto, hexArray, IOSCharArray *)

FOUNDATION_EXPORT void ARCrypto_waitForCryptoLoaded();

FOUNDATION_EXPORT id<ARDigest> ARCrypto_createSHA256();

FOUNDATION_EXPORT id<ARBlockCipher> ARCrypto_createAES128WithByteArray_(IOSByteArray *key);

FOUNDATION_EXPORT IOSByteArray *ARCrypto_MD5WithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT NSString *ARCrypto_keyHashWithByteArray_(IOSByteArray *publicKey);

FOUNDATION_EXPORT IOSByteArray *ARCrypto_SHA256WithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT jint ARCrypto_randomIntWithInt_(jint maxValue);

FOUNDATION_EXPORT IOSByteArray *ARCrypto_randomBytesWithInt_(jint len);

FOUNDATION_EXPORT void ARCrypto_nextBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT NSString *ARCrypto_hexWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT IOSByteArray *ARCrypto_fromHexWithNSString_(NSString *hex);

FOUNDATION_EXPORT void ARCrypto_init(ARCrypto *self);

FOUNDATION_EXPORT ARCrypto *new_ARCrypto_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARCrypto *create_ARCrypto_init();

J2OBJC_TYPE_LITERAL_HEADER(ARCrypto)

@compatibility_alias ImDiyalogRuntimeCrypto ARCrypto;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCrypto")
