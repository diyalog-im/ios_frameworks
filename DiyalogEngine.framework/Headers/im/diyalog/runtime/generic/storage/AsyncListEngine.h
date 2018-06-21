//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/storage/AsyncListEngine.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericStorageAsyncListEngine")
#ifdef RESTRICT_ImDiyalogRuntimeGenericStorageAsyncListEngine
#define INCLUDE_ALL_ImDiyalogRuntimeGenericStorageAsyncListEngine 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericStorageAsyncListEngine 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericStorageAsyncListEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARAsyncListEngine_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericStorageAsyncListEngine || defined(INCLUDE_ARAsyncListEngine))
#define ARAsyncListEngine_

#define RESTRICT_ImDiyalogRuntimeStorageListEngineDisplayExt 1
#define INCLUDE_ARListEngineDisplayExt 1
#include "../../../../../im/diyalog/runtime/storage/ListEngineDisplayExt.h"

@class ARBserObject;
@class IOSLongArray;
@protocol ARBserCreator;
@protocol ARListEngineDisplayListener;
@protocol ARListEngineDisplayLoadCallback;
@protocol ARListEngineItem;
@protocol ARListStorageDisplayEx;
@protocol JavaUtilList;

@interface ARAsyncListEngine : NSObject < ARListEngineDisplayExt >

#pragma mark Public

- (instancetype)initWithARListStorageDisplayEx:(id<ARListStorageDisplayEx>)storage
                             withARBserCreator:(id<ARBserCreator>)creator;

- (void)addOrUpdateItem:(ARBserObject<ARListEngineItem> *)item;

- (void)addOrUpdateItems:(id<JavaUtilList>)items;

- (void)clear;

- (jint)getCount;

- (id)getHeadValue;

- (id)getValueWithKey:(jlong)key;

- (jboolean)isEmpty;

- (void)loadBackwardWithLimit:(jint)limit
                 withCallback:(id<ARListEngineDisplayLoadCallback>)callback;

- (void)loadBackwardBeforeSortKey:(jlong)beforeSortKey
                        withLimit:(jint)limit
                     withCallback:(id<ARListEngineDisplayLoadCallback>)callback;

- (void)loadBackwardWithQuery:(NSString *)query
                    withLimit:(jint)limit
                 withCallback:(id<ARListEngineDisplayLoadCallback>)callback;

- (void)loadBackwardWithQuery:(NSString *)query
                beforeSortKey:(jlong)beforeSortKey
                    withLimit:(jint)limit
                 withCallback:(id<ARListEngineDisplayLoadCallback>)callback;

- (void)loadCenterWithSortKey:(jlong)centerSortKey
                    withLimit:(jint)limit
                 withCallback:(id<ARListEngineDisplayLoadCallback>)callback;

- (void)loadForwardWithLimit:(jint)limit
                withCallback:(id<ARListEngineDisplayLoadCallback>)callback;

- (void)loadForwardAfterSortKey:(jlong)afterSortKey
                      withLimit:(jint)limit
                   withCallback:(id<ARListEngineDisplayLoadCallback>)callback;

- (void)loadForwardWithQuery:(NSString *)query
                   withLimit:(jint)limit
                withCallback:(id<ARListEngineDisplayLoadCallback>)callback;

- (void)loadForwardWithQuery:(NSString *)query
                afterSortKey:(jlong)afterSortKey
                   withLimit:(jint)limit
                withCallback:(id<ARListEngineDisplayLoadCallback>)callback;

- (void)removeItemWithKey:(jlong)key;

- (void)removeItemsWithKeys:(IOSLongArray *)keys;

- (void)replaceItems:(id<JavaUtilList>)items;

- (void)subscribeWithListener:(id<ARListEngineDisplayListener>)listener;

- (void)unsubscribeWithListener:(id<ARListEngineDisplayListener>)listener;

@end

J2OBJC_EMPTY_STATIC_INIT(ARAsyncListEngine)

FOUNDATION_EXPORT void ARAsyncListEngine_initWithARListStorageDisplayEx_withARBserCreator_(ARAsyncListEngine *self, id<ARListStorageDisplayEx> storage, id<ARBserCreator> creator);

FOUNDATION_EXPORT ARAsyncListEngine *new_ARAsyncListEngine_initWithARListStorageDisplayEx_withARBserCreator_(id<ARListStorageDisplayEx> storage, id<ARBserCreator> creator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARAsyncListEngine *create_ARAsyncListEngine_initWithARListStorageDisplayEx_withARBserCreator_(id<ARListStorageDisplayEx> storage, id<ARBserCreator> creator);

J2OBJC_TYPE_LITERAL_HEADER(ARAsyncListEngine)

@compatibility_alias ImDiyalogRuntimeGenericStorageAsyncListEngine ARAsyncListEngine;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericStorageAsyncListEngine")
