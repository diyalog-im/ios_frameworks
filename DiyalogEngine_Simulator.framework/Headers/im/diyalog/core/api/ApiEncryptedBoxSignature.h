//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiEncryptedBoxSignature.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiEncryptedBoxSignature")
#ifdef RESTRICT_ImDiyalogCoreApiApiEncryptedBoxSignature
#define INCLUDE_ALL_ImDiyalogCoreApiApiEncryptedBoxSignature 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiEncryptedBoxSignature 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiEncryptedBoxSignature

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiEncryptedBoxSignature_) && (INCLUDE_ALL_ImDiyalogCoreApiApiEncryptedBoxSignature || defined(INCLUDE_ARApiEncryptedBoxSignature))
#define ARApiEncryptedBoxSignature_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiEncryptedBoxSignature : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)algType
                   withByteArray:(IOSByteArray * __nonnull)signature;

- (NSString * __nonnull)getAlgType;

- (IOSByteArray * __nonnull)getSignature;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiEncryptedBoxSignature)

FOUNDATION_EXPORT void ARApiEncryptedBoxSignature_initWithNSString_withByteArray_(ARApiEncryptedBoxSignature *self, NSString *algType, IOSByteArray *signature);

FOUNDATION_EXPORT ARApiEncryptedBoxSignature *new_ARApiEncryptedBoxSignature_initWithNSString_withByteArray_(NSString *algType, IOSByteArray *signature) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiEncryptedBoxSignature *create_ARApiEncryptedBoxSignature_initWithNSString_withByteArray_(NSString *algType, IOSByteArray *signature);

FOUNDATION_EXPORT void ARApiEncryptedBoxSignature_init(ARApiEncryptedBoxSignature *self);

FOUNDATION_EXPORT ARApiEncryptedBoxSignature *new_ARApiEncryptedBoxSignature_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiEncryptedBoxSignature *create_ARApiEncryptedBoxSignature_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiEncryptedBoxSignature)

@compatibility_alias ImDiyalogCoreApiApiEncryptedBoxSignature ARApiEncryptedBoxSignature;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiEncryptedBoxSignature")
