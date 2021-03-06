//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/UserVM.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelUserVM")
#ifdef RESTRICT_ImDiyalogCoreViewmodelUserVM
#define INCLUDE_ALL_ImDiyalogCoreViewmodelUserVM 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelUserVM 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelUserVM

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACUserVM_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelUserVM || defined(INCLUDE_ACUserVM))
#define ACUserVM_

#define RESTRICT_ImDiyalogRuntimeMvvmBaseValueModel 1
#define INCLUDE_ARBaseValueModel 1
#include "../../../../im/diyalog/runtime/mvvm/BaseValueModel.h"

@class ACAvatarValueModel;
@class ACBooleanValueModel;
@class ACSex;
@class ACStringValueModel;
@class ACUser;
@class ACValueModelContactRecord;
@class ACValueModelUserEmail;
@class ACValueModelUserLink;
@class ACValueModelUserPhone;
@class ACValueModelUserPresence;
@protocol ACModuleContext;
@protocol ARModelChangedListener;
@protocol ARValueModelCreator;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief User View Model
 */
@interface ACUserVM : ARBaseValueModel

#pragma mark Public

/*!
 @brief <p>INTERNAL API</p>
 Create User View Model
 @param user    Initial User value
 @param modules im.actor.android.modules reference
 */
- (instancetype)initWithACUser:(ACUser * __nonnull)user
           withACModuleContext:(id<ACModuleContext> __nonnull)modules;

+ (id<ARValueModelCreator>)CREATORWithACModuleContext:(id<ACModuleContext>)modules;

/*!
 @brief Get User about Value Model
 @return ValueModel of String
 */
- (ACStringValueModel * __nonnull)getAboutModel;

/*!
 @brief Get User Avatar Value Model
 @return ValueModel of Avatar
 */
- (ACAvatarValueModel * __nonnull)getAvatarModel;

/*!
 @brief Get User Contact records
 @return ValueModel of ArrayList of ContactRecord
 */
- (ACValueModelContactRecord * __nonnull)getContactsModel;

/*!
 @brief Get User Email addresses
 @return ValueModel of ArrayList of UserEmail
 */
- (ACValueModelUserEmail * __nonnull)getEmailsModel;

/*!
 @brief Get User Id
 @return user Id
 */
- (jint)getId;

/*!
 @brief Get User web links
 @return ValueModel of ArrayList of UserLink
 */
- (ACValueModelUserLink * __nonnull)getLinksModel;

/*!
 @brief Get User Local Name Value Model
 @return ValueModel of String
 */
- (ACStringValueModel * __nonnull)getLocalNameModel;

/*!
 @brief Get User Name Value Model
 @return ValueModel of String
 */
- (ACStringValueModel * __nonnull)getNameModel;

/*!
 @brief Get User nick Value Model
 @return ValueModel of String
 */
- (ACStringValueModel * __nonnull)getNickModel;

/*!
 @brief Get Users Phone numbers
 @return ValueModel of ArrayList of UserPhone
 */
- (ACValueModelUserPhone * __nonnull)getPhonesModel;

/*!
 @brief Get ValueModel of User Presence
 @return ValueModel of UserPresence
 */
- (ACValueModelUserPresence * __nonnull)getPresenceModel;

/*!
 @brief Get User Server Name Value Model
 @return ValueModel of String
 */
- (ACStringValueModel * __nonnull)getServerNameModel;

/*!
 @brief Get User Sex
 @return User Sex
 */
- (ACSex * __nonnull)getSex;

/*!
 @brief Is User actually bot
 @return is User bot
 */
- (jboolean)isBot;

/*!
 @brief Get ValueModel of flag if user is in contact list
 @return ValueModel of Boolean
 */
- (ACBooleanValueModel * __nonnull)isContactModel;

/*!
 @brief Subscribe to UserVM updates
 @param listener UserVM changed listener
 */
- (void)subscribeWithListener:(id<ARModelChangedListener> __nonnull)listener;

/*!
 @brief Subscribe to UserVM updates
 @param listener UserVM changed listener
 */
- (void)subscribeWithListener:(id<ARModelChangedListener> __nonnull)listener
                   withNotify:(jboolean)notify;

/*!
 @brief Unsubscribe from UserVM
 @param listener UserVM changed listener
 */
- (void)unsubscribeWithListener:(id<ARModelChangedListener> __nonnull)listener;

#pragma mark Protected

- (void)updateValuesWithId:(ACUser * __nonnull)rawObj;

@end

J2OBJC_EMPTY_STATIC_INIT(ACUserVM)

FOUNDATION_EXPORT id<ARValueModelCreator> ACUserVM_CREATORWithACModuleContext_(id<ACModuleContext> modules);

FOUNDATION_EXPORT void ACUserVM_initWithACUser_withACModuleContext_(ACUserVM *self, ACUser *user, id<ACModuleContext> modules);

FOUNDATION_EXPORT ACUserVM *new_ACUserVM_initWithACUser_withACModuleContext_(ACUser *user, id<ACModuleContext> modules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACUserVM *create_ACUserVM_initWithACUser_withACModuleContext_(ACUser *user, id<ACModuleContext> modules);

J2OBJC_TYPE_LITERAL_HEADER(ACUserVM)

@compatibility_alias ImDiyalogCoreViewmodelUserVM ACUserVM;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelUserVM")
