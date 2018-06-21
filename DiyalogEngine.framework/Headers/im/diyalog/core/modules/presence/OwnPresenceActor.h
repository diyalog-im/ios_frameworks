//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/presence/OwnPresenceActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesPresenceOwnPresenceActor")
#ifdef RESTRICT_ImDiyalogCoreModulesPresenceOwnPresenceActor
#define INCLUDE_ALL_ImDiyalogCoreModulesPresenceOwnPresenceActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesPresenceOwnPresenceActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesPresenceOwnPresenceActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesPresenceOwnPresenceActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesPresenceOwnPresenceActor || defined(INCLUDE_ImDiyalogCoreModulesPresenceOwnPresenceActor))
#define ImDiyalogCoreModulesPresenceOwnPresenceActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

#define RESTRICT_ImDiyalogRuntimeEventbusBusSubscriber 1
#define INCLUDE_ImDiyalogRuntimeEventbusBusSubscriber 1
#include "../../../../../im/diyalog/runtime/eventbus/BusSubscriber.h"

@class ACModules;
@class ImDiyalogRuntimeEventbusEvent;

/*!
 @brief Actor for processing current user's online status.
 TODO: Implement correct request timeout
 */
@interface ImDiyalogCoreModulesPresenceOwnPresenceActor : ACModuleActor < ImDiyalogRuntimeEventbusBusSubscriber >

#pragma mark Public

- (instancetype)initWithACModules:(ACModules *)messenger;

- (void)onBusEventWithImDiyalogRuntimeEventbusEvent:(ImDiyalogRuntimeEventbusEvent *)event;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesPresenceOwnPresenceActor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesPresenceOwnPresenceActor_initWithACModules_(ImDiyalogCoreModulesPresenceOwnPresenceActor *self, ACModules *messenger);

FOUNDATION_EXPORT ImDiyalogCoreModulesPresenceOwnPresenceActor *new_ImDiyalogCoreModulesPresenceOwnPresenceActor_initWithACModules_(ACModules *messenger) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesPresenceOwnPresenceActor *create_ImDiyalogCoreModulesPresenceOwnPresenceActor_initWithACModules_(ACModules *messenger);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesPresenceOwnPresenceActor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesPresenceOwnPresenceActor")