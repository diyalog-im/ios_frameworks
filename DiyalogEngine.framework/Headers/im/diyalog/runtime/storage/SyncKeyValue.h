//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/storage/SyncKeyValue.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeStorageSyncKeyValue")
#ifdef RESTRICT_ImDiyalogRuntimeStorageSyncKeyValue
#define INCLUDE_ALL_ImDiyalogRuntimeStorageSyncKeyValue 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeStorageSyncKeyValue 1
#endif
#undef RESTRICT_ImDiyalogRuntimeStorageSyncKeyValue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARSyncKeyValue_) && (INCLUDE_ALL_ImDiyalogRuntimeStorageSyncKeyValue || defined(INCLUDE_ARSyncKeyValue))
#define ARSyncKeyValue_

@class IOSByteArray;
@protocol ARKeyValueStorage;

@interface ARSyncKeyValue : NSObject

#pragma mark Public

- (instancetype)initWithARKeyValueStorage:(id<ARKeyValueStorage>)storage;

- (void)delete__WithLong:(jlong)key;

- (IOSByteArray *)getWithLong:(jlong)key;

- (void)putWithLong:(jlong)key
      withByteArray:(IOSByteArray *)data;

@end

J2OBJC_EMPTY_STATIC_INIT(ARSyncKeyValue)

FOUNDATION_EXPORT void ARSyncKeyValue_initWithARKeyValueStorage_(ARSyncKeyValue *self, id<ARKeyValueStorage> storage);

FOUNDATION_EXPORT ARSyncKeyValue *new_ARSyncKeyValue_initWithARKeyValueStorage_(id<ARKeyValueStorage> storage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARSyncKeyValue *create_ARSyncKeyValue_initWithARKeyValueStorage_(id<ARKeyValueStorage> storage);

J2OBJC_TYPE_LITERAL_HEADER(ARSyncKeyValue)

@compatibility_alias ImDiyalogRuntimeStorageSyncKeyValue ARSyncKeyValue;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeStorageSyncKeyValue")
