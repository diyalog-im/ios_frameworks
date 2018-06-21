//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/actors/ActorCreator.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsActorCreator")
#ifdef RESTRICT_ImDiyalogRuntimeActorsActorCreator
#define INCLUDE_ALL_ImDiyalogRuntimeActorsActorCreator 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeActorsActorCreator 1
#endif
#undef RESTRICT_ImDiyalogRuntimeActorsActorCreator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARActorCreator_) && (INCLUDE_ALL_ImDiyalogRuntimeActorsActorCreator || defined(INCLUDE_ARActorCreator))
#define ARActorCreator_

@class ARActor;

/*!
 @brief Creator of custom actors
 */
@protocol ARActorCreator < NSObject, JavaObject >

/*!
 @brief Create actor
 @return Actor
 */
- (ARActor *)create;

@end

J2OBJC_EMPTY_STATIC_INIT(ARActorCreator)

J2OBJC_TYPE_LITERAL_HEADER(ARActorCreator)

#define ImDiyalogRuntimeActorsActorCreator ARActorCreator

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeActorsActorCreator")