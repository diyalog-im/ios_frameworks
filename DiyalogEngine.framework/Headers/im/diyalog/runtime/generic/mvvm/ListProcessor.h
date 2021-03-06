//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/mvvm/ListProcessor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmListProcessor")
#ifdef RESTRICT_ImDiyalogRuntimeGenericMvvmListProcessor
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmListProcessor 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmListProcessor 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericMvvmListProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARListProcessor_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmListProcessor || defined(INCLUDE_ARListProcessor))
#define ARListProcessor_

@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@protocol ARListProcessor < NSObject, JavaObject >

- (id __nullable)processWithItems:(id<JavaUtilList> __nonnull)items
                     withPrevious:(id __nullable)previous;

@end

J2OBJC_EMPTY_STATIC_INIT(ARListProcessor)

J2OBJC_TYPE_LITERAL_HEADER(ARListProcessor)

#define ImDiyalogRuntimeGenericMvvmListProcessor ARListProcessor

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericMvvmListProcessor")
