//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/promise/PromisesArray.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimePromisePromisesArray")
#ifdef RESTRICT_ImDiyalogRuntimePromisePromisesArray
#define INCLUDE_ALL_ImDiyalogRuntimePromisePromisesArray 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimePromisePromisesArray 1
#endif
#undef RESTRICT_ImDiyalogRuntimePromisePromisesArray

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARPromisesArray_) && (INCLUDE_ALL_ImDiyalogRuntimePromisePromisesArray || defined(INCLUDE_ARPromisesArray))
#define ARPromisesArray_

@class ARPromise;
@class IOSObjectArray;
@protocol ARFunction;
@protocol ARListFunction;
@protocol ARPredicate;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

/*!
 @brief Array of Promises.
 Allows you to invoke map, flatMap and other useful methods
 for manipulating data.
 */
@interface ARPromisesArray : NSObject

#pragma mark Public

- (ARPromisesArray *)filterWithARPredicate:(id<ARPredicate>)predicate;

- (ARPromisesArray *)filterNull;

- (ARPromise *)first;

- (ARPromisesArray *)firstWithInt:(jint)count;

- (ARPromisesArray *)flatMapWithARFunction:(id<ARFunction>)map;

- (ARPromisesArray *)flatMapAllWithARFunction:(id<ARFunction>)fuc;

- (ARPromisesArray *)ignoreFailed;

/*!
 @brief Map promises results to new promises
 @param fun mapping function
 @return PromisesArray
 */
- (ARPromisesArray *)mapWithARFunction:(id<ARFunction>)fun;

- (ARPromisesArray *)mapOptionalWithARFunction:(id<ARFunction>)fun;

/*!
 @brief Create PromisesArray from collection
 @param collection Source collection
 @return array
 */
+ (ARPromisesArray *)ofWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Create PromisesArray from values
 @param items elements
 @return array
 */
+ (ARPromisesArray *)ofWithNSObjectArray:(IOSObjectArray *)items;

+ (ARPromisesArray *)ofPromisesWithJavaUtilCollection:(id<JavaUtilCollection>)items;

/*!
 @brief Create PromisesArray from multiple Promise
 @param items promises
 @return array
 */
+ (ARPromisesArray *)ofPromisesWithARPromiseArray:(IOSObjectArray *)items;

- (ARPromise *)random;

- (ARPromisesArray *)sortWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Zipping array of promises to single promise of array
 @return promise
 */
- (ARPromise *)zip;

/*!
 @brief Zip array to single promise
 @param fuc zipping function
 @return promise
 */
- (ARPromise *)zipPromiseWithARListFunction:(id<ARListFunction>)fuc;

@end

J2OBJC_EMPTY_STATIC_INIT(ARPromisesArray)

FOUNDATION_EXPORT ARPromisesArray *ARPromisesArray_ofWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT ARPromisesArray *ARPromisesArray_ofWithNSObjectArray_(IOSObjectArray *items);

FOUNDATION_EXPORT ARPromisesArray *ARPromisesArray_ofPromisesWithARPromiseArray_(IOSObjectArray *items);

FOUNDATION_EXPORT ARPromisesArray *ARPromisesArray_ofPromisesWithJavaUtilCollection_(id<JavaUtilCollection> items);

J2OBJC_TYPE_LITERAL_HEADER(ARPromisesArray)

@compatibility_alias ImDiyalogRuntimePromisePromisesArray ARPromisesArray;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimePromisePromisesArray")
