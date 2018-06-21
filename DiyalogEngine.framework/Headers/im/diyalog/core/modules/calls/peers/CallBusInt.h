//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/calls/peers/CallBusInt.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersCallBusInt")
#ifdef RESTRICT_ImDiyalogCoreModulesCallsPeersCallBusInt
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersCallBusInt 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersCallBusInt 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesCallsPeersCallBusInt

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesCallsPeersCallBusInt_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersCallBusInt || defined(INCLUDE_ImDiyalogCoreModulesCallsPeersCallBusInt))
#define ImDiyalogCoreModulesCallsPeersCallBusInt_

#define RESTRICT_ImDiyalogRuntimeActorsActorInterface 1
#define INCLUDE_ARActorInterface 1
#include "../../../../../../im/diyalog/runtime/actors/ActorInterface.h"

@class ARActorRef;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ImDiyalogCoreModulesCallsPeersCallBusInt : ARActorInterface

#pragma mark Public

- (instancetype)initWithARActorRef:(ARActorRef * __nonnull)dest;

- (void)changeMuteWithBoolean:(jboolean)isMuted;

- (void)joinBusWithNSString:(NSString * __nonnull)busId;

- (void)joinMasterBusWithNSString:(NSString * __nonnull)busId
                         withLong:(jlong)deviceId;

- (void)startOwn;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsPeersCallBusInt)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsPeersCallBusInt_initWithARActorRef_(ImDiyalogCoreModulesCallsPeersCallBusInt *self, ARActorRef *dest);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsPeersCallBusInt *new_ImDiyalogCoreModulesCallsPeersCallBusInt_initWithARActorRef_(ARActorRef *dest) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsPeersCallBusInt *create_ImDiyalogCoreModulesCallsPeersCallBusInt_initWithARActorRef_(ARActorRef *dest);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsPeersCallBusInt)

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsPeersCallBusInt")