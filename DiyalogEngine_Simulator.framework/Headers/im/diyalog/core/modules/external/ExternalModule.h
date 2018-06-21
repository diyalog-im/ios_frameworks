//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/external/ExternalModule.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesExternalExternalModule")
#ifdef RESTRICT_ImDiyalogCoreModulesExternalExternalModule
#define INCLUDE_ALL_ImDiyalogCoreModulesExternalExternalModule 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesExternalExternalModule 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesExternalExternalModule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesExternalExternalModule_) && (INCLUDE_ALL_ImDiyalogCoreModulesExternalExternalModule || defined(INCLUDE_ImDiyalogCoreModulesExternalExternalModule))
#define ImDiyalogCoreModulesExternalExternalModule_

#define RESTRICT_ImDiyalogCoreModulesAbsModule 1
#define INCLUDE_ACAbsModule 1
#include "../../../../../im/diyalog/core/modules/AbsModule.h"

@class ACRequest;
@class ARApiRawValue;
@protocol ACCommand;
@protocol ACModuleContext;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ImDiyalogCoreModulesExternalExternalModule : ACAbsModule

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (id<ACCommand>)completeWebActionWithNSString:(NSString *)actionHash
                                  withNSString:(NSString *)url;

- (id<ACCommand> __nonnull)externalMethodWithACRequest:(ACRequest * __nonnull)request;

- (void)rawPersistentRequestWithNSString:(NSString *)service
                            withNSString:(NSString *)method
                       withARApiRawValue:(ARApiRawValue *)params;

- (void)rawRequestWithNSString:(NSString *)service
                  withNSString:(NSString *)method
             withARApiRawValue:(ARApiRawValue *)params;

- (id<ACCommand>)rawRequestCommandWithNSString:(NSString *)service
                                  withNSString:(NSString *)method
                             withARApiRawValue:(ARApiRawValue *)params;

- (id<ACCommand>)startWebActionWithNSString:(NSString *)webAction;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesExternalExternalModule)

FOUNDATION_EXPORT void ImDiyalogCoreModulesExternalExternalModule_initWithACModuleContext_(ImDiyalogCoreModulesExternalExternalModule *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesExternalExternalModule *new_ImDiyalogCoreModulesExternalExternalModule_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesExternalExternalModule *create_ImDiyalogCoreModulesExternalExternalModule_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesExternalExternalModule)

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesExternalExternalModule")