//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/stickers/StickersActor.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesStickersStickersActor")
#ifdef RESTRICT_ImDiyalogCoreModulesStickersStickersActor
#define INCLUDE_ALL_ImDiyalogCoreModulesStickersStickersActor 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesStickersStickersActor 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesStickersStickersActor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesStickersStickersActor_) && (INCLUDE_ALL_ImDiyalogCoreModulesStickersStickersActor || defined(INCLUDE_ImDiyalogCoreModulesStickersStickersActor))
#define ImDiyalogCoreModulesStickersStickersActor_

#define RESTRICT_ImDiyalogCoreModulesModuleActor 1
#define INCLUDE_ACModuleActor 1
#include "../../../../../im/diyalog/core/modules/ModuleActor.h"

@protocol ACModuleContext;

@interface ImDiyalogCoreModulesStickersStickersActor : ACModuleActor

#pragma mark Public

- (instancetype)initWithACModuleContext:(id<ACModuleContext>)context;

- (void)onReceiveWithId:(id)message;

- (void)preStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesStickersStickersActor)

FOUNDATION_EXPORT void ImDiyalogCoreModulesStickersStickersActor_initWithACModuleContext_(ImDiyalogCoreModulesStickersStickersActor *self, id<ACModuleContext> context);

FOUNDATION_EXPORT ImDiyalogCoreModulesStickersStickersActor *new_ImDiyalogCoreModulesStickersStickersActor_initWithACModuleContext_(id<ACModuleContext> context) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesStickersStickersActor *create_ImDiyalogCoreModulesStickersStickersActor_initWithACModuleContext_(id<ACModuleContext> context);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesStickersStickersActor)

#endif

#if !defined (ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesStickersStickersActor || defined(INCLUDE_ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged))
#define ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged_

@protocol JavaUtilList;

@interface ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged : NSObject

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)ownStickers;

- (id<JavaUtilList>)getOwnStickers;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged_initWithJavaUtilList_(ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged *self, id<JavaUtilList> ownStickers);

FOUNDATION_EXPORT ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged *new_ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged_initWithJavaUtilList_(id<JavaUtilList> ownStickers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged *create_ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged_initWithJavaUtilList_(id<JavaUtilList> ownStickers);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesStickersStickersActor_OwnStickerCollectionsChanged)

#endif

#if !defined (ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged_) && (INCLUDE_ALL_ImDiyalogCoreModulesStickersStickersActor || defined(INCLUDE_ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged))
#define ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged_

@protocol JavaUtilList;

@interface ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged : NSObject

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)updated;

- (id<JavaUtilList>)getUpdated;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged)

FOUNDATION_EXPORT void ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged_initWithJavaUtilList_(ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged *self, id<JavaUtilList> updated);

FOUNDATION_EXPORT ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged *new_ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged_initWithJavaUtilList_(id<JavaUtilList> updated) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged *create_ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged_initWithJavaUtilList_(id<JavaUtilList> updated);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesStickersStickersActor_StickerCollectionsChanged)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesStickersStickersActor")
