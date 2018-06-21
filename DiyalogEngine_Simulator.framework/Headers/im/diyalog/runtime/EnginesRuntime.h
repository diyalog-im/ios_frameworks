//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/EnginesRuntime.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeEnginesRuntime")
#ifdef RESTRICT_ImDiyalogRuntimeEnginesRuntime
#define INCLUDE_ALL_ImDiyalogRuntimeEnginesRuntime 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeEnginesRuntime 1
#endif
#undef RESTRICT_ImDiyalogRuntimeEnginesRuntime

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AREnginesRuntime_) && (INCLUDE_ALL_ImDiyalogRuntimeEnginesRuntime || defined(INCLUDE_AREnginesRuntime))
#define AREnginesRuntime_

@protocol ARBserCreator;
@protocol ARListEngine;
@protocol ARListStorage;
@protocol ARPlatformDisplayList;

@protocol AREnginesRuntime < NSObject, JavaObject >

/*!
 @brief Creating of List Engine instance
 @param storage list storage
 @param creator list creator
 @return the List Engine
 */
- (id<ARListEngine>)createListEngineWithARListStorage:(id<ARListStorage>)storage
                                    withARBserCreator:(id<ARBserCreator>)creator;

/*!
 @brief Creating of Display List instance
 @param listEngine       list engine
 @param isSharedInstance is this list can be used by different lists
 @param clazz            entity simple class name
 @return the Display List
 */
- (id<ARPlatformDisplayList>)createDisplayListWithARListEngine:(id<ARListEngine>)listEngine
                                                   withBoolean:(jboolean)isSharedInstance
                                                  withNSString:(NSString *)clazz;

@end

J2OBJC_EMPTY_STATIC_INIT(AREnginesRuntime)

J2OBJC_TYPE_LITERAL_HEADER(AREnginesRuntime)

#define ImDiyalogRuntimeEnginesRuntime AREnginesRuntime

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeEnginesRuntime")