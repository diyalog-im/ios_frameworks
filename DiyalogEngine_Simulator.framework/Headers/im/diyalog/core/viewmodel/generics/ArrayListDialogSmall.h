//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/generics/ArrayListDialogSmall.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsArrayListDialogSmall")
#ifdef RESTRICT_ImDiyalogCoreViewmodelGenericsArrayListDialogSmall
#define INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsArrayListDialogSmall 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsArrayListDialogSmall 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelGenericsArrayListDialogSmall

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACArrayListDialogSmall_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsArrayListDialogSmall || defined(INCLUDE_ACArrayListDialogSmall))
#define ACArrayListDialogSmall_

#define RESTRICT_JavaUtilArrayList 1
#define INCLUDE_JavaUtilArrayList 1
@import j2objc;

@class ACDialogSmall;

@interface ACArrayListDialogSmall : JavaUtilArrayList

#pragma mark Public

- (instancetype)init;

- (ACDialogSmall *)getWithInt:(jint)index;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ACArrayListDialogSmall)

FOUNDATION_EXPORT void ACArrayListDialogSmall_init(ACArrayListDialogSmall *self);

FOUNDATION_EXPORT ACArrayListDialogSmall *new_ACArrayListDialogSmall_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACArrayListDialogSmall *create_ACArrayListDialogSmall_init();

J2OBJC_TYPE_LITERAL_HEADER(ACArrayListDialogSmall)

@compatibility_alias ImDiyalogCoreViewmodelGenericsArrayListDialogSmall ACArrayListDialogSmall;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelGenericsArrayListDialogSmall")