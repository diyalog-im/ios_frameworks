//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateGroupAvatarChanged.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupAvatarChanged")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateGroupAvatarChanged
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupAvatarChanged 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupAvatarChanged 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateGroupAvatarChanged

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateGroupAvatarChanged_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupAvatarChanged || defined(INCLUDE_ARUpdateGroupAvatarChanged))
#define ARUpdateGroupAvatarChanged_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARApiAvatar;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateGroupAvatarChanged : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)groupId
                   withLong:(jlong)rid
                    withInt:(jint)uid
            withARApiAvatar:(ARApiAvatar * __nullable)avatar
                   withLong:(jlong)date;

+ (ARUpdateGroupAvatarChanged *)fromBytesWithByteArray:(IOSByteArray *)data;

- (ARApiAvatar * __nullable)getAvatar;

- (jlong)getDate;

- (jint)getGroupId;

- (jint)getHeaderKey;

- (jlong)getRid;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateGroupAvatarChanged)

inline jint ARUpdateGroupAvatarChanged_get_HEADER();
#define ARUpdateGroupAvatarChanged_HEADER 39
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateGroupAvatarChanged, HEADER, jint)

FOUNDATION_EXPORT ARUpdateGroupAvatarChanged *ARUpdateGroupAvatarChanged_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateGroupAvatarChanged_initWithInt_withLong_withInt_withARApiAvatar_withLong_(ARUpdateGroupAvatarChanged *self, jint groupId, jlong rid, jint uid, ARApiAvatar *avatar, jlong date);

FOUNDATION_EXPORT ARUpdateGroupAvatarChanged *new_ARUpdateGroupAvatarChanged_initWithInt_withLong_withInt_withARApiAvatar_withLong_(jint groupId, jlong rid, jint uid, ARApiAvatar *avatar, jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupAvatarChanged *create_ARUpdateGroupAvatarChanged_initWithInt_withLong_withInt_withARApiAvatar_withLong_(jint groupId, jlong rid, jint uid, ARApiAvatar *avatar, jlong date);

FOUNDATION_EXPORT void ARUpdateGroupAvatarChanged_init(ARUpdateGroupAvatarChanged *self);

FOUNDATION_EXPORT ARUpdateGroupAvatarChanged *new_ARUpdateGroupAvatarChanged_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupAvatarChanged *create_ARUpdateGroupAvatarChanged_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateGroupAvatarChanged)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateGroupAvatarChanged ARUpdateGroupAvatarChanged;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupAvatarChanged")