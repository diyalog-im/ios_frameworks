//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiAvatarImage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiAvatarImage")
#ifdef RESTRICT_ImDiyalogCoreApiApiAvatarImage
#define INCLUDE_ALL_ImDiyalogCoreApiApiAvatarImage 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiAvatarImage 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiAvatarImage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiAvatarImage_) && (INCLUDE_ALL_ImDiyalogCoreApiApiAvatarImage || defined(INCLUDE_ARApiAvatarImage))
#define ARApiAvatarImage_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARApiFileLocation;
@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiAvatarImage : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiFileLocation:(ARApiFileLocation * __nonnull)fileLocation
                                  withInt:(jint)width
                                  withInt:(jint)height
                                  withInt:(jint)fileSize;

- (ARApiFileLocation * __nonnull)getFileLocation;

- (jint)getFileSize;

- (jint)getHeight;

- (jint)getWidth;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiAvatarImage)

FOUNDATION_EXPORT void ARApiAvatarImage_initWithARApiFileLocation_withInt_withInt_withInt_(ARApiAvatarImage *self, ARApiFileLocation *fileLocation, jint width, jint height, jint fileSize);

FOUNDATION_EXPORT ARApiAvatarImage *new_ARApiAvatarImage_initWithARApiFileLocation_withInt_withInt_withInt_(ARApiFileLocation *fileLocation, jint width, jint height, jint fileSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiAvatarImage *create_ARApiAvatarImage_initWithARApiFileLocation_withInt_withInt_withInt_(ARApiFileLocation *fileLocation, jint width, jint height, jint fileSize);

FOUNDATION_EXPORT void ARApiAvatarImage_init(ARApiAvatarImage *self);

FOUNDATION_EXPORT ARApiAvatarImage *new_ARApiAvatarImage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiAvatarImage *create_ARApiAvatarImage_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiAvatarImage)

@compatibility_alias ImDiyalogCoreApiApiAvatarImage ARApiAvatarImage;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiAvatarImage")