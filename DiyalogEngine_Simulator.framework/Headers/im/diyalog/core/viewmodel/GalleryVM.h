//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/GalleryVM.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelGalleryVM")
#ifdef RESTRICT_ImDiyalogCoreViewmodelGalleryVM
#define INCLUDE_ALL_ImDiyalogCoreViewmodelGalleryVM 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelGalleryVM 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelGalleryVM

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACGalleryVM_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelGalleryVM || defined(INCLUDE_ACGalleryVM))
#define ACGalleryVM_

@class ARValueModel;

@interface ACGalleryVM : NSObject

#pragma mark Public

- (instancetype)init;

- (ARValueModel *)getGalleryMediaPath;

@end

J2OBJC_EMPTY_STATIC_INIT(ACGalleryVM)

FOUNDATION_EXPORT void ACGalleryVM_init(ACGalleryVM *self);

FOUNDATION_EXPORT ACGalleryVM *new_ACGalleryVM_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACGalleryVM *create_ACGalleryVM_init();

J2OBJC_TYPE_LITERAL_HEADER(ACGalleryVM)

@compatibility_alias ImDiyalogCoreViewmodelGalleryVM ACGalleryVM;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelGalleryVM")
