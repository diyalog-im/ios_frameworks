//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/storage/ListEngineDisplayLoadCallback.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeStorageListEngineDisplayLoadCallback")
#ifdef RESTRICT_ImDiyalogRuntimeStorageListEngineDisplayLoadCallback
#define INCLUDE_ALL_ImDiyalogRuntimeStorageListEngineDisplayLoadCallback 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeStorageListEngineDisplayLoadCallback 1
#endif
#undef RESTRICT_ImDiyalogRuntimeStorageListEngineDisplayLoadCallback

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARListEngineDisplayLoadCallback_) && (INCLUDE_ALL_ImDiyalogRuntimeStorageListEngineDisplayLoadCallback || defined(INCLUDE_ARListEngineDisplayLoadCallback))
#define ARListEngineDisplayLoadCallback_

@protocol JavaUtilList;

@protocol ARListEngineDisplayLoadCallback < NSObject, JavaObject >

- (void)onLoadedWithItems:(id<JavaUtilList>)items
               withTopKey:(jlong)topSortKey
            withBottomKey:(jlong)bottomSortKey;

@end

J2OBJC_EMPTY_STATIC_INIT(ARListEngineDisplayLoadCallback)

J2OBJC_TYPE_LITERAL_HEADER(ARListEngineDisplayLoadCallback)

#define ImDiyalogRuntimeStorageListEngineDisplayLoadCallback ARListEngineDisplayLoadCallback

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeStorageListEngineDisplayLoadCallback")