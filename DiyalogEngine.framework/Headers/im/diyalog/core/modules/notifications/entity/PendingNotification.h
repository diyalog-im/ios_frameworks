//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/notifications/entity/PendingNotification.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesNotificationsEntityPendingNotification")
#ifdef RESTRICT_ImDiyalogCoreModulesNotificationsEntityPendingNotification
#define INCLUDE_ALL_ImDiyalogCoreModulesNotificationsEntityPendingNotification 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesNotificationsEntityPendingNotification 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesNotificationsEntityPendingNotification

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesNotificationsEntityPendingNotification_) && (INCLUDE_ALL_ImDiyalogCoreModulesNotificationsEntityPendingNotification || defined(INCLUDE_ImDiyalogCoreModulesNotificationsEntityPendingNotification))
#define ImDiyalogCoreModulesNotificationsEntityPendingNotification_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../../../im/diyalog/runtime/bser/BserObject.h"

@class ACContentDescription;
@class ACPeer;
@class ARBserValues;
@class ARBserWriter;

@interface ImDiyalogCoreModulesNotificationsEntityPendingNotification : ARBserObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithACPeer:(ACPeer *)peer
                       withInt:(jint)sender
                      withLong:(jlong)date
      withACContentDescription:(ACContentDescription *)content;

- (ACContentDescription *)getContent;

- (jlong)getDate;

- (ACPeer *)getPeer;

- (jint)getSender;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesNotificationsEntityPendingNotification)

FOUNDATION_EXPORT void ImDiyalogCoreModulesNotificationsEntityPendingNotification_initWithACPeer_withInt_withLong_withACContentDescription_(ImDiyalogCoreModulesNotificationsEntityPendingNotification *self, ACPeer *peer, jint sender, jlong date, ACContentDescription *content);

FOUNDATION_EXPORT ImDiyalogCoreModulesNotificationsEntityPendingNotification *new_ImDiyalogCoreModulesNotificationsEntityPendingNotification_initWithACPeer_withInt_withLong_withACContentDescription_(ACPeer *peer, jint sender, jlong date, ACContentDescription *content) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesNotificationsEntityPendingNotification *create_ImDiyalogCoreModulesNotificationsEntityPendingNotification_initWithACPeer_withInt_withLong_withACContentDescription_(ACPeer *peer, jint sender, jlong date, ACContentDescription *content);

FOUNDATION_EXPORT void ImDiyalogCoreModulesNotificationsEntityPendingNotification_init(ImDiyalogCoreModulesNotificationsEntityPendingNotification *self);

FOUNDATION_EXPORT ImDiyalogCoreModulesNotificationsEntityPendingNotification *new_ImDiyalogCoreModulesNotificationsEntityPendingNotification_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesNotificationsEntityPendingNotification *create_ImDiyalogCoreModulesNotificationsEntityPendingNotification_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesNotificationsEntityPendingNotification)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesNotificationsEntityPendingNotification")
