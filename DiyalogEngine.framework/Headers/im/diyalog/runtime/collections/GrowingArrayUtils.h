//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/collections/GrowingArrayUtils.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCollectionsGrowingArrayUtils")
#ifdef RESTRICT_ImDiyalogRuntimeCollectionsGrowingArrayUtils
#define INCLUDE_ALL_ImDiyalogRuntimeCollectionsGrowingArrayUtils 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCollectionsGrowingArrayUtils 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCollectionsGrowingArrayUtils

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARGrowingArrayUtils_) && (INCLUDE_ALL_ImDiyalogRuntimeCollectionsGrowingArrayUtils || defined(INCLUDE_ARGrowingArrayUtils))
#define ARGrowingArrayUtils_

@class IOSBooleanArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;

/*!
 @brief A helper class that aims to provide comparable growth performance to ArrayList, but on primitive
 arrays.
 Common array operations are implemented for efficient use in dynamic containers.
 <p>
 All methods in this class assume that the length of an array is equivalent to its capacity and
 NOT the number of elements in the array. The current size of the array is always passed in as a
 parameter.
 */
@interface ARGrowingArrayUtils : NSObject

#pragma mark Public

/*!
 @brief Primitive boolean version of <code>append(Object[],int,Object)</code>.
 */
+ (IOSBooleanArray *)appendWithBooleanArray:(IOSBooleanArray *)array
                                    withInt:(jint)currentSize
                                withBoolean:(jboolean)element;

/*!
 @brief Primitive int version of <code>append(Object[],int,Object)</code>.
 */
+ (IOSIntArray *)appendWithIntArray:(IOSIntArray *)array
                            withInt:(jint)currentSize
                            withInt:(jint)element;

/*!
 @brief Primitive long version of <code>append(Object[],int,Object)</code>.
 */
+ (IOSLongArray *)appendWithLongArray:(IOSLongArray *)array
                              withInt:(jint)currentSize
                             withLong:(jlong)element;

/*!
 @brief Appends an element to the end of the array, growing the array if there is no more room.
 @param array       The array to which to append the element. This must NOT be null.
 @param currentSize The number of elements in the array. Must be less than or equal to
 array.length.
 @param element     The element to append.
 @return the array to which the element was appended. This may be different than the given
 array.
 */
+ (IOSObjectArray *)appendWithNSObjectArray:(IOSObjectArray *)array
                                    withInt:(jint)currentSize
                                     withId:(id)element;

/*!
 @brief Given the current size of an array, returns an ideal size to which the array should grow.
 This is typically double the given size, but should not be relied upon to do so in the
 future.
 */
+ (jint)growSizeWithInt:(jint)currentSize;

/*!
 @brief Primitive boolean version of <code>insert(Object[],int,int,Object)</code>.
 */
+ (IOSBooleanArray *)insertWithBooleanArray:(IOSBooleanArray *)array
                                    withInt:(jint)currentSize
                                    withInt:(jint)index
                                withBoolean:(jboolean)element;

/*!
 @brief Primitive int version of <code>insert(Object[],int,int,Object)</code>.
 */
+ (IOSIntArray *)insertWithIntArray:(IOSIntArray *)array
                            withInt:(jint)currentSize
                            withInt:(jint)index
                            withInt:(jint)element;

/*!
 @brief Primitive long version of <code>insert(Object[],int,int,Object)</code>.
 */
+ (IOSLongArray *)insertWithLongArray:(IOSLongArray *)array
                              withInt:(jint)currentSize
                              withInt:(jint)index
                             withLong:(jlong)element;

/*!
 @brief Inserts an element into the array at the specified index, growing the array if there is no
 more room.
 @param array       The array to which to append the element. Must NOT be null.
 @param currentSize The number of elements in the array. Must be less than or equal to
 array.length.
 @param element     The element to insert.
 @return the array to which the element was appended. This may be different than the given
 array.
 */
+ (IOSObjectArray *)insertWithNSObjectArray:(IOSObjectArray *)array
                                    withInt:(jint)currentSize
                                    withInt:(jint)index
                                     withId:(id)element;

@end

J2OBJC_EMPTY_STATIC_INIT(ARGrowingArrayUtils)

FOUNDATION_EXPORT IOSObjectArray *ARGrowingArrayUtils_appendWithNSObjectArray_withInt_withId_(IOSObjectArray *array, jint currentSize, id element);

FOUNDATION_EXPORT IOSIntArray *ARGrowingArrayUtils_appendWithIntArray_withInt_withInt_(IOSIntArray *array, jint currentSize, jint element);

FOUNDATION_EXPORT IOSLongArray *ARGrowingArrayUtils_appendWithLongArray_withInt_withLong_(IOSLongArray *array, jint currentSize, jlong element);

FOUNDATION_EXPORT IOSBooleanArray *ARGrowingArrayUtils_appendWithBooleanArray_withInt_withBoolean_(IOSBooleanArray *array, jint currentSize, jboolean element);

FOUNDATION_EXPORT IOSObjectArray *ARGrowingArrayUtils_insertWithNSObjectArray_withInt_withInt_withId_(IOSObjectArray *array, jint currentSize, jint index, id element);

FOUNDATION_EXPORT IOSIntArray *ARGrowingArrayUtils_insertWithIntArray_withInt_withInt_withInt_(IOSIntArray *array, jint currentSize, jint index, jint element);

FOUNDATION_EXPORT IOSLongArray *ARGrowingArrayUtils_insertWithLongArray_withInt_withInt_withLong_(IOSLongArray *array, jint currentSize, jint index, jlong element);

FOUNDATION_EXPORT IOSBooleanArray *ARGrowingArrayUtils_insertWithBooleanArray_withInt_withInt_withBoolean_(IOSBooleanArray *array, jint currentSize, jint index, jboolean element);

FOUNDATION_EXPORT jint ARGrowingArrayUtils_growSizeWithInt_(jint currentSize);

J2OBJC_TYPE_LITERAL_HEADER(ARGrowingArrayUtils)

@compatibility_alias ImDiyalogRuntimeCollectionsGrowingArrayUtils ARGrowingArrayUtils;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCollectionsGrowingArrayUtils")