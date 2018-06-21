//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/typing/TypingActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesTypingTypingActor")
#ifdef RESTRICT_ImDiyalogCoreModulesTypingTypingActor
#define INCLUDE_ALL_ImDiyalogCoreModulesTypingTypingActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesTypingTypingActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesTypingTypingActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesTypingTypingActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesTypingTypingActor || defined(INCLUDE_ImDiyalogCoreModulesTypingTypingActor))
#define ImDiyalogCoreModulesTypingTypingActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

@class ARActorRef;
@protocol ACModuleContext;

@interface ImDiyalogCoreModulesTypingTypingActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)messenger;

+ (ARActorRef *)getWithACModuleContext:(id<ACModuleContext>)messenger;

- (void)onReceiveWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesTypingTypingActor)

FOUNDATION_EXPORT ARActorRef *ImDiyalogCoreModulesTypingTypingActor_getWithACModuleContext_(id<ACModuleContext> messenger);

FOUNDATION_EXPORT void ImDiyalogCoreModulesTypingTypingActor_initWithACModuleContext_(ImDiyalogCoreModulesTypingTypingActor *self, id<ACModuleContext> messenger);

FOUNDATION_EXPORT ImDiyalogCoreModulesTypingTypingActor *new_ImDiyalogCoreModulesTypingTypingActor_initWithACModuleContext_(id<ACModuleContext> messenger) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesTypingTypingActor *create_ImDiyalogCoreModulesTypingTypingActor_initWithACModuleContext_(id<ACModuleContext> messenger);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesTypingTypingActor)

#endif

#if !defined (ImDiyalogCoreModulesTypingTypingActor_StopTyping_) && (INCLUDE_ALL_ImDiyalogCoreModulesTypingTypingActor || defined(INCLUDE_ImDiyalogCoreModulesTypingTypingActor_StopTyping))
#define ImDiyalogCoreModulesTypingTypingActor_StopTyping_

@interface ImDiyalogCoreModulesTypingTypingActor_StopTyping : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)uid;

- (jboolean)isEqual:(id)o;

- (jint)getUid;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesTypingTypingActor_StopTyping)

FOUNDATION_EXPORT void ImDiyalogCoreModulesTypingTypingActor_StopTyping_initWithInt_(ImDiyalogCoreModulesTypingTypingActor_StopTyping *self, jint uid);

FOUNDATION_EXPORT ImDiyalogCoreModulesTypingTypingActor_StopTyping *new_ImDiyalogCoreModulesTypingTypingActor_StopTyping_initWithInt_(jint uid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesTypingTypingActor_StopTyping *create_ImDiyalogCoreModulesTypingTypingActor_StopTyping_initWithInt_(jint uid);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesTypingTypingActor_StopTyping)

#endif

#if !defined (ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping_) && (INCLUDE_ALL_ImDiyalogCoreModulesTypingTypingActor || defined(INCLUDE_ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping))
#define ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping_

@interface ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)gid
                    withInt:(jint)uid;

- (jboolean)isEqual:(id)o;

- (jint)getGid;

- (jint)getUid;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping)

FOUNDATION_EXPORT void ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping_initWithInt_withInt_(ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping *self, jint gid, jint uid);

FOUNDATION_EXPORT ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping *new_ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping_initWithInt_withInt_(jint gid, jint uid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping *create_ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping_initWithInt_withInt_(jint gid, jint uid);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesTypingTypingActor_StopGroupTyping)

#endif

#if !defined (ImDiyalogCoreModulesTypingTypingActor_PrivateTyping_) && (INCLUDE_ALL_ImDiyalogCoreModulesTypingTypingActor || defined(INCLUDE_ImDiyalogCoreModulesTypingTypingActor_PrivateTyping))
#define ImDiyalogCoreModulesTypingTypingActor_PrivateTyping_

@class ARApiTypingType;

@interface ImDiyalogCoreModulesTypingTypingActor_PrivateTyping : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)uid
        withARApiTypingType:(ARApiTypingType *)type;

- (jboolean)isEqual:(id)o;

- (ARApiTypingType *)getType;

- (jint)getUid;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesTypingTypingActor_PrivateTyping)

FOUNDATION_EXPORT void ImDiyalogCoreModulesTypingTypingActor_PrivateTyping_initWithInt_withARApiTypingType_(ImDiyalogCoreModulesTypingTypingActor_PrivateTyping *self, jint uid, ARApiTypingType *type);

FOUNDATION_EXPORT ImDiyalogCoreModulesTypingTypingActor_PrivateTyping *new_ImDiyalogCoreModulesTypingTypingActor_PrivateTyping_initWithInt_withARApiTypingType_(jint uid, ARApiTypingType *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesTypingTypingActor_PrivateTyping *create_ImDiyalogCoreModulesTypingTypingActor_PrivateTyping_initWithInt_withARApiTypingType_(jint uid, ARApiTypingType *type);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesTypingTypingActor_PrivateTyping)

#endif

#if !defined (ImDiyalogCoreModulesTypingTypingActor_GroupTyping_) && (INCLUDE_ALL_ImDiyalogCoreModulesTypingTypingActor || defined(INCLUDE_ImDiyalogCoreModulesTypingTypingActor_GroupTyping))
#define ImDiyalogCoreModulesTypingTypingActor_GroupTyping_

@class ARApiTypingType;

@interface ImDiyalogCoreModulesTypingTypingActor_GroupTyping : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)gid
                    withInt:(jint)uid
        withARApiTypingType:(ARApiTypingType *)type;

- (jboolean)isEqual:(id)o;

- (jint)getGid;

- (ARApiTypingType *)getType;

- (jint)getUid;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesTypingTypingActor_GroupTyping)

FOUNDATION_EXPORT void ImDiyalogCoreModulesTypingTypingActor_GroupTyping_initWithInt_withInt_withARApiTypingType_(ImDiyalogCoreModulesTypingTypingActor_GroupTyping *self, jint gid, jint uid, ARApiTypingType *type);

FOUNDATION_EXPORT ImDiyalogCoreModulesTypingTypingActor_GroupTyping *new_ImDiyalogCoreModulesTypingTypingActor_GroupTyping_initWithInt_withInt_withARApiTypingType_(jint gid, jint uid, ARApiTypingType *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesTypingTypingActor_GroupTyping *create_ImDiyalogCoreModulesTypingTypingActor_GroupTyping_initWithInt_withInt_withARApiTypingType_(jint gid, jint uid, ARApiTypingType *type);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesTypingTypingActor_GroupTyping)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesTypingTypingActor")