//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/function/Predicates.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeFunctionPredicates")
#ifdef RESTRICT_ImDiyalogRuntimeFunctionPredicates
#define INCLUDE_ALL_ImDiyalogRuntimeFunctionPredicates 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeFunctionPredicates 1
#endif
#undef RESTRICT_ImDiyalogRuntimeFunctionPredicates

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARPredicates_) && (INCLUDE_ALL_ImDiyalogRuntimeFunctionPredicates || defined(INCLUDE_ARPredicates))
#define ARPredicates_

@protocol ARPredicate;

@interface ARPredicates : NSObject

+ (id<ARPredicate>)NULL_;

+ (void)setNULL_:(id<ARPredicate>)value;

+ (id<ARPredicate>)NOT_NULL;

+ (void)setNOT_NULL:(id<ARPredicate>)value;

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ARPredicates)

inline id<ARPredicate> ARPredicates_get_NULL();
inline id<ARPredicate> ARPredicates_set_NULL(id<ARPredicate> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARPredicate> ARPredicates_NULL;
J2OBJC_STATIC_FIELD_OBJ(ARPredicates, NULL, id<ARPredicate>)

inline id<ARPredicate> ARPredicates_get_NOT_NULL();
inline id<ARPredicate> ARPredicates_set_NOT_NULL(id<ARPredicate> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARPredicate> ARPredicates_NOT_NULL;
J2OBJC_STATIC_FIELD_OBJ(ARPredicates, NOT_NULL, id<ARPredicate>)

FOUNDATION_EXPORT void ARPredicates_init(ARPredicates *self);

FOUNDATION_EXPORT ARPredicates *new_ARPredicates_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARPredicates *create_ARPredicates_init();

J2OBJC_TYPE_LITERAL_HEADER(ARPredicates)

@compatibility_alias ImDiyalogRuntimeFunctionPredicates ARPredicates;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeFunctionPredicates")
