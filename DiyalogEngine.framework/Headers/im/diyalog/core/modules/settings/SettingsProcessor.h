//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/settings/SettingsProcessor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesSettingsSettingsProcessor")
#ifdef RESTRICT_ImDiyalogCoreModulesSettingsSettingsProcessor
#define INCLUDE_ALL_ImDiyalogCoreModulesSettingsSettingsProcessor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesSettingsSettingsProcessor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesSettingsSettingsProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesSettingsSettingsProcessor_) && (INCLUDE_ALL_ImDiyalogCoreModulesSettingsSettingsProcessor || defined(INCLUDE_ImDiyalogCoreModulesSettingsSettingsProcessor))
#define ImDiyalogCoreModulesSettingsSettingsProcessor_

#define RESTRICT_ImDiyalogCoreModulesAbsModule 1
#define INCLUDE_ACAbsModule 1
#include "../../../../../im/diyalog/core/modules/AbsModule.h"

@protocol ACModuleContext;

@interface ImDiyalogCoreModulesSettingsSettingsProcessor : ACAbsModule

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)modules;

- (void)onSettingsChangedWithNSString:(NSString *)key
                         withNSString:(NSString *)value;

- (void)resetProcessor;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesSettingsSettingsProcessor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesSettingsSettingsProcessor_initWithACModuleContext_(ImDiyalogCoreModulesSettingsSettingsProcessor *self, id<ACModuleContext> modules);

FOUNDATION_EXPORT ImDiyalogCoreModulesSettingsSettingsProcessor *new_ImDiyalogCoreModulesSettingsSettingsProcessor_initWithACModuleContext_(id<ACModuleContext> modules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesSettingsSettingsProcessor *create_ImDiyalogCoreModulesSettingsSettingsProcessor_initWithACModuleContext_(id<ACModuleContext> modules);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesSettingsSettingsProcessor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesSettingsSettingsProcessor")
