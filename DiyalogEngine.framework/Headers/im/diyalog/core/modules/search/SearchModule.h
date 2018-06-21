//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/search/SearchModule.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesSearchSearchModule")
#ifdef RESTRICT_ImDiyalogCoreModulesSearchSearchModule
#define INCLUDE_ALL_ImDiyalogCoreModulesSearchSearchModule 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesSearchSearchModule 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesSearchSearchModule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesSearchSearchModule_) && (INCLUDE_ALL_ImDiyalogCoreModulesSearchSearchModule || defined(INCLUDE_ImDiyalogCoreModulesSearchSearchModule))
#define ImDiyalogCoreModulesSearchSearchModule_

#define RESTRICT_ImDiyalogCoreModulesAbsModule 1
#define INCLUDE_ACAbsModule 1
#include "../../../../../im/diyalog/core/modules/AbsModule.h"

@class ACModules;
@class ACPeer;
@class ACPeerSearchType;
@class IOSObjectArray;
@protocol ACCommand;
@protocol ARListEngine;
@protocol JavaUtilList;

@interface ImDiyalogCoreModulesSearchSearchModule : ACAbsModule

#pragma mark Public

- (instancetype)initWithACModules:(ACModules *)modules;

- (id<ACCommand>)findAllDocsWithACPeer:(ACPeer *)peer;

- (id<ACCommand>)findAllLinksWithACPeer:(ACPeer *)peer;

- (id<ACCommand>)findAllPhotosWithACPeer:(ACPeer *)peer;

- (id<ACCommand>)findPeersWithACPeerSearchType:(ACPeerSearchType *)type;

- (id<ACCommand>)findTextMessagesWithACPeer:(ACPeer *)peer
                               withNSString:(NSString *)query;

- (id<ARListEngine>)getSearchList;

- (void)onContactsChangedWithJavaLangIntegerArray:(IOSObjectArray *)contacts;

- (void)onDialogsChangedWithJavaUtilList:(id<JavaUtilList>)dialogs;

- (void)resetModule;

- (void)run;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesSearchSearchModule)

FOUNDATION_EXPORT void ImDiyalogCoreModulesSearchSearchModule_initWithACModules_(ImDiyalogCoreModulesSearchSearchModule *self, ACModules *modules);

FOUNDATION_EXPORT ImDiyalogCoreModulesSearchSearchModule *new_ImDiyalogCoreModulesSearchSearchModule_initWithACModules_(ACModules *modules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesSearchSearchModule *create_ImDiyalogCoreModulesSearchSearchModule_initWithACModules_(ACModules *modules);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesSearchSearchModule)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesSearchSearchModule")