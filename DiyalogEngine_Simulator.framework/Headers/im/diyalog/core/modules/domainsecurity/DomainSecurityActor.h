//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/domainsecurity/DomainSecurityActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor")
#ifdef RESTRICT_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor
#define INCLUDE_ALL_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor || defined(INCLUDE_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor))
#define ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

@class ARActorRef;
@protocol ACModuleContext;

@interface ImDiyalogCoreModulesDomainsecurityDomainSecurityActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)modules;

+ (ARActorRef *)getWithACModuleContext:(id<ACModuleContext>)messenger;

- (void)onReceiveWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesDomainsecurityDomainSecurityActor)

FOUNDATION_EXPORT ARActorRef *ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_getWithACModuleContext_(id<ACModuleContext> messenger);

FOUNDATION_EXPORT void ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_initWithACModuleContext_(ImDiyalogCoreModulesDomainsecurityDomainSecurityActor *self, id<ACModuleContext> modules);

FOUNDATION_EXPORT ImDiyalogCoreModulesDomainsecurityDomainSecurityActor *new_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_initWithACModuleContext_(id<ACModuleContext> modules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesDomainsecurityDomainSecurityActor *create_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_initWithACModuleContext_(id<ACModuleContext> modules);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesDomainsecurityDomainSecurityActor)

#endif

#if !defined (ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived_) && (INCLUDE_ALL_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor || defined(INCLUDE_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived))
#define ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived_

@class ImDiyalogCoreModulesDomainsecurityDomainSecurity;

@interface ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived : NSObject

#pragma mark Public

- (instancetype)initWithImDiyalogCoreModulesDomainsecurityDomainSecurity:(ImDiyalogCoreModulesDomainsecurityDomainSecurity *)domainSecurity;

- (ImDiyalogCoreModulesDomainsecurityDomainSecurity *)getDomainSecurity;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived)

FOUNDATION_EXPORT void ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived_initWithImDiyalogCoreModulesDomainsecurityDomainSecurity_(ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived *self, ImDiyalogCoreModulesDomainsecurityDomainSecurity *domainSecurity);

FOUNDATION_EXPORT ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived *new_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived_initWithImDiyalogCoreModulesDomainsecurityDomainSecurity_(ImDiyalogCoreModulesDomainsecurityDomainSecurity *domainSecurity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived *create_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived_initWithImDiyalogCoreModulesDomainsecurityDomainSecurity_(ImDiyalogCoreModulesDomainsecurityDomainSecurity *domainSecurity);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesDomainsecurityDomainSecurityActor_DomainSecurityReceived)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesDomainsecurityDomainSecurityActor")
