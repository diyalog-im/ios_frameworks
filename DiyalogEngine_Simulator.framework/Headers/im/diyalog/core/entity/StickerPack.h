//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/StickerPack.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityStickerPack")
#ifdef RESTRICT_ImDiyalogCoreEntityStickerPack
#define INCLUDE_ALL_ImDiyalogCoreEntityStickerPack 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityStickerPack 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityStickerPack

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACStickerPack_) && (INCLUDE_ALL_ImDiyalogCoreEntityStickerPack || defined(INCLUDE_ACStickerPack))
#define ACStickerPack_

#define RESTRICT_ImDiyalogCoreEntityWrapperEntity 1
#define INCLUDE_ACWrapperEntity 1
#include "../../../../im/diyalog/core/entity/WrapperEntity.h"

@class ARApiStickerCollection;
@class IOSByteArray;
@protocol ARBserCreator;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ACStickerPack : ACWrapperEntity
@property (readonly, nonatomic) jint id_;
@property (readonly, nonatomic, getter=getAccessHash) jlong accessHash;
@property (readonly, nonatomic, getter=getStickers) id<JavaUtilList> stickers;

+ (id<ARBserCreator>)CREATOR;

#pragma mark Public

- (instancetype)initWithARApiStickerCollection:(ARApiStickerCollection * __nonnull)wrappedPack;

- (instancetype)initWithByteArray:(IOSByteArray * __nonnull)data;

- (jlong)getAccessHash;

- (jint)getId;

- (id<JavaUtilList> __nonnull)getStickers;

#pragma mark Protected

- (void)applyWrappedWithARBserObject:(ARApiStickerCollection * __nonnull)wrapped;

- (ARApiStickerCollection * __nonnull)createInstance;

@end

J2OBJC_STATIC_INIT(ACStickerPack)

inline id<ARBserCreator> ACStickerPack_get_CREATOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARBserCreator> ACStickerPack_CREATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACStickerPack, CREATOR, id<ARBserCreator>)

FOUNDATION_EXPORT void ACStickerPack_initWithARApiStickerCollection_(ACStickerPack *self, ARApiStickerCollection *wrappedPack);

FOUNDATION_EXPORT ACStickerPack *new_ACStickerPack_initWithARApiStickerCollection_(ARApiStickerCollection *wrappedPack) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACStickerPack *create_ACStickerPack_initWithARApiStickerCollection_(ARApiStickerCollection *wrappedPack);

FOUNDATION_EXPORT void ACStickerPack_initWithByteArray_(ACStickerPack *self, IOSByteArray *data);

FOUNDATION_EXPORT ACStickerPack *new_ACStickerPack_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACStickerPack *create_ACStickerPack_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ACStickerPack)

@compatibility_alias ImDiyalogCoreEntityStickerPack ACStickerPack;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityStickerPack")
