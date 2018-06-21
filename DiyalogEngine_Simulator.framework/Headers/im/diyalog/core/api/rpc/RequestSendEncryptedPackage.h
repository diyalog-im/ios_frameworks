//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestSendEncryptedPackage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSendEncryptedPackage")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestSendEncryptedPackage
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSendEncryptedPackage 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSendEncryptedPackage 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestSendEncryptedPackage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestSendEncryptedPackage_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSendEncryptedPackage || defined(INCLUDE_ARRequestSendEncryptedPackage))
#define ARRequestSendEncryptedPackage_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiEncryptedBox;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestSendEncryptedPackage : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)randomId
            withJavaUtilList:(id<JavaUtilList> __nonnull)destPeers
            withJavaUtilList:(id<JavaUtilList> __nonnull)ignoredKeyGroups
       withARApiEncryptedBox:(ARApiEncryptedBox * __nonnull)encryptedBox;

+ (ARRequestSendEncryptedPackage *)fromBytesWithByteArray:(IOSByteArray *)data;

- (id<JavaUtilList> __nonnull)getDestPeers;

- (ARApiEncryptedBox * __nonnull)getEncryptedBox;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getIgnoredKeyGroups;

- (jlong)getRandomId;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestSendEncryptedPackage)

inline jint ARRequestSendEncryptedPackage_get_HEADER();
#define ARRequestSendEncryptedPackage_HEADER 2657
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestSendEncryptedPackage, HEADER, jint)

FOUNDATION_EXPORT ARRequestSendEncryptedPackage *ARRequestSendEncryptedPackage_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestSendEncryptedPackage_initWithLong_withJavaUtilList_withJavaUtilList_withARApiEncryptedBox_(ARRequestSendEncryptedPackage *self, jlong randomId, id<JavaUtilList> destPeers, id<JavaUtilList> ignoredKeyGroups, ARApiEncryptedBox *encryptedBox);

FOUNDATION_EXPORT ARRequestSendEncryptedPackage *new_ARRequestSendEncryptedPackage_initWithLong_withJavaUtilList_withJavaUtilList_withARApiEncryptedBox_(jlong randomId, id<JavaUtilList> destPeers, id<JavaUtilList> ignoredKeyGroups, ARApiEncryptedBox *encryptedBox) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSendEncryptedPackage *create_ARRequestSendEncryptedPackage_initWithLong_withJavaUtilList_withJavaUtilList_withARApiEncryptedBox_(jlong randomId, id<JavaUtilList> destPeers, id<JavaUtilList> ignoredKeyGroups, ARApiEncryptedBox *encryptedBox);

FOUNDATION_EXPORT void ARRequestSendEncryptedPackage_init(ARRequestSendEncryptedPackage *self);

FOUNDATION_EXPORT ARRequestSendEncryptedPackage *new_ARRequestSendEncryptedPackage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestSendEncryptedPackage *create_ARRequestSendEncryptedPackage_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestSendEncryptedPackage)

@compatibility_alias ImDiyalogCoreApiRpcRequestSendEncryptedPackage ARRequestSendEncryptedPackage;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestSendEncryptedPackage")