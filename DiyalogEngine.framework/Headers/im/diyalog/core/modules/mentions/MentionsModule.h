//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/mentions/MentionsModule.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesMentionsMentionsModule")
#ifdef RESTRICT_ImDiyalogCoreModulesMentionsMentionsModule
#define INCLUDE_ALL_ImDiyalogCoreModulesMentionsMentionsModule 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesMentionsMentionsModule 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesMentionsMentionsModule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesMentionsMentionsModule_) && (INCLUDE_ALL_ImDiyalogCoreModulesMentionsMentionsModule || defined(INCLUDE_ImDiyalogCoreModulesMentionsMentionsModule))
#define ImDiyalogCoreModulesMentionsMentionsModule_

#define RESTRICT_ImDiyalogCoreModulesAbsModule 1
#define INCLUDE_ACAbsModule 1
#include "../../../../../im/diyalog/core/modules/AbsModule.h"

@protocol ACModuleContext;
@protocol JavaUtilList;

@interface ImDiyalogCoreModulesMentionsMentionsModule : ACAbsModule

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (id<JavaUtilList>)findMentionsWithInt:(jint)gid
                           withNSString:(NSString *)query;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMentionsMentionsModule)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMentionsMentionsModule_initWithACModuleContext_(ImDiyalogCoreModulesMentionsMentionsModule *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesMentionsMentionsModule *new_ImDiyalogCoreModulesMentionsMentionsModule_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMentionsMentionsModule *create_ImDiyalogCoreModulesMentionsMentionsModule_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMentionsMentionsModule)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesMentionsMentionsModule")
