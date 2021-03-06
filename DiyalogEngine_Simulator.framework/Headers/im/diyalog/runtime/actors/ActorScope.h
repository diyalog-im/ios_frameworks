//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/actors/ActorScope.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsActorScope")
#ifdef RESTRICT_ImDiyalogRuntimeActorsActorScope
#define INCLUDE_ALL_ImDiyalogRuntimeActorsActorScope 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeActorsActorScope 1
#endif
#undef RESTRICT_ImDiyalogRuntimeActorsActorScope

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARActorScope_) && (INCLUDE_ALL_ImDiyalogRuntimeActorsActorScope || defined(INCLUDE_ARActorScope))
#define ARActorScope_

@class ARActor;
@class ARActorRef;
@class ARActorSystem;
@class ARProps;
@class ImDiyalogRuntimeActorsDispatchActorDispatcher;
@class ImDiyalogRuntimeActorsDispatchActorEndpoint;
@class ImDiyalogRuntimeActorsDispatchMailbox;

/*!
 @brief <p>INTERNAL API</p>
 Actor Scope contains UUID, Path, Props and Actor (if created).
 */
@interface ARActorScope : NSObject

#pragma mark Public

- (instancetype)initWithARActorSystem:(ARActorSystem *)actorSystem
withImDiyalogRuntimeActorsDispatchMailbox:(ImDiyalogRuntimeActorsDispatchMailbox *)mailbox
withImDiyalogRuntimeActorsDispatchActorDispatcher:(ImDiyalogRuntimeActorsDispatchActorDispatcher *)dispatcher
                         withNSString:(NSString *)path
                          withARProps:(ARProps *)props
withImDiyalogRuntimeActorsDispatchActorEndpoint:(ImDiyalogRuntimeActorsDispatchActorEndpoint *)endpoint;

- (ARActor *)getActor;

- (ARActorRef *)getActorRef;

- (ARActorSystem *)getActorSystem;

- (ImDiyalogRuntimeActorsDispatchActorDispatcher *)getDispatcher;

- (ImDiyalogRuntimeActorsDispatchActorEndpoint *)getEndpoint;

- (ImDiyalogRuntimeActorsDispatchMailbox *)getMailbox;

- (id)getMessage;

- (NSString *)getPath;

- (ARProps *)getProps;

- (ARActorRef *)getSender;

- (void)onActorCreatedWithARActor:(ARActor *)actor;

- (void)onActorDie;

- (void)setMessageWithId:(id)message;

- (void)setSenderWithARActorRef:(ARActorRef *)sender;

@end

J2OBJC_EMPTY_STATIC_INIT(ARActorScope)

FOUNDATION_EXPORT void ARActorScope_initWithARActorSystem_withImDiyalogRuntimeActorsDispatchMailbox_withImDiyalogRuntimeActorsDispatchActorDispatcher_withNSString_withARProps_withImDiyalogRuntimeActorsDispatchActorEndpoint_(ARActorScope *self, ARActorSystem *actorSystem, ImDiyalogRuntimeActorsDispatchMailbox *mailbox, ImDiyalogRuntimeActorsDispatchActorDispatcher *dispatcher, NSString *path, ARProps *props, ImDiyalogRuntimeActorsDispatchActorEndpoint *endpoint);

FOUNDATION_EXPORT ARActorScope *new_ARActorScope_initWithARActorSystem_withImDiyalogRuntimeActorsDispatchMailbox_withImDiyalogRuntimeActorsDispatchActorDispatcher_withNSString_withARProps_withImDiyalogRuntimeActorsDispatchActorEndpoint_(ARActorSystem *actorSystem, ImDiyalogRuntimeActorsDispatchMailbox *mailbox, ImDiyalogRuntimeActorsDispatchActorDispatcher *dispatcher, NSString *path, ARProps *props, ImDiyalogRuntimeActorsDispatchActorEndpoint *endpoint) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARActorScope *create_ARActorScope_initWithARActorSystem_withImDiyalogRuntimeActorsDispatchMailbox_withImDiyalogRuntimeActorsDispatchActorDispatcher_withNSString_withARProps_withImDiyalogRuntimeActorsDispatchActorEndpoint_(ARActorSystem *actorSystem, ImDiyalogRuntimeActorsDispatchMailbox *mailbox, ImDiyalogRuntimeActorsDispatchActorDispatcher *dispatcher, NSString *path, ARProps *props, ImDiyalogRuntimeActorsDispatchActorEndpoint *endpoint);

J2OBJC_TYPE_LITERAL_HEADER(ARActorScope)

@compatibility_alias ImDiyalogRuntimeActorsActorScope ARActorScope;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsActorScope")
