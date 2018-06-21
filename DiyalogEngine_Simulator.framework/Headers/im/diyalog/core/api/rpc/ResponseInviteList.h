//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/ResponseInviteList.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseInviteList")
#ifdef RESTRICT_ImDiyalogCoreApiRpcResponseInviteList
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseInviteList 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseInviteList 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcResponseInviteList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseInviteList_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcResponseInviteList || defined(INCLUDE_ARResponseInviteList))
#define ARResponseInviteList_

#define RESTRICT_ImDiyalogCoreNetworkParserResponse 1
#define INCLUDE_ACResponse 1
#include "../../../../../im/diyalog/core/network/parser/Response.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARResponseInviteList : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList> __nonnull)invites
                    withJavaUtilList:(id<JavaUtilList> __nonnull)relatedUsers
                    withJavaUtilList:(id<JavaUtilList> __nonnull)relatedGroups
                    withJavaUtilList:(id<JavaUtilList> __nonnull)relatedTeams;

+ (ARResponseInviteList *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (id<JavaUtilList> __nonnull)getInvites;

- (id<JavaUtilList> __nonnull)getRelatedGroups;

- (id<JavaUtilList> __nonnull)getRelatedTeams;

- (id<JavaUtilList> __nonnull)getRelatedUsers;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseInviteList)

inline jint ARResponseInviteList_get_HEADER();
#define ARResponseInviteList_HEADER 2564
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseInviteList, HEADER, jint)

FOUNDATION_EXPORT ARResponseInviteList *ARResponseInviteList_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseInviteList_initWithJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaUtilList_(ARResponseInviteList *self, id<JavaUtilList> invites, id<JavaUtilList> relatedUsers, id<JavaUtilList> relatedGroups, id<JavaUtilList> relatedTeams);

FOUNDATION_EXPORT ARResponseInviteList *new_ARResponseInviteList_initWithJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaUtilList_(id<JavaUtilList> invites, id<JavaUtilList> relatedUsers, id<JavaUtilList> relatedGroups, id<JavaUtilList> relatedTeams) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseInviteList *create_ARResponseInviteList_initWithJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaUtilList_(id<JavaUtilList> invites, id<JavaUtilList> relatedUsers, id<JavaUtilList> relatedGroups, id<JavaUtilList> relatedTeams);

FOUNDATION_EXPORT void ARResponseInviteList_init(ARResponseInviteList *self);

FOUNDATION_EXPORT ARResponseInviteList *new_ARResponseInviteList_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseInviteList *create_ARResponseInviteList_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseInviteList)

@compatibility_alias ImDiyalogCoreApiRpcResponseInviteList ARResponseInviteList;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseInviteList")