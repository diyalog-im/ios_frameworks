//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/calls/peers/messages/RTCAdvertised.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised")
#ifdef RESTRICT_ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised || defined(INCLUDE_ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised))
#define ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised_

@class ImDiyalogCoreModulesCallsPeersPeerSettings;

@interface ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)deviceId
withImDiyalogCoreModulesCallsPeersPeerSettings:(ImDiyalogCoreModulesCallsPeersPeerSettings *)settings;

- (jlong)getDeviceId;

- (ImDiyalogCoreModulesCallsPeersPeerSettings *)getSettings;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised_initWithLong_withImDiyalogCoreModulesCallsPeersPeerSettings_(ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised *self, jlong deviceId, ImDiyalogCoreModulesCallsPeersPeerSettings *settings);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised *new_ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised_initWithLong_withImDiyalogCoreModulesCallsPeersPeerSettings_(jlong deviceId, ImDiyalogCoreModulesCallsPeersPeerSettings *settings) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised *create_ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised_initWithLong_withImDiyalogCoreModulesCallsPeersPeerSettings_(jlong deviceId, ImDiyalogCoreModulesCallsPeersPeerSettings *settings);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCAdvertised")
