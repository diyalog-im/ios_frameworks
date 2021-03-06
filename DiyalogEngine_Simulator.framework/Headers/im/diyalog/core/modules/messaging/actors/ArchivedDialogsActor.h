//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/messaging/actors/ArchivedDialogsActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor")
#ifdef RESTRICT_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor))
#define ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../../im/diyalog/core/modules/ModuleActor.h"

@protocol ACModuleContext;
@protocol ACRpcCallback;

@interface ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor : ACModuleActor {
 @public
  id<ACRpcCallback> lastCallback_;
}

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor)

J2OBJC_FIELD_SETTER(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor, lastCallback_, id<ACRpcCallback>)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_initWithACModuleContext_(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor *new_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor *create_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore))
#define ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore_

@protocol ACRpcCallback;

@interface ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore : NSObject {
 @public
  id<ACRpcCallback> callback_;
  jboolean init__;
}

#pragma mark Public

- (instancetype)initWithBoolean:(jboolean)init_
              withACRpcCallback:(id<ACRpcCallback>)callback;

- (id<ACRpcCallback>)getCallback;

- (jboolean)isInit;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore)

J2OBJC_FIELD_SETTER(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore, callback_, id<ACRpcCallback>)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore_initWithBoolean_withACRpcCallback_(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore *self, jboolean init_, id<ACRpcCallback> callback);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore *new_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore_initWithBoolean_withACRpcCallback_(jboolean init_, id<ACRpcCallback> callback) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore *create_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore_initWithBoolean_withACRpcCallback_(jboolean init_, id<ACRpcCallback> callback);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadMore)

#endif

#if !defined (ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore_) && (INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor || defined(INCLUDE_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore))
#define ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore_

@class ARResponseLoadArchived;

@interface ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore : NSObject {
 @public
  ARResponseLoadArchived *responseLoadArchived_;
}

#pragma mark Public

- (instancetype)initWithARResponseLoadArchived:(ARResponseLoadArchived *)responseLoadArchived;

- (ARResponseLoadArchived *)getResponseLoadArchived;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore)

J2OBJC_FIELD_SETTER(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore, responseLoadArchived_, ARResponseLoadArchived *)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore_initWithARResponseLoadArchived_(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore *self, ARResponseLoadArchived *responseLoadArchived);

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore *new_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore_initWithARResponseLoadArchived_(ARResponseLoadArchived *responseLoadArchived) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore *create_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore_initWithARResponseLoadArchived_(ARResponseLoadArchived *responseLoadArchived);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor_LoadedMore)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesMessagingActorsArchivedDialogsActor")
