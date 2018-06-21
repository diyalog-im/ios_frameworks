//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/encryption/entity/UserKeys.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEntityUserKeys")
#ifdef RESTRICT_ImDiyalogCoreModulesEncryptionEntityUserKeys
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEntityUserKeys 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEntityUserKeys 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesEncryptionEntityUserKeys

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesEncryptionEntityUserKeys_) && (INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEntityUserKeys || defined(INCLUDE_ImDiyalogCoreModulesEncryptionEntityUserKeys))
#define ImDiyalogCoreModulesEncryptionEntityUserKeys_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class IOSObjectArray;
@class ImDiyalogCoreModulesEncryptionEntityUserKeysGroup;

@interface ImDiyalogCoreModulesEncryptionEntityUserKeys : ARBserObject

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithInt:(jint)uid
withImDiyalogCoreModulesEncryptionEntityUserKeysGroupArray:(IOSObjectArray *)userKeysGroups;

- (ImDiyalogCoreModulesEncryptionEntityUserKeys *)addUserKeyGroupWithImDiyalogCoreModulesEncryptionEntityUserKeysGroup:(ImDiyalogCoreModulesEncryptionEntityUserKeysGroup *)keysGroup;

- (jint)getUid;

- (IOSObjectArray *)getUserKeysGroups;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (ImDiyalogCoreModulesEncryptionEntityUserKeys *)removeUserKeyGroupWithInt:(jint)keyGroupId;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesEncryptionEntityUserKeys)

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionEntityUserKeys_initWithInt_withImDiyalogCoreModulesEncryptionEntityUserKeysGroupArray_(ImDiyalogCoreModulesEncryptionEntityUserKeys *self, jint uid, IOSObjectArray *userKeysGroups);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEntityUserKeys *new_ImDiyalogCoreModulesEncryptionEntityUserKeys_initWithInt_withImDiyalogCoreModulesEncryptionEntityUserKeysGroupArray_(jint uid, IOSObjectArray *userKeysGroups) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEntityUserKeys *create_ImDiyalogCoreModulesEncryptionEntityUserKeys_initWithInt_withImDiyalogCoreModulesEncryptionEntityUserKeysGroupArray_(jint uid, IOSObjectArray *userKeysGroups);

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionEntityUserKeys_initWithByteArray_(ImDiyalogCoreModulesEncryptionEntityUserKeys *self, IOSByteArray *data);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEntityUserKeys *new_ImDiyalogCoreModulesEncryptionEntityUserKeys_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEntityUserKeys *create_ImDiyalogCoreModulesEncryptionEntityUserKeys_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesEncryptionEntityUserKeys)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEntityUserKeys")