//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/GroupVM.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelGroupVM")
#ifdef RESTRICT_ImDiyalogCoreViewmodelGroupVM
#define INCLUDE_ALL_ImDiyalogCoreViewmodelGroupVM 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelGroupVM 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelGroupVM

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACGroupVM_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelGroupVM || defined(INCLUDE_ACGroupVM))
#define ACGroupVM_

#define RESTRICT_ImDiyalogRuntimeMvvmBaseValueModel 1
#define INCLUDE_ARBaseValueModel 1
#include "../../../../im/diyalog/runtime/mvvm/BaseValueModel.h"

@class ACAvatarValueModel;
@class ACBooleanValueModel;
@class ACGroup;
@class ACStringValueModel;
@class ARValueModel;
@protocol ARModelChangedListener;
@protocol ARValueModelCreator;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief Group View Model
 */
@interface ACGroupVM : ARBaseValueModel
@property (readonly, nonatomic) jint groupId;
@property (readonly, nonatomic, getter=getCreatorId) jint creatorId;
@property (readonly, nonatomic, getter=getAvatar) ACAvatarValueModel *avatar;
@property (readonly, nonatomic, getter=getName) ACStringValueModel *name;
@property (readonly, nonatomic, getter=isMember) ACBooleanValueModel *isMember;
@property (readonly, nonatomic, getter=getMembers) ARValueModel *members;
@property (readonly, nonatomic, getter=getPresence) ARValueModel *presence;
@property (readonly, nonatomic, getter=getTheme) ACStringValueModel *theme;
@property (readonly, nonatomic, getter=getAbout) ACStringValueModel *about;

#pragma mark Public

/*!
 @brief <p>INTERNAL API</p>
 Create Group View Model
 @param rawObj initial value of Group
 */
- (instancetype)initWithACGroup:(ACGroup * __nonnull)rawObj
                        withInt:(jint)myUid;

+ (id<ARValueModelCreator>)CREATORWithInt:(jint)myUid;

/*!
 @brief Get About Value Model
 @return Value Model of String
 */
- (ACStringValueModel * __nullable)getAboutModel;

/*!
 @brief Get Avatar Value Model
 @return Value Model of Avatar
 */
- (ACAvatarValueModel * __nonnull)getAvatarModel;

/*!
 @brief Get Group creator user id
 @return creator user id
 */
- (jint)getCreatorId;

/*!
 @brief Get Group Id
 @return Group Id
 */
- (jint)getId;

/*!
 @brief Get members Value Model
 @return Value Model of HashSet of GroupMember
 */
- (ARValueModel * __nonnull)getMembersModel;

/*!
 @brief Get Group members count
 @return members count
 */
- (jint)getMembersCount;

/*!
 @brief Get Name Value Model
 @return Value Model of String
 */
- (ACStringValueModel * __nonnull)getNameModel;

/*!
 @brief Get Online Value Model
 @return Value Model of Integer
 */
- (ARValueModel * __nonnull)getPresenceModel;

/*!
 @brief Get Theme Value Model
 @return Value Model of String
 */
- (ACStringValueModel * __nullable)getThemeModel;

/*!
 @brief Get membership Value Model
 @return Value Model of Boolean
 */
- (ACBooleanValueModel * __nonnull)isMemberModel;

/*!
 @brief Subscribe for GroupVM updates
 @param listener Listener for updates
 */
- (void)subscribeWithListener:(id<ARModelChangedListener> __nonnull)listener;

/*!
 @brief Subscribe for GroupVM updates
 @param listener Listener for updates
 */
- (void)subscribeWithListener:(id<ARModelChangedListener> __nonnull)listener
                   withNotify:(jboolean)notify;

/*!
 @brief Unsubscribe from GroupVM updates
 @param listener Listener for updates
 */
- (void)unsubscribeWithListener:(id<ARModelChangedListener> __nonnull)listener;

#pragma mark Protected

- (void)updateValuesWithId:(ACGroup * __nonnull)rawObj;

@end

J2OBJC_EMPTY_STATIC_INIT(ACGroupVM)

FOUNDATION_EXPORT id<ARValueModelCreator> ACGroupVM_CREATORWithInt_(jint myUid);

FOUNDATION_EXPORT void ACGroupVM_initWithACGroup_withInt_(ACGroupVM *self, ACGroup *rawObj, jint myUid);

FOUNDATION_EXPORT ACGroupVM *new_ACGroupVM_initWithACGroup_withInt_(ACGroup *rawObj, jint myUid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACGroupVM *create_ACGroupVM_initWithACGroup_withInt_(ACGroup *rawObj, jint myUid);

J2OBJC_TYPE_LITERAL_HEADER(ACGroupVM)

@compatibility_alias ImDiyalogCoreViewmodelGroupVM ACGroupVM;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelGroupVM")
