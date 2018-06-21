//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/ModuleContext.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesModuleContext")
#ifdef RESTRICT_ImDiyalogCoreModulesModuleContext
#define INCLUDE_ALL_ImDiyalogCoreModulesModuleContext 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesModuleContext 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesModuleContext

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACModuleContext_) && (INCLUDE_ALL_ImDiyalogCoreModulesModuleContext || defined(INCLUDE_ACModuleContext))
#define ACModuleContext_

@class ACAuthentication;
@class ACConfiguration;
@class ACDiyalogApi;
@class ACI18nEngine;
@class ACMessenger;
@class ImDiyalogCoreModulesApiApiModule;
@class ImDiyalogCoreModulesCallsCallsModule;
@class ImDiyalogCoreModulesContactsContactsModule;
@class ImDiyalogCoreModulesDomainsecurityDomainSecurityModule;
@class ImDiyalogCoreModulesEncryptionEncryptionModule;
@class ImDiyalogCoreModulesEventbusEventBusModule;
@class ImDiyalogCoreModulesExternalExternalModule;
@class ImDiyalogCoreModulesFileFilesModule;
@class ImDiyalogCoreModulesGroupsGroupsModule;
@class ImDiyalogCoreModulesMentionsMentionsModule;
@class ImDiyalogCoreModulesMessagingMessagesModule;
@class ImDiyalogCoreModulesMiscAppStateModule;
@class ImDiyalogCoreModulesMiscDeviceInfoModule;
@class ImDiyalogCoreModulesMiscDisplayLists;
@class ImDiyalogCoreModulesNotificationsNotificationsModule;
@class ImDiyalogCoreModulesPresencePresenceModule;
@class ImDiyalogCoreModulesProfileProfileModule;
@class ImDiyalogCoreModulesPushPushesModule;
@class ImDiyalogCoreModulesSearchSearchModule;
@class ImDiyalogCoreModulesSecuritySecurityModule;
@class ImDiyalogCoreModulesSequenceUpdates;
@class ImDiyalogCoreModulesSettingsSettingsModule;
@class ImDiyalogCoreModulesStickersStickersModule;
@class ImDiyalogCoreModulesTypingTypingModule;
@class ImDiyalogCoreModulesUsagetrackerUsageTrackerModule;
@class ImDiyalogCoreModulesUsersUsersModule;
@class ImDiyalogRuntimeEventbusEventBus;
@protocol ARPreferencesStorage;

@protocol ACModuleContext < NSObject, JavaObject >

- (ACConfiguration *)getConfiguration;

- (ACDiyalogApi *)getDiyalogApi;

- (ImDiyalogCoreModulesApiApiModule *)getApiModule;

- (id<ARPreferencesStorage>)getPreferences;

- (ACAuthentication *)getAuthModule;

- (ImDiyalogRuntimeEventbusEventBus *)getEvents;

- (ImDiyalogCoreModulesUsersUsersModule *)getUsersModule;

- (ImDiyalogCoreModulesGroupsGroupsModule *)getGroupsModule;

- (ImDiyalogCoreModulesStickersStickersModule *)getStickersModule;

- (ImDiyalogCoreModulesCallsCallsModule *)getCallsModule;

- (ImDiyalogCoreModulesMessagingMessagesModule *)getMessagesModule;

- (ImDiyalogCoreModulesSequenceUpdates *)getUpdatesModule;

- (ImDiyalogCoreModulesTypingTypingModule *)getTypingModule;

- (ImDiyalogCoreModulesPresencePresenceModule *)getPresenceModule;

- (ACI18nEngine *)getI18nModule;

- (ImDiyalogCoreModulesContactsContactsModule *)getContactsModule;

- (ImDiyalogCoreModulesFileFilesModule *)getFilesModule;

- (ImDiyalogCoreModulesNotificationsNotificationsModule *)getNotificationsModule;

- (ImDiyalogCoreModulesSettingsSettingsModule *)getSettingsModule;

- (ImDiyalogCoreModulesProfileProfileModule *)getProfileModule;

- (ImDiyalogCoreModulesMiscAppStateModule *)getAppStateModule;

- (ImDiyalogCoreModulesPushPushesModule *)getPushesModule;

- (ImDiyalogCoreModulesSecuritySecurityModule *)getSecurityModule;

- (ImDiyalogCoreModulesSearchSearchModule *)getSearchModule;

- (ImDiyalogCoreModulesExternalExternalModule *)getExternalModule;

- (ImDiyalogCoreModulesMiscDisplayLists *)getDisplayListsModule;

- (ACMessenger *)getMessenger;

- (ImDiyalogCoreModulesMentionsMentionsModule *)getMentions;

- (ImDiyalogCoreModulesMiscDeviceInfoModule *)getDeviceInfoModule;

- (ImDiyalogCoreModulesEncryptionEncryptionModule *)getEncryption;

- (ImDiyalogCoreModulesEventbusEventBusModule *)getEventBus;

- (ImDiyalogCoreModulesDomainsecurityDomainSecurityModule *)getDomainSecurityModule;

- (ImDiyalogCoreModulesUsagetrackerUsageTrackerModule *)getUsageTrackerModule;

@end

J2OBJC_EMPTY_STATIC_INIT(ACModuleContext)

J2OBJC_TYPE_LITERAL_HEADER(ACModuleContext)

#define ImDiyalogCoreModulesModuleContext ACModuleContext

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesModuleContext")