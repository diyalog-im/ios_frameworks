//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/collections/ContainerHelpers.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeCollectionsContainerHelpers")
#ifdef RESTRICT_ImDiyalogRuntimeCollectionsContainerHelpers
#define INCLUDE_ALL_ImDiyalogRuntimeCollectionsContainerHelpers 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeCollectionsContainerHelpers 1
#endif
#undef RESTRICT_ImDiyalogRuntimeCollectionsContainerHelpers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARContainerHelpers_) && (INCLUDE_ALL_ImDiyalogRuntimeCollectionsContainerHelpers || defined(INCLUDE_ARContainerHelpers))
#define ARContainerHelpers_

@class IOSBooleanArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;

@interface ARContainerHelpers : NSObject

+ (IOSBooleanArray *)EMPTY_BOOLEANS;

+ (IOSIntArray *)EMPTY_INTS;

+ (IOSLongArray *)EMPTY_LONGS;

+ (IOSObjectArray *)EMPTY_OBJECTS;

#pragma mark Package-Private

- (instancetype)init;

+ (jint)binarySearchWithIntArray:(IOSIntArray *)array
                         withInt:(jint)size
                         withInt:(jint)value;

+ (jint)binarySearchWithLongArray:(IOSLongArray *)array
                          withInt:(jint)size
                         withLong:(jlong)value;

@end

J2OBJC_STATIC_INIT(ARContainerHelpers)

inline IOSBooleanArray *ARContainerHelpers_get_EMPTY_BOOLEANS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSBooleanArray *ARContainerHelpers_EMPTY_BOOLEANS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ARContainerHelpers, EMPTY_BOOLEANS, IOSBooleanArray *)

inline IOSIntArray *ARContainerHelpers_get_EMPTY_INTS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ARContainerHelpers_EMPTY_INTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ARContainerHelpers, EMPTY_INTS, IOSIntArray *)

inline IOSLongArray *ARContainerHelpers_get_EMPTY_LONGS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSLongArray *ARContainerHelpers_EMPTY_LONGS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ARContainerHelpers, EMPTY_LONGS, IOSLongArray *)

inline IOSObjectArray *ARContainerHelpers_get_EMPTY_OBJECTS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *ARContainerHelpers_EMPTY_OBJECTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ARContainerHelpers, EMPTY_OBJECTS, IOSObjectArray *)

FOUNDATION_EXPORT jint ARContainerHelpers_binarySearchWithIntArray_withInt_withInt_(IOSIntArray *array, jint size, jint value);

FOUNDATION_EXPORT jint ARContainerHelpers_binarySearchWithLongArray_withInt_withLong_(IOSLongArray *array, jint size, jlong value);

FOUNDATION_EXPORT void ARContainerHelpers_init(ARContainerHelpers *self);

FOUNDATION_EXPORT ARContainerHelpers *new_ARContainerHelpers_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARContainerHelpers *create_ARContainerHelpers_init();

J2OBJC_TYPE_LITERAL_HEADER(ARContainerHelpers)

@compatibility_alias ImDiyalogRuntimeCollectionsContainerHelpers ARContainerHelpers;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeCollectionsContainerHelpers")
