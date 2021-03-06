//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/GenericEnginesProvider.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericGenericEnginesProvider")
#ifdef RESTRICT_ImDiyalogRuntimeGenericGenericEnginesProvider
#define INCLUDE_ALL_ImDiyalogRuntimeGenericGenericEnginesProvider 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericGenericEnginesProvider 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericGenericEnginesProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARGenericEnginesProvider_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericGenericEnginesProvider || defined(INCLUDE_ARGenericEnginesProvider))
#define ARGenericEnginesProvider_

#define RESTRICT_ImDiyalogRuntimeEnginesRuntime 1
#define INCLUDE_AREnginesRuntime 1
#include "../../../../im/diyalog/runtime/EnginesRuntime.h"

@class ARDisplayList_OperationMode;
@protocol ARBserCreator;
@protocol ARListEngine;
@protocol ARListStorage;
@protocol ARPlatformDisplayList;

@interface ARGenericEnginesProvider : NSObject < AREnginesRuntime >

#pragma mark Public

- (instancetype)initWithARDisplayList_OperationMode:(ARDisplayList_OperationMode *)operationMode;

- (id<ARPlatformDisplayList>)createDisplayListWithARListEngine:(id<ARListEngine>)listEngine
                                                   withBoolean:(jboolean)isSharedInstance
                                                  withNSString:(NSString *)clazz;

- (id<ARListEngine>)createListEngineWithARListStorage:(id<ARListStorage>)storage
                                    withARBserCreator:(id<ARBserCreator>)creator;

@end

J2OBJC_STATIC_INIT(ARGenericEnginesProvider)

FOUNDATION_EXPORT void ARGenericEnginesProvider_initWithARDisplayList_OperationMode_(ARGenericEnginesProvider *self, ARDisplayList_OperationMode *operationMode);

FOUNDATION_EXPORT ARGenericEnginesProvider *new_ARGenericEnginesProvider_initWithARDisplayList_OperationMode_(ARDisplayList_OperationMode *operationMode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARGenericEnginesProvider *create_ARGenericEnginesProvider_initWithARDisplayList_OperationMode_(ARDisplayList_OperationMode *operationMode);

J2OBJC_TYPE_LITERAL_HEADER(ARGenericEnginesProvider)

@compatibility_alias ImDiyalogRuntimeGenericGenericEnginesProvider ARGenericEnginesProvider;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericGenericEnginesProvider")
