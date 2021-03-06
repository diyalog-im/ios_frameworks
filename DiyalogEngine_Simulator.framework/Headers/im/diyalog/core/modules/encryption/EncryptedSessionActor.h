//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/encryption/EncryptedSessionActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptedSessionActor")
#ifdef RESTRICT_ImDiyalogCoreModulesEncryptionEncryptedSessionActor
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptedSessionActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptedSessionActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesEncryptionEncryptedSessionActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesEncryptionEncryptedSessionActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptedSessionActor || defined(INCLUDE_ImDiyalogCoreModulesEncryptionEncryptedSessionActor))
#define ImDiyalogCoreModulesEncryptionEncryptedSessionActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

@class ARPromise;
@class ImDiyalogCoreEntityEncryptionPeerSession;
@protocol ACModuleContext;

/*!
 @brief Axolotl Ratchet encryption session
 Session is identified by:
 1) Destination User's Id
 2) Own Key Group Id
 3) Own Pre Key Id
 4) Their Key Group Id
 5) Their Pre Key Id
 <p/>
 During actor starting it downloads all required key from Key Manager.
 To encrypt/decrypt messages this actor spawns encryption chains.
 */
@interface ImDiyalogCoreModulesEncryptionEncryptedSessionActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context
withImDiyalogCoreEntityEncryptionPeerSession:(ImDiyalogCoreEntityEncryptionPeerSession *)session;

- (ARPromise *)onAskWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesEncryptionEncryptedSessionActor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionEncryptedSessionActor_initWithACModuleContext_withImDiyalogCoreEntityEncryptionPeerSession_(ImDiyalogCoreModulesEncryptionEncryptedSessionActor *self, id<ACModuleContext> context, ImDiyalogCoreEntityEncryptionPeerSession *session);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptedSessionActor *new_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_initWithACModuleContext_withImDiyalogCoreEntityEncryptionPeerSession_(id<ACModuleContext> context, ImDiyalogCoreEntityEncryptionPeerSession *session) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptedSessionActor *create_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_initWithACModuleContext_withImDiyalogCoreEntityEncryptionPeerSession_(id<ACModuleContext> context, ImDiyalogCoreEntityEncryptionPeerSession *session);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesEncryptionEncryptedSessionActor)

#endif

#if !defined (ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage_) && (INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptedSessionActor || defined(INCLUDE_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage))
#define ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage_

#define RESTRICT_ImDiyalogRuntimeActorsAskAskMessage 1
#define INCLUDE_ImDiyalogRuntimeActorsAskAskMessage 1
#include "../../../../../im/diyalog/runtime/actors/ask/AskMessage.h"

@class IOSByteArray;

@interface ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage : NSObject < ImDiyalogRuntimeActorsAskAskMessage >

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (IOSByteArray *)getData;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage)

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage_initWithByteArray_(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage *self, IOSByteArray *data);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage *new_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage *create_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptPackage)

#endif

#if !defined (ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes_) && (INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptedSessionActor || defined(INCLUDE_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes))
#define ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes_

#define RESTRICT_ImDiyalogRuntimeActorsAskAskResult 1
#define INCLUDE_ImDiyalogRuntimeActorsAskAskResult 1
#include "../../../../../im/diyalog/runtime/actors/ask/AskResult.h"

@class IOSByteArray;

@interface ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes : ImDiyalogRuntimeActorsAskAskResult

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data
                          withInt:(jint)keyGroupId;

- (IOSByteArray *)getData;

- (jint)getKeyGroupId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes)

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes_initWithByteArray_withInt_(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes *self, IOSByteArray *data, jint keyGroupId);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes *new_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes_initWithByteArray_withInt_(IOSByteArray *data, jint keyGroupId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes *create_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes_initWithByteArray_withInt_(IOSByteArray *data, jint keyGroupId);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_EncryptedPackageRes)

#endif

#if !defined (ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage_) && (INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptedSessionActor || defined(INCLUDE_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage))
#define ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage_

#define RESTRICT_ImDiyalogRuntimeActorsAskAskMessage 1
#define INCLUDE_ImDiyalogRuntimeActorsAskAskMessage 1
#include "../../../../../im/diyalog/runtime/actors/ask/AskMessage.h"

@class IOSByteArray;

@interface ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage : NSObject < ImDiyalogRuntimeActorsAskAskMessage >

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (IOSByteArray *)getData;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage)

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage_initWithByteArray_(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage *self, IOSByteArray *data);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage *new_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage *create_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptPackage)

#endif

#if !defined (ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage_) && (INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptedSessionActor || defined(INCLUDE_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage))
#define ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage_

#define RESTRICT_ImDiyalogRuntimeActorsAskAskResult 1
#define INCLUDE_ImDiyalogRuntimeActorsAskAskResult 1
#include "../../../../../im/diyalog/runtime/actors/ask/AskResult.h"

@class IOSByteArray;

@interface ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage : ImDiyalogRuntimeActorsAskAskResult

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (IOSByteArray *)getData;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage)

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage_initWithByteArray_(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage *self, IOSByteArray *data);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage *new_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage *create_ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesEncryptionEncryptedSessionActor_DecryptedPackage)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptedSessionActor")
