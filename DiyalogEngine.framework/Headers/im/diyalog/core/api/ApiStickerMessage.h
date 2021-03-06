//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiStickerMessage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiStickerMessage")
#ifdef RESTRICT_ImDiyalogCoreApiApiStickerMessage
#define INCLUDE_ALL_ImDiyalogCoreApiApiStickerMessage 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiStickerMessage 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiStickerMessage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiStickerMessage_) && (INCLUDE_ALL_ImDiyalogCoreApiApiStickerMessage || defined(INCLUDE_ARApiStickerMessage))
#define ARApiStickerMessage_

#define RESTRICT_ImDiyalogCoreApiApiMessage 1
#define INCLUDE_ARApiMessage 1
#include "../../../../im/diyalog/core/api/ApiMessage.h"

@class ARApiImageLocation;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class JavaLangInteger;
@class JavaLangLong;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiStickerMessage : ARApiMessage

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaLangInteger:(JavaLangInteger * __nullable)stickerId
                          withByteArray:(IOSByteArray * __nullable)fastPreview
                 withARApiImageLocation:(ARApiImageLocation * __nullable)image512
                 withARApiImageLocation:(ARApiImageLocation * __nullable)image256
                    withJavaLangInteger:(JavaLangInteger * __nullable)stickerCollectionId
                       withJavaLangLong:(JavaLangLong * __nullable)stickerCollectionAccessHash;

- (IOSByteArray * __nullable)getFastPreview;

- (jint)getHeader;

- (ARApiImageLocation * __nullable)getImage256;

- (ARApiImageLocation * __nullable)getImage512;

- (JavaLangLong * __nullable)getStickerCollectionAccessHash;

- (JavaLangInteger * __nullable)getStickerCollectionId;

- (JavaLangInteger * __nullable)getStickerId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiStickerMessage)

FOUNDATION_EXPORT void ARApiStickerMessage_initWithJavaLangInteger_withByteArray_withARApiImageLocation_withARApiImageLocation_withJavaLangInteger_withJavaLangLong_(ARApiStickerMessage *self, JavaLangInteger *stickerId, IOSByteArray *fastPreview, ARApiImageLocation *image512, ARApiImageLocation *image256, JavaLangInteger *stickerCollectionId, JavaLangLong *stickerCollectionAccessHash);

FOUNDATION_EXPORT ARApiStickerMessage *new_ARApiStickerMessage_initWithJavaLangInteger_withByteArray_withARApiImageLocation_withARApiImageLocation_withJavaLangInteger_withJavaLangLong_(JavaLangInteger *stickerId, IOSByteArray *fastPreview, ARApiImageLocation *image512, ARApiImageLocation *image256, JavaLangInteger *stickerCollectionId, JavaLangLong *stickerCollectionAccessHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiStickerMessage *create_ARApiStickerMessage_initWithJavaLangInteger_withByteArray_withARApiImageLocation_withARApiImageLocation_withJavaLangInteger_withJavaLangLong_(JavaLangInteger *stickerId, IOSByteArray *fastPreview, ARApiImageLocation *image512, ARApiImageLocation *image256, JavaLangInteger *stickerCollectionId, JavaLangLong *stickerCollectionAccessHash);

FOUNDATION_EXPORT void ARApiStickerMessage_init(ARApiStickerMessage *self);

FOUNDATION_EXPORT ARApiStickerMessage *new_ARApiStickerMessage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiStickerMessage *create_ARApiStickerMessage_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiStickerMessage)

@compatibility_alias ImDiyalogCoreApiApiStickerMessage ARApiStickerMessage;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiStickerMessage")
