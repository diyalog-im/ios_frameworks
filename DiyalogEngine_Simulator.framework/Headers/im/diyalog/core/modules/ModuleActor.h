//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/ModuleActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesModuleActor")
#ifdef RESTRICT_ImDiyalogCoreModulesModuleActor
#define INCLUDE_ALL_ImDiyalogCoreModulesModuleActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesModuleActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesModuleActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACModuleActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesModuleActor || defined(INCLUDE_ACModuleActor))
#define ACModuleActor_

#define RESTRICT_ImDiyalogRuntimeActorsAskcableActor 1
#define INCLUDE_ARAskcableActor 1
#include "../../../../im/diyalog/runtime/actors/AskcableActor.h"

#define RESTRICT_ImDiyalogRuntimeEventbusBusSubscriber 1
#define INCLUDE_ImDiyalogRuntimeEventbusBusSubscriber 1
#include "../../../../im/diyalog/runtime/eventbus/BusSubscriber.h"

@class ACConfiguration;
@class ACGroup;
@class ACGroupVM;
@class ACPeer;
@class ACRequest;
@class ACUser;
@class ACUserVM;
@class ARApiOutPeer;
@class ARApiPeer;
@class ARPromise;
@class ImDiyalogCoreModulesSequenceUpdates;
@class ImDiyalogRuntimeEventbusEvent;
@protocol ACModuleContext;
@protocol ACRpcCallback;
@protocol ARKeyValueEngine;
@protocol ARPreferencesStorage;

@interface ACModuleActor : ARAskcableActor < ImDiyalogRuntimeEventbusBusSubscriber >

+ (jlong)CURSOR_RECEIVED;

+ (jlong)CURSOR_READ;

+ (jlong)CURSOR_OWN_READ;

+ (jlong)CURSOR_DELETE;

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (ARPromise *)apiWithACRequest:(ACRequest *)request;

- (ARApiOutPeer *)buidOutPeerWithACPeer:(ACPeer *)peer;

- (ARApiPeer *)buildApiPeerWithACPeer:(ACPeer *)peer;

- (void)cancelRequestWithLong:(jlong)rid;

- (ACConfiguration *)config;

- (id<ACModuleContext>)context;

- (ACGroup *)getGroupWithInt:(jint)gid;

- (ACGroupVM *)getGroupVMWithInt:(jint)gid;

- (ACUser *)getUserWithInt:(jint)uid;

- (ACUserVM *)getUserVMWithInt:(jint)uid;

- (id<ARKeyValueEngine>)groups;

- (jint)myUid;

- (void)onBusEventWithImDiyalogRuntimeEventbusEvent:(ImDiyalogRuntimeEventbusEvent *)event;

- (id<ARPreferencesStorage>)preferences;

- (jlong)requestWithACRequest:(ACRequest *)request;

- (jlong)requestWithACRequest:(ACRequest *)request
            withACRpcCallback:(id<ACRpcCallback>)callback;

- (void)subscribeWithNSString:(NSString *)eventType;

- (ImDiyalogCoreModulesSequenceUpdates *)updates;

- (id<ARKeyValueEngine>)users;

@end

J2OBJC_EMPTY_STATIC_INIT(ACModuleActor)

inline jlong ACModuleActor_get_CURSOR_RECEIVED();
#define ACModuleActor_CURSOR_RECEIVED 0LL
J2OBJC_STATIC_FIELD_CONSTANT(ACModuleActor, CURSOR_RECEIVED, jlong)

inline jlong ACModuleActor_get_CURSOR_READ();
#define ACModuleActor_CURSOR_READ 1LL
J2OBJC_STATIC_FIELD_CONSTANT(ACModuleActor, CURSOR_READ, jlong)

inline jlong ACModuleActor_get_CURSOR_OWN_READ();
#define ACModuleActor_CURSOR_OWN_READ 2LL
J2OBJC_STATIC_FIELD_CONSTANT(ACModuleActor, CURSOR_OWN_READ, jlong)

inline jlong ACModuleActor_get_CURSOR_DELETE();
#define ACModuleActor_CURSOR_DELETE 3LL
J2OBJC_STATIC_FIELD_CONSTANT(ACModuleActor, CURSOR_DELETE, jlong)

FOUNDATION_EXPORT void ACModuleActor_initWithACModuleContext_(ACModuleActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ACModuleActor *new_ACModuleActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACModuleActor *create_ACModuleActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ACModuleActor)

@compatibility_alias ImDiyalogCoreModulesModuleActor ACModuleActor;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesModuleActor")