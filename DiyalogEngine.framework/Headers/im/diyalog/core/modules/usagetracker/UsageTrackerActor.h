//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/usagetracker/UsageTrackerActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor")
#ifdef RESTRICT_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor
#define INCLUDE_ALL_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor || defined(INCLUDE_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor))
#define ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

@class ARActorRef;
@protocol ACModuleContext;

@interface ImDiyalogCoreModulesUsagetrackerUsageTrackerActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

+ (ARActorRef *)getWithACModuleContext:(id<ACModuleContext>)messenger;

- (void)onReceiveWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesUsagetrackerUsageTrackerActor)

FOUNDATION_EXPORT ARActorRef *ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_getWithACModuleContext_(id<ACModuleContext> messenger);

FOUNDATION_EXPORT void ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_initWithACModuleContext_(ImDiyalogCoreModulesUsagetrackerUsageTrackerActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesUsagetrackerUsageTrackerActor *new_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesUsagetrackerUsageTrackerActor *create_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesUsagetrackerUsageTrackerActor)

#endif

#if !defined (ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed_) && (INCLUDE_ALL_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor || defined(INCLUDE_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed))
#define ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed_

@interface ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed)

FOUNDATION_EXPORT void ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed_init(ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed *new_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed *create_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesUsagetrackerUsageTrackerActor_UserPressed)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesUsagetrackerUsageTrackerActor")