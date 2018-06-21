//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/calls/peers/messages/RTCAnswer.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer")
#ifdef RESTRICT_ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer || defined(INCLUDE_ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer))
#define ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer_

@interface ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)deviceId
                    withLong:(jlong)sessionId
                withNSString:(NSString *)sdp;

- (jlong)getDeviceId;

- (NSString *)getSdp;

- (jlong)getSessionId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer_initWithLong_withLong_withNSString_(ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer *self, jlong deviceId, jlong sessionId, NSString *sdp);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer *new_ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer_initWithLong_withLong_withNSString_(jlong deviceId, jlong sessionId, NSString *sdp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer *create_ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer_initWithLong_withLong_withNSString_(jlong deviceId, jlong sessionId, NSString *sdp);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersMessagesRTCAnswer")