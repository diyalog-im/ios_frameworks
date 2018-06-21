//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/encryption/PeerSession.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityEncryptionPeerSession")
#ifdef RESTRICT_ImDiyalogCoreEntityEncryptionPeerSession
#define INCLUDE_ALL_ImDiyalogCoreEntityEncryptionPeerSession 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityEncryptionPeerSession 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityEncryptionPeerSession

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreEntityEncryptionPeerSession_) && (INCLUDE_ALL_ImDiyalogCoreEntityEncryptionPeerSession || defined(INCLUDE_ImDiyalogCoreEntityEncryptionPeerSession))
#define ImDiyalogCoreEntityEncryptionPeerSession_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../im/diyalog/runtime/bser/BserObject.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;
@protocol ARPredicate;
@protocol JavaUtilComparator;

@interface ImDiyalogCoreEntityEncryptionPeerSession : ARBserObject

+ (id<JavaUtilComparator>)COMPARATOR;

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithLong:(jlong)sid
                     withInt:(jint)uid
                     withInt:(jint)ownKeyGroupId
                     withInt:(jint)theirKeyGroupId
                    withLong:(jlong)ownPreKeyId
                    withLong:(jlong)theirPreKeyId
               withByteArray:(IOSByteArray *)masterKey;

+ (id<ARPredicate>)BY_IDSWithInt:(jint)theirKeyGroupId
                        withLong:(jlong)ownPreKeyId
                        withLong:(jlong)theirPreKeyId;

+ (id<ARPredicate>)BY_THEIR_GROUPWithInt:(jint)theirKeyGroupId;

- (IOSByteArray *)getMasterKey;

- (jint)getOwnKeyGroupId;

- (jlong)getOwnPreKeyId;

- (jlong)getSid;

- (jint)getTheirKeyGroupId;

- (jlong)getTheirPreKeyId;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_STATIC_INIT(ImDiyalogCoreEntityEncryptionPeerSession)

inline id<JavaUtilComparator> ImDiyalogCoreEntityEncryptionPeerSession_get_COMPARATOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilComparator> ImDiyalogCoreEntityEncryptionPeerSession_COMPARATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImDiyalogCoreEntityEncryptionPeerSession, COMPARATOR, id<JavaUtilComparator>)

FOUNDATION_EXPORT id<ARPredicate> ImDiyalogCoreEntityEncryptionPeerSession_BY_THEIR_GROUPWithInt_(jint theirKeyGroupId);

FOUNDATION_EXPORT id<ARPredicate> ImDiyalogCoreEntityEncryptionPeerSession_BY_IDSWithInt_withLong_withLong_(jint theirKeyGroupId, jlong ownPreKeyId, jlong theirPreKeyId);

FOUNDATION_EXPORT void ImDiyalogCoreEntityEncryptionPeerSession_initWithLong_withInt_withInt_withInt_withLong_withLong_withByteArray_(ImDiyalogCoreEntityEncryptionPeerSession *self, jlong sid, jint uid, jint ownKeyGroupId, jint theirKeyGroupId, jlong ownPreKeyId, jlong theirPreKeyId, IOSByteArray *masterKey);

FOUNDATION_EXPORT ImDiyalogCoreEntityEncryptionPeerSession *new_ImDiyalogCoreEntityEncryptionPeerSession_initWithLong_withInt_withInt_withInt_withLong_withLong_withByteArray_(jlong sid, jint uid, jint ownKeyGroupId, jint theirKeyGroupId, jlong ownPreKeyId, jlong theirPreKeyId, IOSByteArray *masterKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreEntityEncryptionPeerSession *create_ImDiyalogCoreEntityEncryptionPeerSession_initWithLong_withInt_withInt_withInt_withLong_withLong_withByteArray_(jlong sid, jint uid, jint ownKeyGroupId, jint theirKeyGroupId, jlong ownPreKeyId, jlong theirPreKeyId, IOSByteArray *masterKey);

FOUNDATION_EXPORT void ImDiyalogCoreEntityEncryptionPeerSession_initWithByteArray_(ImDiyalogCoreEntityEncryptionPeerSession *self, IOSByteArray *data);

FOUNDATION_EXPORT ImDiyalogCoreEntityEncryptionPeerSession *new_ImDiyalogCoreEntityEncryptionPeerSession_initWithByteArray_(IOSByteArray *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreEntityEncryptionPeerSession *create_ImDiyalogCoreEntityEncryptionPeerSession_initWithByteArray_(IOSByteArray *data);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreEntityEncryptionPeerSession)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityEncryptionPeerSession")
