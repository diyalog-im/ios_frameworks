//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/ResponseCreateGroup.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseCreateGroup")
#ifdef RESTRICT_ImDiyalogCoreApiRpcResponseCreateGroup
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseCreateGroup 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcResponseCreateGroup 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcResponseCreateGroup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARResponseCreateGroup_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcResponseCreateGroup || defined(INCLUDE_ARResponseCreateGroup))
#define ARResponseCreateGroup_

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

@interface ARResponseCreateGroup : ACResponse

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)seq
              withByteArray:(IOSByteArray * __nonnull)state
             withARApiGroup:(ARApiGroup * __nonnull)group
           withJavaUtilList:(id<JavaUtilList> __nonnull)users;

+ (ARResponseCreateGroup *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiGroup * __nonnull)getGroup;

- (jint)getHeaderKey;

- (jint)getSeq;

- (IOSByteArray * __nonnull)getState;

- (id<JavaUtilList> __nonnull)getUsers;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARResponseCreateGroup)

inline jint ARResponseCreateGroup_get_HEADER();
#define ARResponseCreateGroup_HEADER 216
J2OBJC_STATIC_FIELD_CONSTANT(ARResponseCreateGroup, HEADER, jint)

FOUNDATION_EXPORT ARResponseCreateGroup *ARResponseCreateGroup_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARResponseCreateGroup_initWithInt_withByteArray_withARApiGroup_withJavaUtilList_(ARResponseCreateGroup *self, jint seq, IOSByteArray *state, ARApiGroup *group, id<JavaUtilList> users);

FOUNDATION_EXPORT ARResponseCreateGroup *new_ARResponseCreateGroup_initWithInt_withByteArray_withARApiGroup_withJavaUtilList_(jint seq, IOSByteArray *state, ARApiGroup *group, id<JavaUtilList> users) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseCreateGroup *create_ARResponseCreateGroup_initWithInt_withByteArray_withARApiGroup_withJavaUtilList_(jint seq, IOSByteArray *state, ARApiGroup *group, id<JavaUtilList> users);

FOUNDATION_EXPORT void ARResponseCreateGroup_init(ARResponseCreateGroup *self);

FOUNDATION_EXPORT ARResponseCreateGroup *new_ARResponseCreateGroup_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARResponseCreateGroup *create_ARResponseCreateGroup_init();

J2OBJC_TYPE_LITERAL_HEADER(ARResponseCreateGroup)

@compatibility_alias ImDiyalogCoreApiRpcResponseCreateGroup ARResponseCreateGroup;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcResponseCreateGroup")
