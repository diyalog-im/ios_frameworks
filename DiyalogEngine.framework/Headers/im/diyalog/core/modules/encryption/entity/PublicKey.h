//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/encryption/entity/PublicKey.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEntityPublicKey")
#ifdef RESTRICT_ImDiyalogCoreModulesEncryptionEntityPublicKey
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEntityPublicKey 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEntityPublicKey 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesEncryptionEntityPublicKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesEncryptionEntityPublicKey_) && (INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEntityPublicKey || defined(INCLUDE_ImDiyalogCoreModulesEncryptionEntityPublicKey))
#define ImDiyalogCoreModulesEncryptionEntityPublicKey_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ImDiyalogCoreModulesEncryptionEntityPublicKey : ARBserObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithLong:(jlong)keyId
                withNSString:(NSString *)keyAlg
               withByteArray:(IOSByteArray *)publicKey;

- (NSString *)getKeyAlg;

- (jlong)getKeyId;

- (IOSByteArray *)getPublicKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesEncryptionEntityPublicKey)

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionEntityPublicKey_initWithLong_withNSString_withByteArray_(ImDiyalogCoreModulesEncryptionEntityPublicKey *self, jlong keyId, NSString *keyAlg, IOSByteArray *publicKey);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEntityPublicKey *new_ImDiyalogCoreModulesEncryptionEntityPublicKey_initWithLong_withNSString_withByteArray_(jlong keyId, NSString *keyAlg, IOSByteArray *publicKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEntityPublicKey *create_ImDiyalogCoreModulesEncryptionEntityPublicKey_initWithLong_withNSString_withByteArray_(jlong keyId, NSString *keyAlg, IOSByteArray *publicKey);

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionEntityPublicKey_initWithByteArray_(ImDiyalogCoreModulesEncryptionEntityPublicKey *self, IOSByteArray *data);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEntityPublicKey *new_ImDiyalogCoreModulesEncryptionEntityPublicKey_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEntityPublicKey *create_ImDiyalogCoreModulesEncryptionEntityPublicKey_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesEncryptionEntityPublicKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEntityPublicKey")
