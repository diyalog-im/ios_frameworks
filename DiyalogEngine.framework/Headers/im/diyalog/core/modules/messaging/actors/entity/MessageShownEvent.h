//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/messaging/actors/entity/MessageShownEvent.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent")
#ifdef RESTRICT_ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent))
#define ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent_

@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                      withLong:(jlong)sortDate;

- (ACPeer *)getPeer;

- (jlong)getSortDate;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent_initWithACPeer_withLong_(ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent *self, ACPeer *peer, jlong sortDate);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent *new_ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent_initWithACPeer_withLong_(ACPeer *peer, jlong sortDate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent *create_ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent_initWithACPeer_withLong_(ACPeer *peer, jlong sortDate);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsEntityMessageShownEvent")
