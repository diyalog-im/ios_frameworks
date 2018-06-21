//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/storage/memory/MemoryListEngine.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeStorageMemoryMemoryListEngine")
#ifdef RESTRICT_ImDiyalogRuntimeStorageMemoryMemoryListEngine
#define INCLUDE_ALL_ImDiyalogRuntimeStorageMemoryMemoryListEngine 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeStorageMemoryMemoryListEngine 1
#endif
#undef RESTRICT_ImDiyalogRuntimeStorageMemoryMemoryListEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARMemoryListEngine_) && (INCLUDE_ALL_ImDiyalogRuntimeStorageMemoryMemoryListEngine || defined(INCLUDE_ARMemoryListEngine))
#define ARMemoryListEngine_

#define RESTRICT_ImDiyalogRuntimeStorageListEngine 1
#define INCLUDE_ARListEngine 1
#include "../../../../../im/diyalog/runtime/storage/ListEngine.h"

@class ARBserObject;
@class ARMemoryListStorage;
@class IOSLongArray;
@protocol ARBserCreator;
@protocol ARListEngineItem;
@protocol JavaUtilList;

@interface ARMemoryListEngine : NSObject < ARListEngine >

#pragma mark Public

- (instancetype)initWithARMemoryListStorage:(ARMemoryListStorage *)storage
                          withARBserCreator:(id<ARBserCreator>)creator;

- (void)addOrUpdateItem:(ARBserObject<ARListEngineItem> *)item;

- (void)addOrUpdateItems:(id<JavaUtilList>)items;

- (void)clear;

- (jint)getCount;

- (id)getHeadValue;

- (id)getValueWithKey:(jlong)key;

- (jboolean)isEmpty;

- (void)removeItemWithKey:(jlong)key;

- (void)removeItemsWithKeys:(IOSLongArray *)keys;

- (void)replaceItems:(id<JavaUtilList>)items;

@end

J2OBJC_EMPTY_STATIC_INIT(ARMemoryListEngine)

FOUNDATION_EXPORT void ARMemoryListEngine_initWithARMemoryListStorage_withARBserCreator_(ARMemoryListEngine *self, ARMemoryListStorage *storage, id<ARBserCreator> creator);

FOUNDATION_EXPORT ARMemoryListEngine *new_ARMemoryListEngine_initWithARMemoryListStorage_withARBserCreator_(ARMemoryListStorage *storage, id<ARBserCreator> creator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARMemoryListEngine *create_ARMemoryListEngine_initWithARMemoryListStorage_withARBserCreator_(ARMemoryListStorage *storage, id<ARBserCreator> creator);

J2OBJC_TYPE_LITERAL_HEADER(ARMemoryListEngine)

@compatibility_alias ImDiyalogRuntimeStorageMemoryMemoryListEngine ARMemoryListEngine;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeStorageMemoryMemoryListEngine")
