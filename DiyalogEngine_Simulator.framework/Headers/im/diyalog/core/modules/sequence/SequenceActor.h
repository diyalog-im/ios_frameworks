//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/sequence/SequenceActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesSequenceSequenceActor")
#ifdef RESTRICT_ImDiyalogCoreModulesSequenceSequenceActor
#define INCLUDE_ALL_ImDiyalogCoreModulesSequenceSequenceActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesSequenceSequenceActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesSequenceSequenceActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesSequenceSequenceActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesSequenceSequenceActor || defined(INCLUDE_ImDiyalogCoreModulesSequenceSequenceActor))
#define ImDiyalogCoreModulesSequenceSequenceActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

@protocol ACModuleContext;
@protocol ARConstructor;

@interface ImDiyalogCoreModulesSequenceSequenceActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)modules;

+ (id<ARConstructor>)CONSTRUCTORWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesSequenceSequenceActor)

FOUNDATION_EXPORT id<ARConstructor> ImDiyalogCoreModulesSequenceSequenceActor_CONSTRUCTORWithACModuleContext_(id<ACModuleContext> context);

FOUNDATION_EXPORT void ImDiyalogCoreModulesSequenceSequenceActor_initWithACModuleContext_(ImDiyalogCoreModulesSequenceSequenceActor *self, id<ACModuleContext> modules);

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceSequenceActor *new_ImDiyalogCoreModulesSequenceSequenceActor_initWithACModuleContext_(id<ACModuleContext> modules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceSequenceActor *create_ImDiyalogCoreModulesSequenceSequenceActor_initWithACModuleContext_(id<ACModuleContext> modules);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesSequenceSequenceActor)

#endif

#if !defined (ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate_) && (INCLUDE_ALL_ImDiyalogCoreModulesSequenceSequenceActor || defined(INCLUDE_ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate))
#define ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate_

@interface ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate)

FOUNDATION_EXPORT void ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate_init(ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate *new_ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate *create_ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesSequenceSequenceActor_ForceInvalidate)

#endif

#if !defined (ImDiyalogCoreModulesSequenceSequenceActor_Invalidate_) && (INCLUDE_ALL_ImDiyalogCoreModulesSequenceSequenceActor || defined(INCLUDE_ImDiyalogCoreModulesSequenceSequenceActor_Invalidate))
#define ImDiyalogCoreModulesSequenceSequenceActor_Invalidate_

@interface ImDiyalogCoreModulesSequenceSequenceActor_Invalidate : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesSequenceSequenceActor_Invalidate)

FOUNDATION_EXPORT void ImDiyalogCoreModulesSequenceSequenceActor_Invalidate_init(ImDiyalogCoreModulesSequenceSequenceActor_Invalidate *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceSequenceActor_Invalidate *new_ImDiyalogCoreModulesSequenceSequenceActor_Invalidate_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceSequenceActor_Invalidate *create_ImDiyalogCoreModulesSequenceSequenceActor_Invalidate_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesSequenceSequenceActor_Invalidate)

#endif

#if !defined (ImDiyalogCoreModulesSequenceSequenceActor_PushSeq_) && (INCLUDE_ALL_ImDiyalogCoreModulesSequenceSequenceActor || defined(INCLUDE_ImDiyalogCoreModulesSequenceSequenceActor_PushSeq))
#define ImDiyalogCoreModulesSequenceSequenceActor_PushSeq_

@interface ImDiyalogCoreModulesSequenceSequenceActor_PushSeq : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)seq;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesSequenceSequenceActor_PushSeq)

FOUNDATION_EXPORT void ImDiyalogCoreModulesSequenceSequenceActor_PushSeq_initWithInt_(ImDiyalogCoreModulesSequenceSequenceActor_PushSeq *self, jint seq);

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceSequenceActor_PushSeq *new_ImDiyalogCoreModulesSequenceSequenceActor_PushSeq_initWithInt_(jint seq) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceSequenceActor_PushSeq *create_ImDiyalogCoreModulesSequenceSequenceActor_PushSeq_initWithInt_(jint seq);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesSequenceSequenceActor_PushSeq)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesSequenceSequenceActor")
