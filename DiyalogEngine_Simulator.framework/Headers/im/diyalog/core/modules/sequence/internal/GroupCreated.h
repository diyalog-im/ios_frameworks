//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/sequence/internal/GroupCreated.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalGroupCreated")
#ifdef RESTRICT_ImDiyalogCoreModulesSequenceInternalGroupCreated
#define INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalGroupCreated 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalGroupCreated 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesSequenceInternalGroupCreated

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesSequenceInternalGroupCreated_) && (INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalGroupCreated || defined(INCLUDE_ImDiyalogCoreModulesSequenceInternalGroupCreated))
#define ImDiyalogCoreModulesSequenceInternalGroupCreated_

#define RESTRICT_ImDiyalogCoreModulesSequenceInternalInternalUpdate 1
#define INCLUDE_ImDiyalogCoreModulesSequenceInternalInternalUpdate 1
#include "../../../../../../im/diyalog/core/modules/sequence/internal/InternalUpdate.h"

@class ARApiGroup;
@protocol ACCommandCallback;
@protocol JavaUtilList;

@interface ImDiyalogCoreModulesSequenceInternalGroupCreated : ImDiyalogCoreModulesSequenceInternalInternalUpdate

#pragma mark Public

- (instancetype)initWithARApiGroup:(ARApiGroup *)group
                  withJavaUtilList:(id<JavaUtilList>)users
             withACCommandCallback:(id<ACCommandCallback>)callback;

- (id<ACCommandCallback>)getCallback;

- (ARApiGroup *)getGroup;

- (id<JavaUtilList>)getUsers;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesSequenceInternalGroupCreated)

FOUNDATION_EXPORT void ImDiyalogCoreModulesSequenceInternalGroupCreated_initWithARApiGroup_withJavaUtilList_withACCommandCallback_(ImDiyalogCoreModulesSequenceInternalGroupCreated *self, ARApiGroup *group, id<JavaUtilList> users, id<ACCommandCallback> callback);

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceInternalGroupCreated *new_ImDiyalogCoreModulesSequenceInternalGroupCreated_initWithARApiGroup_withJavaUtilList_withACCommandCallback_(ARApiGroup *group, id<JavaUtilList> users, id<ACCommandCallback> callback) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceInternalGroupCreated *create_ImDiyalogCoreModulesSequenceInternalGroupCreated_initWithARApiGroup_withJavaUtilList_withACCommandCallback_(ARApiGroup *group, id<JavaUtilList> users, id<ACCommandCallback> callback);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesSequenceInternalGroupCreated)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalGroupCreated")