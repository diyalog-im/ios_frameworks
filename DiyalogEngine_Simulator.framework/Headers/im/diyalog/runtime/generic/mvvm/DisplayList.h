//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/mvvm/DisplayList.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayList")
#ifdef RESTRICT_ImDiyalogRuntimeGenericMvvmDisplayList
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayList 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayList 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericMvvmDisplayList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARDisplayList_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayList || defined(INCLUDE_ARDisplayList))
#define ARDisplayList_

@class ARDisplayList_OperationMode;
@protocol ARAndroidChangeListener;
@protocol ARAppleChangeListener;
@protocol ARListProcessor;
@protocol ARListener;
@protocol ARModification;
@protocol JavaLangRunnable;
@protocol JavaUtilList;

@interface ARDisplayList : NSObject

#pragma mark Public

- (instancetype)initWithMode:(ARDisplayList_OperationMode *)operationMode;

- (instancetype)initWithMode:(ARDisplayList_OperationMode *)operationMode
                  withValues:(id<JavaUtilList>)defaultValues;

- (void)addAndroidListener:(id<ARAndroidChangeListener>)listener;

- (void)addAppleListener:(id<ARAppleChangeListener>)listener;

- (void)addListener:(id<ARListener>)listener;

- (void)editList:(id<ARModification>)mod;

- (void)editList:(id<ARModification>)mod
withLoadMoreFlag:(jboolean)isLoadMore;

- (void)editList:(id<ARModification>)mod
  withCompletion:(id<JavaLangRunnable>)executeAfter;

- (void)editList:(id<ARModification>)mod
  withCompletion:(id<JavaLangRunnable>)executeAfter
withLoadMoreFlag:(jboolean)isLoadMore;

- (void)forcePreprocessing;

- (id)itemWithIndex:(jint)index;

- (id<ARListProcessor>)getListProcessor;

- (jint)positionWithFind:(id)find;

- (id)getProcessedList;

- (jint)size;

- (void)removeAndroidListener:(id<ARAndroidChangeListener>)listener;

- (void)removeAppleListener:(id<ARAppleChangeListener>)listener;

- (void)removeListener:(id<ARListener>)listener;

- (void)setListProcessor:(id<ARListProcessor>)listProcessor;

@end

J2OBJC_EMPTY_STATIC_INIT(ARDisplayList)

FOUNDATION_EXPORT void ARDisplayList_initWithMode_(ARDisplayList *self, ARDisplayList_OperationMode *operationMode);

FOUNDATION_EXPORT ARDisplayList *new_ARDisplayList_initWithMode_(ARDisplayList_OperationMode *operationMode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARDisplayList *create_ARDisplayList_initWithMode_(ARDisplayList_OperationMode *operationMode);

FOUNDATION_EXPORT void ARDisplayList_initWithMode_withValues_(ARDisplayList *self, ARDisplayList_OperationMode *operationMode, id<JavaUtilList> defaultValues);

FOUNDATION_EXPORT ARDisplayList *new_ARDisplayList_initWithMode_withValues_(ARDisplayList_OperationMode *operationMode, id<JavaUtilList> defaultValues) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARDisplayList *create_ARDisplayList_initWithMode_withValues_(ARDisplayList_OperationMode *operationMode, id<JavaUtilList> defaultValues);

J2OBJC_TYPE_LITERAL_HEADER(ARDisplayList)

@compatibility_alias ImDiyalogRuntimeGenericMvvmDisplayList ARDisplayList;

#endif

#if !defined (ARDisplayList_OperationMode_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayList || defined(INCLUDE_ARDisplayList_OperationMode))
#define ARDisplayList_OperationMode_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ARDisplayList_OperationMode_Enum) {
  ARDisplayList_OperationMode_Enum_GENERAL = 0,
  ARDisplayList_OperationMode_Enum_ANDROID = 1,
  ARDisplayList_OperationMode_Enum_IOS = 2,
};

@interface ARDisplayList_OperationMode : JavaLangEnum < NSCopying >

+ (ARDisplayList_OperationMode *)GENERAL;

+ (ARDisplayList_OperationMode *)ANDROID;

+ (ARDisplayList_OperationMode *)IOS;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ARDisplayList_OperationMode *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ARDisplayList_OperationMode_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ARDisplayList_OperationMode)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ARDisplayList_OperationMode *ARDisplayList_OperationMode_values_[];

inline ARDisplayList_OperationMode *ARDisplayList_OperationMode_get_GENERAL();
J2OBJC_ENUM_CONSTANT(ARDisplayList_OperationMode, GENERAL)

inline ARDisplayList_OperationMode *ARDisplayList_OperationMode_get_ANDROID();
J2OBJC_ENUM_CONSTANT(ARDisplayList_OperationMode, ANDROID)

inline ARDisplayList_OperationMode *ARDisplayList_OperationMode_get_IOS();
J2OBJC_ENUM_CONSTANT(ARDisplayList_OperationMode, IOS)

FOUNDATION_EXPORT IOSObjectArray *ARDisplayList_OperationMode_values();

FOUNDATION_EXPORT ARDisplayList_OperationMode *ARDisplayList_OperationMode_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ARDisplayList_OperationMode *ARDisplayList_OperationMode_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ARDisplayList_OperationMode)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmDisplayList")
