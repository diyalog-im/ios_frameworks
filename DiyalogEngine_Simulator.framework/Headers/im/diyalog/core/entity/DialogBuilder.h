//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/DialogBuilder.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityDialogBuilder")
#ifdef RESTRICT_ImDiyalogCoreEntityDialogBuilder
#define INCLUDE_ALL_ImDiyalogCoreEntityDialogBuilder 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityDialogBuilder 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityDialogBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACDialogBuilder_) && (INCLUDE_ALL_ImDiyalogCoreEntityDialogBuilder || defined(INCLUDE_ACDialogBuilder))
#define ACDialogBuilder_

@class ACAvatar;
@class ACContentType;
@class ACDialog;
@class ACPeer;
@class JavaLangLong;

/*!
 @brief Dialog Builder used for building new Dialog entities or mutating old one
 */
@interface ACDialogBuilder : NSObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithACDialog:(ACDialog *)dialog;

- (ACDialog *)createDialog;

- (ACDialogBuilder *)setDialogAvatarWithACAvatar:(ACAvatar *)avatar;

- (ACDialogBuilder *)setDialogTitleWithNSString:(NSString *)dialogTitle;

- (ACDialogBuilder *)setMessageTypeWithACContentType:(ACContentType *)messageType;

- (ACDialogBuilder *)setPeerWithACPeer:(ACPeer *)peer;

- (ACDialogBuilder *)setRelatedUidWithInt:(jint)relatedUid;

- (ACDialogBuilder *)setRidWithLong:(jlong)rid;

- (ACDialogBuilder *)setSenderIdWithInt:(jint)senderId;

- (ACDialogBuilder *)setSortKeyWithLong:(jlong)sortKey;

- (ACDialogBuilder *)setTextWithNSString:(NSString *)text;

- (ACDialogBuilder *)setTimeWithLong:(jlong)time;

- (ACDialogBuilder *)setUnreadCountWithInt:(jint)unreadCount;

- (ACDialogBuilder *)updateKnownReadDateWithJavaLangLong:(JavaLangLong *)knownReadDate;

- (ACDialogBuilder *)updateKnownReceiveDateWithJavaLangLong:(JavaLangLong *)knownReceiveDate;

@end

J2OBJC_EMPTY_STATIC_INIT(ACDialogBuilder)

FOUNDATION_EXPORT void ACDialogBuilder_init(ACDialogBuilder *self);

FOUNDATION_EXPORT ACDialogBuilder *new_ACDialogBuilder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACDialogBuilder *create_ACDialogBuilder_init();

FOUNDATION_EXPORT void ACDialogBuilder_initWithACDialog_(ACDialogBuilder *self, ACDialog *dialog);

FOUNDATION_EXPORT ACDialogBuilder *new_ACDialogBuilder_initWithACDialog_(ACDialog *dialog) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACDialogBuilder *create_ACDialogBuilder_initWithACDialog_(ACDialog *dialog);

J2OBJC_TYPE_LITERAL_HEADER(ACDialogBuilder)

@compatibility_alias ImDiyalogCoreEntityDialogBuilder ACDialogBuilder;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityDialogBuilder")
