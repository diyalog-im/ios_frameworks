//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/misc/ListsStatesActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor")
#ifdef RESTRICT_ImDiyalogCoreModulesMiscListsStatesActor
#define INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesMiscListsStatesActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesMiscListsStatesActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor || defined(INCLUDE_ImDiyalogCoreModulesMiscListsStatesActor))
#define ImDiyalogCoreModulesMiscListsStatesActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

@class ARApiAppCounters;
@protocol ACModuleContext;

@interface ImDiyalogCoreModulesMiscListsStatesActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)onBookImported;

- (void)onContactsChangedWithBoolean:(jboolean)isEmpty;

- (void)onContactsLoaded;

- (void)onCounterChangedWithARApiAppCounters:(ARApiAppCounters *)counters;

- (void)onDialogsChangedWithBoolean:(jboolean)isEmpty;

- (void)onDialogsLoaded;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMiscListsStatesActor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMiscListsStatesActor_initWithACModuleContext_(ImDiyalogCoreModulesMiscListsStatesActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor *new_ImDiyalogCoreModulesMiscListsStatesActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor *create_ImDiyalogCoreModulesMiscListsStatesActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMiscListsStatesActor)

#endif

#if !defined (ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor || defined(INCLUDE_ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged))
#define ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged_

@class ARApiAppCounters;

@interface ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged : NSObject

#pragma mark Public

- (instancetype)initWithARApiAppCounters:(ARApiAppCounters *)counters;

- (ARApiAppCounters *)getCounters;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged_initWithARApiAppCounters_(ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged *self, ARApiAppCounters *counters);

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged *new_ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged_initWithARApiAppCounters_(ARApiAppCounters *counters) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged *create_ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged_initWithARApiAppCounters_(ARApiAppCounters *counters);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMiscListsStatesActor_OnAppCounterChanged)

#endif

#if !defined (ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported_) && (INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor || defined(INCLUDE_ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported))
#define ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported_

@interface ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported_init(ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported *new_ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported *create_ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMiscListsStatesActor_OnBookImported)

#endif

#if !defined (ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded_) && (INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor || defined(INCLUDE_ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded))
#define ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded_

@interface ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded_init(ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded *new_ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded *create_ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMiscListsStatesActor_OnContactsLoaded)

#endif

#if !defined (ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded_) && (INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor || defined(INCLUDE_ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded))
#define ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded_

@interface ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded : NSObject

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded_init(ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded *new_ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded *create_ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsLoaded)

#endif

#if !defined (ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor || defined(INCLUDE_ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged))
#define ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged_

@interface ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged : NSObject

#pragma mark Public

- (instancetype)initWithBoolean:(jboolean)isEmpty;

- (jboolean)isEmpty;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged_initWithBoolean_(ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged *self, jboolean isEmpty);

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged *new_ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged_initWithBoolean_(jboolean isEmpty) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged *create_ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged_initWithBoolean_(jboolean isEmpty);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMiscListsStatesActor_OnContactsChanged)

#endif

#if !defined (ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor || defined(INCLUDE_ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged))
#define ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged_

@interface ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged : NSObject

#pragma mark Public

- (instancetype)initWithBoolean:(jboolean)isEmpty;

- (jboolean)isEmpty;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged_initWithBoolean_(ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged *self, jboolean isEmpty);

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged *new_ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged_initWithBoolean_(jboolean isEmpty) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged *create_ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged_initWithBoolean_(jboolean isEmpty);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesMiscListsStatesActor_OnDialogsChanged)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesMiscListsStatesActor")
