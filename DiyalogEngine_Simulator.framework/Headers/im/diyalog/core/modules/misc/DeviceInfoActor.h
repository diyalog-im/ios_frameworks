//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/misc/DeviceInfoActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesMiscDeviceInfoActor")
#ifdef RESTRICT_ImDiyalogCoreModulesMiscDeviceInfoActor
#define INCLUDE_ALL_ImDiyalogCoreModulesMiscDeviceInfoActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesMiscDeviceInfoActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesMiscDeviceInfoActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesMiscDeviceInfoActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesMiscDeviceInfoActor || defined(INCLUDE_ImDiyalogCoreModulesMiscDeviceInfoActor))
#define ImDiyalogCoreModulesMiscDeviceInfoActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

@protocol ACModuleContext;

@interface ImDiyalogCoreModulesMiscDeviceInfoActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMiscDeviceInfoActor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMiscDeviceInfoActor_initWithACModuleContext_(ImDiyalogCoreModulesMiscDeviceInfoActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscDeviceInfoActor *new_ImDiyalogCoreModulesMiscDeviceInfoActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscDeviceInfoActor *create_ImDiyalogCoreModulesMiscDeviceInfoActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMiscDeviceInfoActor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesMiscDeviceInfoActor")