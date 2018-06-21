//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/encryption/EncryptionModule.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptionModule")
#ifdef RESTRICT_ImDiyalogCoreModulesEncryptionEncryptionModule
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptionModule 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptionModule 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesEncryptionEncryptionModule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesEncryptionEncryptionModule_) && (INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptionModule || defined(INCLUDE_ImDiyalogCoreModulesEncryptionEncryptionModule))
#define ImDiyalogCoreModulesEncryptionEncryptionModule_

#define RESTRICT_ImDiyalogCoreModulesAbsModule 1
#define INCLUDE_ACAbsModule 1
#include "../../../../../im/diyalog/core/modules/AbsModule.h"

@class ARActorRef;
@class ImDiyalogCoreModulesEncryptionKeyManagerInt;
@class ImDiyalogCoreModulesEncryptionSessionManagerInt;
@protocol ACModuleContext;

@interface ImDiyalogCoreModulesEncryptionEncryptionModule : ACAbsModule

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (ARActorRef *)getEncryptedChatManagerWithInt:(jint)uid;

- (ARActorRef *)getKeyManager;

- (ImDiyalogCoreModulesEncryptionKeyManagerInt *)getKeyManagerInt;

- (ARActorRef *)getMessageEncryptor;

- (ImDiyalogCoreModulesEncryptionSessionManagerInt *)getSessionManagerInt;

- (void)resetModule;

- (void)run;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesEncryptionEncryptionModule)

FOUNDATION_EXPORT void ImDiyalogCoreModulesEncryptionEncryptionModule_initWithACModuleContext_(ImDiyalogCoreModulesEncryptionEncryptionModule *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptionModule *new_ImDiyalogCoreModulesEncryptionEncryptionModule_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesEncryptionEncryptionModule *create_ImDiyalogCoreModulesEncryptionEncryptionModule_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesEncryptionEncryptionModule)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesEncryptionEncryptionModule")
