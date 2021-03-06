//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiEncryptionKeyGroup.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiEncryptionKeyGroup")
#ifdef RESTRICT_ImDiyalogCoreApiApiEncryptionKeyGroup
#define INCLUDE_ALL_ImDiyalogCoreApiApiEncryptionKeyGroup 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiEncryptionKeyGroup 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiEncryptionKeyGroup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiEncryptionKeyGroup_) && (INCLUDE_ALL_ImDiyalogCoreApiApiEncryptionKeyGroup || defined(INCLUDE_ARApiEncryptionKeyGroup))
#define ARApiEncryptionKeyGroup_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARApiEncryptionKey;
@class ARBserValues;
@class ARBserWriter;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiEncryptionKeyGroup : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)keyGroupId
           withJavaUtilList:(id<JavaUtilList> __nonnull)supportedEncryption
     withARApiEncryptionKey:(ARApiEncryptionKey * __nonnull)identityKey
           withJavaUtilList:(id<JavaUtilList> __nonnull)keys
           withJavaUtilList:(id<JavaUtilList> __nonnull)signatures;

- (ARApiEncryptionKey * __nonnull)getIdentityKey;

- (jint)getKeyGroupId;

- (id<JavaUtilList> __nonnull)getKeys;

- (id<JavaUtilList> __nonnull)getSignatures;

- (id<JavaUtilList> __nonnull)getSupportedEncryption;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiEncryptionKeyGroup)

FOUNDATION_EXPORT void ARApiEncryptionKeyGroup_initWithInt_withJavaUtilList_withARApiEncryptionKey_withJavaUtilList_withJavaUtilList_(ARApiEncryptionKeyGroup *self, jint keyGroupId, id<JavaUtilList> supportedEncryption, ARApiEncryptionKey *identityKey, id<JavaUtilList> keys, id<JavaUtilList> signatures);

FOUNDATION_EXPORT ARApiEncryptionKeyGroup *new_ARApiEncryptionKeyGroup_initWithInt_withJavaUtilList_withARApiEncryptionKey_withJavaUtilList_withJavaUtilList_(jint keyGroupId, id<JavaUtilList> supportedEncryption, ARApiEncryptionKey *identityKey, id<JavaUtilList> keys, id<JavaUtilList> signatures) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiEncryptionKeyGroup *create_ARApiEncryptionKeyGroup_initWithInt_withJavaUtilList_withARApiEncryptionKey_withJavaUtilList_withJavaUtilList_(jint keyGroupId, id<JavaUtilList> supportedEncryption, ARApiEncryptionKey *identityKey, id<JavaUtilList> keys, id<JavaUtilList> signatures);

FOUNDATION_EXPORT void ARApiEncryptionKeyGroup_init(ARApiEncryptionKeyGroup *self);

FOUNDATION_EXPORT ARApiEncryptionKeyGroup *new_ARApiEncryptionKeyGroup_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiEncryptionKeyGroup *create_ARApiEncryptionKeyGroup_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiEncryptionKeyGroup)

@compatibility_alias ImDiyalogCoreApiApiEncryptionKeyGroup ARApiEncryptionKeyGroup;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiEncryptionKeyGroup")
