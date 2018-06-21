//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/calls/CallsModule.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsCallsModule")
#ifdef RESTRICT_ImDiyalogCoreModulesCallsCallsModule
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsCallsModule 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesCallsCallsModule 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesCallsCallsModule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesCallsCallsModule_) && (INCLUDE_ALL_ImDiyalogCoreModulesCallsCallsModule || defined(INCLUDE_ImDiyalogCoreModulesCallsCallsModule))
#define ImDiyalogCoreModulesCallsCallsModule_

#define RESTRICT_ImDiyalogCoreModulesAbsModule 1
#define INCLUDE_ACAbsModule 1
#include "../../../../../im/diyalog/core/modules/AbsModule.h"

@class ACCallVM;
@class ACPeer;
@class ARActorRef;
@class ImDiyalogCoreModulesCallsCallViewModels;
@protocol ACCommand;
@protocol ACModuleContext;

@interface ImDiyalogCoreModulesCallsCallsModule : ACAbsModule

+ (NSString *)TAG;

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)answerCallWithLong:(jlong)callId;

- (void)checkCallWithLong:(jlong)callId
                  withInt:(jint)attempt;

- (void)endCallWithLong:(jlong)callId;

- (ACCallVM *)getCallWithLong:(jlong)id_;

- (ARActorRef *)getCallManager;

- (ImDiyalogCoreModulesCallsCallViewModels *)getCallViewModels;

- (id<ACCommand>)makeCallWithACPeer:(ACPeer *)peer;

- (void)muteCallWithLong:(jlong)callId;

- (void)probablyEndCall;

- (void)resetModule;

- (void)run;

- (void)unmuteCallWithLong:(jlong)callId;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesCallsCallsModule)

inline NSString *ImDiyalogCoreModulesCallsCallsModule_get_TAG();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ImDiyalogCoreModulesCallsCallsModule_TAG;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImDiyalogCoreModulesCallsCallsModule, TAG, NSString *)

FOUNDATION_EXPORT void ImDiyalogCoreModulesCallsCallsModule_initWithACModuleContext_(ImDiyalogCoreModulesCallsCallsModule *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallsModule *new_ImDiyalogCoreModulesCallsCallsModule_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesCallsCallsModule *create_ImDiyalogCoreModulesCallsCallsModule_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesCallsCallsModule)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesCallsCallsModule")