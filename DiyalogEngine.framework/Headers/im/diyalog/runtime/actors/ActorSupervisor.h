//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/actors/ActorSupervisor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsActorSupervisor")
#ifdef RESTRICT_ImDiyalogRuntimeActorsActorSupervisor
#define INCLUDE_ALL_ImDiyalogRuntimeActorsActorSupervisor 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeActorsActorSupervisor 1
#endif
#undef RESTRICT_ImDiyalogRuntimeActorsActorSupervisor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARActorSupervisor_) && (INCLUDE_ALL_ImDiyalogRuntimeActorsActorSupervisor || defined(INCLUDE_ARActorSupervisor))
#define ARActorSupervisor_

@class ARActorRef;

@protocol ARActorSupervisor < NSObject, JavaObject >

- (void)onActorStoppedWithARActorRef:(ARActorRef *)ref;

@end

J2OBJC_EMPTY_STATIC_INIT(ARActorSupervisor)

J2OBJC_TYPE_LITERAL_HEADER(ARActorSupervisor)

#define ImDiyalogRuntimeActorsActorSupervisor ARActorSupervisor

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsActorSupervisor")
