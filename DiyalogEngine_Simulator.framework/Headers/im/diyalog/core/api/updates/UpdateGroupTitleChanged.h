//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateGroupTitleChanged.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupTitleChanged")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateGroupTitleChanged
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupTitleChanged 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupTitleChanged 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateGroupTitleChanged

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateGroupTitleChanged_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupTitleChanged || defined(INCLUDE_ARUpdateGroupTitleChanged))
#define ARUpdateGroupTitleChanged_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateGroupTitleChanged : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)groupId
                   withLong:(jlong)rid
                    withInt:(jint)uid
               withNSString:(NSString * __nonnull)title
                   withLong:(jlong)date;

+ (ARUpdateGroupTitleChanged *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jlong)getDate;

- (jint)getGroupId;

- (jint)getHeaderKey;

- (jlong)getRid;

- (NSString * __nonnull)getTitle;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateGroupTitleChanged)

inline jint ARUpdateGroupTitleChanged_get_HEADER();
#define ARUpdateGroupTitleChanged_HEADER 38
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateGroupTitleChanged, HEADER, jint)

FOUNDATION_EXPORT ARUpdateGroupTitleChanged *ARUpdateGroupTitleChanged_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateGroupTitleChanged_initWithInt_withLong_withInt_withNSString_withLong_(ARUpdateGroupTitleChanged *self, jint groupId, jlong rid, jint uid, NSString *title, jlong date);

FOUNDATION_EXPORT ARUpdateGroupTitleChanged *new_ARUpdateGroupTitleChanged_initWithInt_withLong_withInt_withNSString_withLong_(jint groupId, jlong rid, jint uid, NSString *title, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupTitleChanged *create_ARUpdateGroupTitleChanged_initWithInt_withLong_withInt_withNSString_withLong_(jint groupId, jlong rid, jint uid, NSString *title, jlong date);

FOUNDATION_EXPORT void ARUpdateGroupTitleChanged_init(ARUpdateGroupTitleChanged *self);

FOUNDATION_EXPORT ARUpdateGroupTitleChanged *new_ARUpdateGroupTitleChanged_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupTitleChanged *create_ARUpdateGroupTitleChanged_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateGroupTitleChanged)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateGroupTitleChanged ARUpdateGroupTitleChanged;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupTitleChanged")
