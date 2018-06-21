//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/events/IncomingCall.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEventsIncomingCall")
#ifdef RESTRICT_ImDiyalogCoreEventsIncomingCall
#define INCLUDE_ALL_ImDiyalogCoreEventsIncomingCall 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEventsIncomingCall 1
#endif
#undef RESTRICT_ImDiyalogCoreEventsIncomingCall

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreEventsIncomingCall_) && (INCLUDE_ALL_ImDiyalogCoreEventsIncomingCall || defined(INCLUDE_ImDiyalogCoreEventsIncomingCall))
#define ImDiyalogCoreEventsIncomingCall_

#define RESTRICT_ImDiyalogRuntimeEventbusEvent 1
#define INCLUDE_ImDiyalogRuntimeEventbusEvent 1
#include "../../../../im/diyalog/runtime/eventbus/Event.h"

@interface ImDiyalogCoreEventsIncomingCall : ImDiyalogRuntimeEventbusEvent

+ (NSString *)EVENT;

#pragma mark Public

- (instancetype)initWithLong:(jlong)callId
                     withInt:(jint)uid;

- (jlong)getCall;

- (NSString *)getType;

- (jint)getUid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreEventsIncomingCall)

inline NSString *ImDiyalogCoreEventsIncomingCall_get_EVENT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ImDiyalogCoreEventsIncomingCall_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImDiyalogCoreEventsIncomingCall, EVENT, NSString *)

FOUNDATION_EXPORT void ImDiyalogCoreEventsIncomingCall_initWithLong_withInt_(ImDiyalogCoreEventsIncomingCall *self, jlong callId, jint uid);

FOUNDATION_EXPORT ImDiyalogCoreEventsIncomingCall *new_ImDiyalogCoreEventsIncomingCall_initWithLong_withInt_(jlong callId, jint uid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreEventsIncomingCall *create_ImDiyalogCoreEventsIncomingCall_initWithLong_withInt_(jlong callId, jint uid);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreEventsIncomingCall)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEventsIncomingCall")
