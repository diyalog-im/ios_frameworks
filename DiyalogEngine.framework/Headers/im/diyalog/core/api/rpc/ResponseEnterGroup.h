//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/ResponseEnterGroup.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseEnterGroup")
#ifdef RESTRICT_ImDiyalogCoreApiRpcResponseEnterGroup
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseEnterGroup 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseEnterGroup 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcResponseEnterGroup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseEnterGroup_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcResponseEnterGroup || defined(INCLUDE_ARResponseEnterGroup))
#define ARResponseEnterGroup_

#define RESTRICT_ImDiyalogCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/diyalog/core/network/parser/Response.h"

@class ARApiGroup;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseEnterGroup : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiGroup:(ARApiGroup * __nonnull)group
                  withJavaUtilList:(id<JavaUtilList> __nonnull)users
                          withLong:(jlong)rid
                           withInt:(jint)seq
                     withByteArray:(IOSByteArray * __nonnull)state
                          withLong:(jlong)date;

+ (ARResponseEnterGroup *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDate;

- (ARApiGroup * __nonnull)getGroup;

- (jint)getHeaderKey;

- (jlong)getRid;

- (jint)getSeq;

- (IOSByteArray * __nonnull)getState;

- (id<JavaUtilList> __nonnull)getUsers;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseEnterGroup)

inline jint ARResponseEnterGroup_get_HEADER();
#define ARResponseEnterGroup_HEADER 200
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseEnterGroup, HEADER, jint)

FOUNDATION_EXPORT ARResponseEnterGroup *ARResponseEnterGroup_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseEnterGroup_initWithARApiGroup_withJavaUtilList_withLong_withInt_withByteArray_withLong_(ARResponseEnterGroup *self, ARApiGroup *group, id<JavaUtilList> users, jlong rid, jint seq, IOSByteArray *state, jlong date);

FOUNDATION_EXPORT ARResponseEnterGroup *new_ARResponseEnterGroup_initWithARApiGroup_withJavaUtilList_withLong_withInt_withByteArray_withLong_(ARApiGroup *group, id<JavaUtilList> users, jlong rid, jint seq, IOSByteArray *state, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseEnterGroup *create_ARResponseEnterGroup_initWithARApiGroup_withJavaUtilList_withLong_withInt_withByteArray_withLong_(ARApiGroup *group, id<JavaUtilList> users, jlong rid, jint seq, IOSByteArray *state, jlong date);

FOUNDATION_EXPORT void ARResponseEnterGroup_init(ARResponseEnterGroup *self);

FOUNDATION_EXPORT ARResponseEnterGroup *new_ARResponseEnterGroup_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseEnterGroup *create_ARResponseEnterGroup_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseEnterGroup)

@compatibility_alias ImDiyalogCoreApiRpcResponseEnterGroup ARResponseEnterGroup;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseEnterGroup")
