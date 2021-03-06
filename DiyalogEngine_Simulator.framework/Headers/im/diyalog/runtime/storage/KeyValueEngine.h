//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/storage/KeyValueEngine.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeStorageKeyValueEngine")
#ifdef RESTRICT_ImDiyalogRuntimeStorageKeyValueEngine
#define INCLUDE_ALL_ImDiyalogRuntimeStorageKeyValueEngine 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeStorageKeyValueEngine 1
#endif
#undef RESTRICT_ImDiyalogRuntimeStorageKeyValueEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARKeyValueEngine_) && (INCLUDE_ALL_ImDiyalogRuntimeStorageKeyValueEngine || defined(INCLUDE_ARKeyValueEngine))
#define ARKeyValueEngine_

@class IOSLongArray;
@protocol ARKeyValueItem;
@protocol JavaUtilList;

@protocol ARKeyValueEngine < NSObject, JavaObject >

- (void)addOrUpdateItem:(id<ARKeyValueItem>)item;

- (void)addOrUpdateItems:(id<JavaUtilList>)values;

- (void)removeItemWithKey:(jlong)key;

- (void)removeItemsWithKeys:(IOSLongArray *)keys;

- (void)clear;

- (id)getValueWithKey:(jlong)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ARKeyValueEngine)

J2OBJC_TYPE_LITERAL_HEADER(ARKeyValueEngine)

#define ImDiyalogRuntimeStorageKeyValueEngine ARKeyValueEngine

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeStorageKeyValueEngine")
