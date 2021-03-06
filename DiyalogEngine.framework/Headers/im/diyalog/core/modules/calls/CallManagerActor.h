//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/calls/CallManagerActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor")
#ifdef RESTRICT_ImDiyalogCoreModulesCallsCallManagerActor
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesCallsCallManagerActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor))
#define ImDiyalogCoreModulesCallsCallManagerActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

@protocol ACModuleContext;
@protocol ARConstructor;

@interface ImDiyalogCoreModulesCallsCallManagerActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

+ (id<ARConstructor>)CONSTRUCTORWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor)

FOUNDATION_EXPORT id<ARConstructor> ImDiyalogCoreModulesCallsCallManagerActor_CONSTRUCTORWithACModuleContext_(id<ACModuleContext> context);

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_initWithACModuleContext_(ImDiyalogCoreModulesCallsCallManagerActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor *new_ImDiyalogCoreModulesCallsCallManagerActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor *create_ImDiyalogCoreModulesCallsCallManagerActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall))
#define ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall_

@interface ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId
                     withInt:(jint)attempt;

- (jint)getAttempt;

- (jlong)getCallId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall_initWithLong_withInt_(ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall *self, jlong callId, jint attempt);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall *new_ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall_initWithLong_withInt_(jlong callId, jint attempt) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall *create_ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall_initWithLong_withInt_(jlong callId, jint attempt);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCall)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked))
#define ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked_

@protocol ARWakeLock;

@interface ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId
                     withInt:(jint)attempt
              withARWakeLock:(id<ARWakeLock>)wakeLock;

- (jint)getAttempt;

- (jlong)getCallId;

- (id<ARWakeLock>)getWakeLock;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked_initWithLong_withInt_withARWakeLock_(ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked *self, jlong callId, jint attempt, id<ARWakeLock> wakeLock);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked *new_ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked_initWithLong_withInt_withARWakeLock_(jlong callId, jint attempt, id<ARWakeLock> wakeLock) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked *create_ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked_initWithLong_withInt_withARWakeLock_(jlong callId, jint attempt, id<ARWakeLock> wakeLock);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallLocked)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled))
#define ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled_

@interface ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId
                     withInt:(jint)attempt;

- (jint)getAttempt;

- (jlong)getCallId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled_initWithLong_withInt_(ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled *self, jlong callId, jint attempt);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled *new_ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled_initWithLong_withInt_(jlong callId, jint attempt) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled *create_ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled_initWithLong_withInt_(jlong callId, jint attempt);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_OnIncomingCallHandled)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded))
#define ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded_

@interface ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId;

- (jlong)getCallId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded_initWithLong_(ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded *self, jlong callId);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded *new_ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded_initWithLong_(jlong callId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded *create_ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded_initWithLong_(jlong callId);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_OnCallEnded)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall))
#define ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall_

@interface ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId;

- (jlong)getCallId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall_initWithLong_(ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall *self, jlong callId);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall *new_ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall_initWithLong_(jlong callId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall *create_ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall_initWithLong_(jlong callId);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_DoAnswerCall)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall))
#define ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall_

@interface ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId;

- (jlong)getCallId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall_initWithLong_(ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall *self, jlong callId);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall *new_ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall_initWithLong_(jlong callId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall *create_ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall_initWithLong_(jlong callId);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_DoEndCall)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_MuteCall_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_MuteCall))
#define ImDiyalogCoreModulesCallsCallManagerActor_MuteCall_

@interface ImDiyalogCoreModulesCallsCallManagerActor_MuteCall : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId;

- (jlong)getCallId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_MuteCall)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_MuteCall_initWithLong_(ImDiyalogCoreModulesCallsCallManagerActor_MuteCall *self, jlong callId);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_MuteCall *new_ImDiyalogCoreModulesCallsCallManagerActor_MuteCall_initWithLong_(jlong callId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_MuteCall *create_ImDiyalogCoreModulesCallsCallManagerActor_MuteCall_initWithLong_(jlong callId);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_MuteCall)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall))
#define ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall_

@interface ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId;

- (jlong)getCallId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall_initWithLong_(ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall *self, jlong callId);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall *new_ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall_initWithLong_(jlong callId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall *create_ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall_initWithLong_(jlong callId);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_UnmuteCall)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_DoCall_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_DoCall))
#define ImDiyalogCoreModulesCallsCallManagerActor_DoCall_

@class ACPeer;
@protocol ACCommandCallback;

@interface ImDiyalogCoreModulesCallsCallManagerActor_DoCall : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
         withACCommandCallback:(id<ACCommandCallback>)callback;

- (id<ACCommandCallback>)getCallback;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_DoCall)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_DoCall_initWithACPeer_withACCommandCallback_(ImDiyalogCoreModulesCallsCallManagerActor_DoCall *self, ACPeer *peer, id<ACCommandCallback> callback);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_DoCall *new_ImDiyalogCoreModulesCallsCallManagerActor_DoCall_initWithACPeer_withACCommandCallback_(ACPeer *peer, id<ACCommandCallback> callback) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_DoCall *create_ImDiyalogCoreModulesCallsCallManagerActor_DoCall_initWithACPeer_withACCommandCallback_(ACPeer *peer, id<ACCommandCallback> callback);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_DoCall)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete))
#define ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete_

@interface ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId;

- (jlong)getCallId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete_initWithLong_(ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete *self, jlong callId);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete *new_ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete_initWithLong_(jlong callId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete *create_ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete_initWithLong_(jlong callId);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_DoCallComplete)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered))
#define ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered_

@interface ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId;

- (jlong)getCallId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered_initWithLong_(ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered *self, jlong callId);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered *new_ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered_initWithLong_(jlong callId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered *create_ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered_initWithLong_(jlong callId);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_OnCallAnswered)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady))
#define ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady_

@interface ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady : NSObject

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId;

- (jlong)getCallId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady_initWithLong_(ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady *self, jlong callId);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady *new_ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady_initWithLong_(jlong callId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady *create_ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady_initWithLong_(jlong callId);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_IncomingCallReady)

#endif

#if !defined (ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor || defined(INCLUDE_ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall))
#define ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall_

@interface ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall_init(ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall *new_ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall *create_ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallManagerActor_ProbablyEndCall)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsCallManagerActor")
