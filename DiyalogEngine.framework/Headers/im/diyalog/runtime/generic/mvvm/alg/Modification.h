//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/mvvm/alg/Modification.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAlgModification")
#ifdef RESTRICT_ImDiyalogRuntimeGenericMvvmAlgModification
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAlgModification 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAlgModification 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericMvvmAlgModification

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARModification_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAlgModification || defined(INCLUDE_ARModification))
#define ARModification_

@class JavaUtilArrayList;
@protocol JavaUtilList;

@protocol ARModification < NSObject, JavaObject >

- (id<JavaUtilList>)modifyWithJavaUtilArrayList:(JavaUtilArrayList *)sourceList;

@end

J2OBJC_EMPTY_STATIC_INIT(ARModification)

J2OBJC_TYPE_LITERAL_HEADER(ARModification)

#define ImDiyalogRuntimeGenericMvvmAlgModification ARModification

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmAlgModification")
