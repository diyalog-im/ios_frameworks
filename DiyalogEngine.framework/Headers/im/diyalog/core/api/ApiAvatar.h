//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiAvatar.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiAvatar")
#ifdef RESTRICT_ImDiyalogCoreApiApiAvatar
#define INCLUDE_ALL_ImDiyalogCoreApiApiAvatar 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiAvatar 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiAvatar

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiAvatar_) && (INCLUDE_ALL_ImDiyalogCoreApiApiAvatar || defined(INCLUDE_ARApiAvatar))
#define ARApiAvatar_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARApiAvatarImage;
@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiAvatar : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiAvatarImage:(ARApiAvatarImage * __nullable)smallImage
                    withARApiAvatarImage:(ARApiAvatarImage * __nullable)largeImage
                    withARApiAvatarImage:(ARApiAvatarImage * __nullable)fullImage;

- (ARApiAvatarImage * __nullable)getFullImage;

- (ARApiAvatarImage * __nullable)getLargeImage;

- (ARApiAvatarImage * __nullable)getSmallImage;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiAvatar)

FOUNDATION_EXPORT void ARApiAvatar_initWithARApiAvatarImage_withARApiAvatarImage_withARApiAvatarImage_(ARApiAvatar *self, ARApiAvatarImage *smallImage, ARApiAvatarImage *largeImage, ARApiAvatarImage *fullImage);

FOUNDATION_EXPORT ARApiAvatar *new_ARApiAvatar_initWithARApiAvatarImage_withARApiAvatarImage_withARApiAvatarImage_(ARApiAvatarImage *smallImage, ARApiAvatarImage *largeImage, ARApiAvatarImage *fullImage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiAvatar *create_ARApiAvatar_initWithARApiAvatarImage_withARApiAvatarImage_withARApiAvatarImage_(ARApiAvatarImage *smallImage, ARApiAvatarImage *largeImage, ARApiAvatarImage *fullImage);

FOUNDATION_EXPORT void ARApiAvatar_init(ARApiAvatar *self);

FOUNDATION_EXPORT ARApiAvatar *new_ARApiAvatar_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiAvatar *create_ARApiAvatar_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiAvatar)

@compatibility_alias ImDiyalogCoreApiApiAvatar ARApiAvatar;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiAvatar")
