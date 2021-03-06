//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/ResponseSendEncryptedPackage.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseSendEncryptedPackage")
#ifdef RESTRICT_ImDiyalogCoreApiRpcResponseSendEncryptedPackage
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseSendEncryptedPackage 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseSendEncryptedPackage 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcResponseSendEncryptedPackage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseSendEncryptedPackage_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcResponseSendEncryptedPackage || defined(INCLUDE_ARResponseSendEncryptedPackage))
#define ARResponseSendEncryptedPackage_

#define RESTRICT_ImDiyalogCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/diyalog/core/network/parser/Response.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@class JavaLangInteger;
@class JavaLangLong;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseSendEncryptedPackage : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaLangInteger:(JavaLangInteger * __nullable)seq
                          withByteArray:(IOSByteArray * __nullable)state
                       withJavaLangLong:(JavaLangLong * __nullable)date
                       withJavaUtilList:(id<JavaUtilList> __nonnull)obsoleteKeyGroups
                       withJavaUtilList:(id<JavaUtilList> __nonnull)missedKeyGroups;

+ (ARResponseSendEncryptedPackage *)fromBytesWithByteArray:(IOSByteArray *)data;

- (JavaLangLong * __nullable)getDate;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getMissedKeyGroups;

- (id<JavaUtilList> __nonnull)getObsoleteKeyGroups;

- (JavaLangInteger * __nullable)getSeq;

- (IOSByteArray * __nullable)getState;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseSendEncryptedPackage)

inline jint ARResponseSendEncryptedPackage_get_HEADER();
#define ARResponseSendEncryptedPackage_HEADER 2664
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseSendEncryptedPackage, HEADER, jint)

FOUNDATION_EXPORT ARResponseSendEncryptedPackage *ARResponseSendEncryptedPackage_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseSendEncryptedPackage_initWithJavaLangInteger_withByteArray_withJavaLangLong_withJavaUtilList_withJavaUtilList_(ARResponseSendEncryptedPackage *self, JavaLangInteger *seq, IOSByteArray *state, JavaLangLong *date, id<JavaUtilList> obsoleteKeyGroups, id<JavaUtilList> missedKeyGroups);

FOUNDATION_EXPORT ARResponseSendEncryptedPackage *new_ARResponseSendEncryptedPackage_initWithJavaLangInteger_withByteArray_withJavaLangLong_withJavaUtilList_withJavaUtilList_(JavaLangInteger *seq, IOSByteArray *state, JavaLangLong *date, id<JavaUtilList> obsoleteKeyGroups, id<JavaUtilList> missedKeyGroups) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseSendEncryptedPackage *create_ARResponseSendEncryptedPackage_initWithJavaLangInteger_withByteArray_withJavaLangLong_withJavaUtilList_withJavaUtilList_(JavaLangInteger *seq, IOSByteArray *state, JavaLangLong *date, id<JavaUtilList> obsoleteKeyGroups, id<JavaUtilList> missedKeyGroups);

FOUNDATION_EXPORT void ARResponseSendEncryptedPackage_init(ARResponseSendEncryptedPackage *self);

FOUNDATION_EXPORT ARResponseSendEncryptedPackage *new_ARResponseSendEncryptedPackage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseSendEncryptedPackage *create_ARResponseSendEncryptedPackage_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseSendEncryptedPackage)

@compatibility_alias ImDiyalogCoreApiRpcResponseSendEncryptedPackage ARResponseSendEncryptedPackage;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseSendEncryptedPackage")
