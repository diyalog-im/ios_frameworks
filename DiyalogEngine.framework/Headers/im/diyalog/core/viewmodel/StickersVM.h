//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/StickersVM.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelStickersVM")
#ifdef RESTRICT_ImDiyalogCoreViewmodelStickersVM
#define INCLUDE_ALL_ImDiyalogCoreViewmodelStickersVM 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelStickersVM 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelStickersVM

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACStickersVM_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelStickersVM || defined(INCLUDE_ACStickersVM))
#define ACStickersVM_

@class ARValueModel;

@interface ACStickersVM : NSObject

#pragma mark Public

- (instancetype)init;

- (ARValueModel *)getOwnStickerPacks;

@end

J2OBJC_EMPTY_STATIC_INIT(ACStickersVM)

FOUNDATION_EXPORT void ACStickersVM_init(ACStickersVM *self);

FOUNDATION_EXPORT ACStickersVM *new_ACStickersVM_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACStickersVM *create_ACStickersVM_init();

J2OBJC_TYPE_LITERAL_HEADER(ACStickersVM)

@compatibility_alias ImDiyalogCoreViewmodelStickersVM ACStickersVM;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelStickersVM")