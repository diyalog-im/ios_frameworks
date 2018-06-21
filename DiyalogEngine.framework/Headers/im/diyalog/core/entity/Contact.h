//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/Contact.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityContact")
#ifdef RESTRICT_ImDiyalogCoreEntityContact
#define INCLUDE_ALL_ImDiyalogCoreEntityContact 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityContact 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityContact

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACContact_) && (INCLUDE_ALL_ImDiyalogCoreEntityContact || defined(INCLUDE_ACContact))
#define ACContact_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

#define RESTRICT_ImDiyalogRuntimeStorageListEngineItem 1
#define INCLUDE_ARListEngineItem 1
#include "../../../../im/diyalog/runtime/storage/ListEngineItem.h"

@class ACAvatar;
@class ARBserValues;
@class ARBserWriter;
@protocol ARBserCreator;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ACContact : ARBserObject < ARListEngineItem >
@property (readonly, nonatomic, getter=getUid) jint uid;
@property (readonly, nonatomic, getter=getAvatar) ACAvatar *avatar;
@property (readonly, copy, nonatomic, getter=getName) NSString *name;

+ (id<ARBserCreator>)CREATOR;

+ (NSString *)ENTITY_NAME;

#pragma mark Public

- (instancetype)initWithInt:(jint)uid
                   withLong:(jlong)sortKey
               withACAvatar:(ACAvatar * __nullable)avatar
               withNSString:(NSString * __nonnull)name;

- (ACAvatar * __nullable)getAvatar;

- (jlong)getEngineId;

- (NSString *)getEngineSearch;

- (jlong)getEngineSort;

- (NSString * __nonnull)getName;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_STATIC_INIT(ACContact)

inline id<ARBserCreator> ACContact_get_CREATOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ARBserCreator> ACContact_CREATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACContact, CREATOR, id<ARBserCreator>)

inline NSString *ACContact_get_ENTITY_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ACContact_ENTITY_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACContact, ENTITY_NAME, NSString *)

FOUNDATION_EXPORT void ACContact_initWithInt_withLong_withACAvatar_withNSString_(ACContact *self, jint uid, jlong sortKey, ACAvatar *avatar, NSString *name);

FOUNDATION_EXPORT ACContact *new_ACContact_initWithInt_withLong_withACAvatar_withNSString_(jint uid, jlong sortKey, ACAvatar *avatar, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACContact *create_ACContact_initWithInt_withLong_withACAvatar_withNSString_(jint uid, jlong sortKey, ACAvatar *avatar, NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(ACContact)

@compatibility_alias ImDiyalogCoreEntityContact ACContact;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityContact")
