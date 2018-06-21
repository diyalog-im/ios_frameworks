//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/messaging/actors/ActiveDialogsActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor")
#ifdef RESTRICT_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor))
#define ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../../im/diyalog/core/modules/ModuleActor.h"

@protocol ACModuleContext;

@interface ImDiyalogCoreModulesMessagingActorsActiveDialogsActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_initWithACModuleContext_(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsActiveDialogsActor *new_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsActiveDialogsActor *create_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged))
#define ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged_

@protocol JavaUtilList;

@interface ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged : NSObject

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)items;

- (id<JavaUtilList>)getItems;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged_initWithJavaUtilList_(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged *self, id<JavaUtilList> items);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged *new_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged_initWithJavaUtilList_(id<JavaUtilList> items) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged *create_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged_initWithJavaUtilList_(id<JavaUtilList> items);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_GroupedDialogsChanged)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged))
#define ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged_

@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged_initWithACPeer_(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged *self, ACPeer *peer);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged *new_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged_initWithACPeer_(ACPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged *create_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged_initWithACPeer_(ACPeer *peer);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_PeerInformationChanged)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged))
#define ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged_

@class ACPeer;

@interface ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged : NSObject

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                       withInt:(jint)counter;

- (jint)getCounter;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged_initWithACPeer_withInt_(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged *self, ACPeer *peer, jint counter);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged *new_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged_initWithACPeer_withInt_(ACPeer *peer, jint counter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged *create_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged_initWithACPeer_withInt_(ACPeer *peer, jint counter);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_CounterChanged)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived))
#define ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived_

@class ARApiPeer;

@interface ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived : NSObject {
 @public
  ARApiPeer *peer_;
}

#pragma mark Public

- (instancetype)initWithARApiPeer:(ARApiPeer *)peer;

- (ARApiPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived)

J2OBJC_FIELD_SETTER(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived, peer_, ARApiPeer *)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived_initWithARApiPeer_(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived *self, ARApiPeer *peer);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived *new_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived_initWithARApiPeer_(ARApiPeer *peer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived *create_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived_initWithARApiPeer_(ARApiPeer *peer);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsActiveDialogsActor_ChatArchived)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsActiveDialogsActor")
