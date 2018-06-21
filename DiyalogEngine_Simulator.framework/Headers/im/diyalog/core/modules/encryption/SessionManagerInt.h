//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/encryption/SessionManagerInt.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionSessionManagerInt")
#ifdef RESTRICT_ImDiyalogCoreModulesEncryptionSessionManagerInt
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionSessionManagerInt 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionSessionManagerInt 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesEncryptionSessionManagerInt

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesEncryptionSessionManagerInt_) && (INCLUDE_ALL_ImDiyalogCoreModulesEncryptionSessionManagerInt || defined(INCLUDE_ImDiyalogCoreModulesEncryptionSessionManagerInt))
#define ImDiyalogCoreModulesEncryptionSessionManagerInt_

#define RESTRICT_ImDiyalogRuntimeActorsActorInterface 1
#define INCLUDE_ARActorInterface 1
#include "../../../../../im/diyalog/runtime/actors/ActorInterface.h"

@class ARActorRef;
@class ARPromise;

@interface ImDiyalogCoreModulesEncryptionSessionManagerInt : ARActorInterface

#pragma mark Public

- (instancetype)initWithARActorRef:(ARActorRef *)dest;

- (ARPromise *)pickSessionWithInt:(jint)uid
                          withInt:(jint)keyGroup;

- (ARPromise *)pickSessionWithInt:(jint)uid
                          withInt:(jint)keyGroup
                         withLong:(jlong)ownKeyId
                         withLong:(jlong)theirKeyId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesEncryptionSessionManagerInt)

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionSessionManagerInt_initWithARActorRef_(ImDiyalogCoreModulesEncryptionSessionManagerInt *self, ARActorRef *dest);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionSessionManagerInt *new_ImDiyalogCoreModulesEncryptionSessionManagerInt_initWithARActorRef_(ARActorRef *dest) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionSessionManagerInt *create_ImDiyalogCoreModulesEncryptionSessionManagerInt_initWithARActorRef_(ARActorRef *dest);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesEncryptionSessionManagerInt)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionSessionManagerInt")
