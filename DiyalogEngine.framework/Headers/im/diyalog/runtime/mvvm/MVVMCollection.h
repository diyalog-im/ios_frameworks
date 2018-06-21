//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/mvvm/MVVMCollection.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeMvvmMVVMCollection")
#ifdef RESTRICT_ImDiyalogRuntimeMvvmMVVMCollection
#define INCLUDE_ALL_ImDiyalogRuntimeMvvmMVVMCollection 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeMvvmMVVMCollection 1
#endif
#undef RESTRICT_ImDiyalogRuntimeMvvmMVVMCollection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARMVVMCollection_) && (INCLUDE_ALL_ImDiyalogRuntimeMvvmMVVMCollection || defined(INCLUDE_ARMVVMCollection))
#define ARMVVMCollection_

@class ARBaseValueModel;
@protocol ARBserCreator;
@protocol ARKeyValueEngine;
@protocol ARKeyValueStorage;
@protocol ARValueDefaultCreator;
@protocol ARValueModelCreator;

@interface ARMVVMCollection : NSObject

#pragma mark Public

- (instancetype)initWithARKeyValueStorage:(id<ARKeyValueStorage>)collectionStorage
                  withARValueModelCreator:(id<ARValueModelCreator>)creator
                        withARBserCreator:(id<ARBserCreator>)bserCreator;

- (instancetype)initWithARKeyValueStorage:(id<ARKeyValueStorage>)collectionStorage
                  withARValueModelCreator:(id<ARValueModelCreator>)creator
                        withARBserCreator:(id<ARBserCreator>)bserCreator
                withARValueDefaultCreator:(id<ARValueDefaultCreator>)bserDefaultCreator;

- (void)clear;

- (id)getWithId:(jlong)id_;

- (id<ARKeyValueEngine>)getEngine;

@end

J2OBJC_EMPTY_STATIC_INIT(ARMVVMCollection)

FOUNDATION_EXPORT void ARMVVMCollection_initWithARKeyValueStorage_withARValueModelCreator_withARBserCreator_(ARMVVMCollection *self, id<ARKeyValueStorage> collectionStorage, id<ARValueModelCreator> creator, id<ARBserCreator> bserCreator);

FOUNDATION_EXPORT ARMVVMCollection *new_ARMVVMCollection_initWithARKeyValueStorage_withARValueModelCreator_withARBserCreator_(id<ARKeyValueStorage> collectionStorage, id<ARValueModelCreator> creator, id<ARBserCreator> bserCreator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARMVVMCollection *create_ARMVVMCollection_initWithARKeyValueStorage_withARValueModelCreator_withARBserCreator_(id<ARKeyValueStorage> collectionStorage, id<ARValueModelCreator> creator, id<ARBserCreator> bserCreator);

FOUNDATION_EXPORT void ARMVVMCollection_initWithARKeyValueStorage_withARValueModelCreator_withARBserCreator_withARValueDefaultCreator_(ARMVVMCollection *self, id<ARKeyValueStorage> collectionStorage, id<ARValueModelCreator> creator, id<ARBserCreator> bserCreator, id<ARValueDefaultCreator> bserDefaultCreator);

FOUNDATION_EXPORT ARMVVMCollection *new_ARMVVMCollection_initWithARKeyValueStorage_withARValueModelCreator_withARBserCreator_withARValueDefaultCreator_(id<ARKeyValueStorage> collectionStorage, id<ARValueModelCreator> creator, id<ARBserCreator> bserCreator, id<ARValueDefaultCreator> bserDefaultCreator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARMVVMCollection *create_ARMVVMCollection_initWithARKeyValueStorage_withARValueModelCreator_withARBserCreator_withARValueDefaultCreator_(id<ARKeyValueStorage> collectionStorage, id<ARValueModelCreator> creator, id<ARBserCreator> bserCreator, id<ARValueDefaultCreator> bserDefaultCreator);

J2OBJC_TYPE_LITERAL_HEADER(ARMVVMCollection)

@compatibility_alias ImDiyalogRuntimeMvvmMVVMCollection ARMVVMCollection;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeMvvmMVVMCollection")
