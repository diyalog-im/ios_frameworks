//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/base/FatSeqUpdate.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiBaseFatSeqUpdate")
#ifdef RESTRICT_ImDiyalogCoreApiBaseFatSeqUpdate
#define INCLUDE_ALL_ImDiyalogCoreApiBaseFatSeqUpdate 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiBaseFatSeqUpdate 1
#endif
#undef RESTRICT_ImDiyalogCoreApiBaseFatSeqUpdate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARFatSeqUpdate_) && (INCLUDE_ALL_ImDiyalogCoreApiBaseFatSeqUpdate || defined(INCLUDE_ARFatSeqUpdate))
#define ARFatSeqUpdate_

#define RESTRICT_ImDiyalogCoreNetworkParserRpcScope 1
#define INCLUDE_ACRpcScope 1
#include "../../../../../im/diyalog/core/network/parser/RpcScope.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol JavaUtilList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARFatSeqUpdate : ACRpcScope

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)seq
              withByteArray:(IOSByteArray * __nonnull)state
                    withInt:(jint)updateHeader
              withByteArray:(IOSByteArray * __nonnull)update
           withJavaUtilList:(id<JavaUtilList> __nonnull)users
           withJavaUtilList:(id<JavaUtilList> __nonnull)groups;

+ (ARFatSeqUpdate *)fromBytesWithByteArray:(IOSByteArray *)data;

- (id<JavaUtilList> __nonnull)getGroups;

- (jint)getHeaderKey;

- (jint)getSeq;

- (IOSByteArray * __nonnull)getState;

- (IOSByteArray * __nonnull)getUpdate;

- (jint)getUpdateHeader;

- (id<JavaUtilList> __nonnull)getUsers;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARFatSeqUpdate)

inline jint ARFatSeqUpdate_get_HEADER();
#define ARFatSeqUpdate_HEADER 73
J2OBJC_STATIC_FIELD_CONSTANT(ARFatSeqUpdate, HEADER, jint)

FOUNDATION_EXPORT ARFatSeqUpdate *ARFatSeqUpdate_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARFatSeqUpdate_initWithInt_withByteArray_withInt_withByteArray_withJavaUtilList_withJavaUtilList_(ARFatSeqUpdate *self, jint seq, IOSByteArray *state, jint updateHeader, IOSByteArray *update, id<JavaUtilList> users, id<JavaUtilList> groups);

FOUNDATION_EXPORT ARFatSeqUpdate *new_ARFatSeqUpdate_initWithInt_withByteArray_withInt_withByteArray_withJavaUtilList_withJavaUtilList_(jint seq, IOSByteArray *state, jint updateHeader, IOSByteArray *update, id<JavaUtilList> users, id<JavaUtilList> groups) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARFatSeqUpdate *create_ARFatSeqUpdate_initWithInt_withByteArray_withInt_withByteArray_withJavaUtilList_withJavaUtilList_(jint seq, IOSByteArray *state, jint updateHeader, IOSByteArray *update, id<JavaUtilList> users, id<JavaUtilList> groups);

FOUNDATION_EXPORT void ARFatSeqUpdate_init(ARFatSeqUpdate *self);

FOUNDATION_EXPORT ARFatSeqUpdate *new_ARFatSeqUpdate_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARFatSeqUpdate *create_ARFatSeqUpdate_init();

J2OBJC_TYPE_LITERAL_HEADER(ARFatSeqUpdate)

@compatibility_alias ImDiyalogCoreApiBaseFatSeqUpdate ARFatSeqUpdate;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiBaseFatSeqUpdate")
