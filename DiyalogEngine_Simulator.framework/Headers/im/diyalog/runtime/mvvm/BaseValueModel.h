//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/mvvm/BaseValueModel.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeMvvmBaseValueModel")
#ifdef RESTRICT_ImDiyalogRuntimeMvvmBaseValueModel
#define INCLUDE_ALL_ImDiyalogRuntimeMvvmBaseValueModel 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeMvvmBaseValueModel 1
#endif
#undef RESTRICT_ImDiyalogRuntimeMvvmBaseValueModel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARBaseValueModel_) && (INCLUDE_ALL_ImDiyalogRuntimeMvvmBaseValueModel || defined(INCLUDE_ARBaseValueModel))
#define ARBaseValueModel_

@interface ARBaseValueModel : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)rawObj;

#pragma mark Protected

- (id)getRawObj;

- (void)updateValuesWithId:(id)rawObj;

#pragma mark Package-Private

- (void)updateWithId:(id)rawObj;

@end

J2OBJC_EMPTY_STATIC_INIT(ARBaseValueModel)

FOUNDATION_EXPORT void ARBaseValueModel_initWithId_(ARBaseValueModel *self, id rawObj);

J2OBJC_TYPE_LITERAL_HEADER(ARBaseValueModel)

@compatibility_alias ImDiyalogRuntimeMvvmBaseValueModel ARBaseValueModel;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeMvvmBaseValueModel")
