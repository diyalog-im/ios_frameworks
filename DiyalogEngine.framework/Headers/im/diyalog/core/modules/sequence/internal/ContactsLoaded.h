//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/sequence/internal/ContactsLoaded.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalContactsLoaded")
#ifdef RESTRICT_ImDiyalogCoreModulesSequenceInternalContactsLoaded
#define INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalContactsLoaded 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalContactsLoaded 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesSequenceInternalContactsLoaded

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesSequenceInternalContactsLoaded_) && (INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalContactsLoaded || defined(INCLUDE_ImDiyalogCoreModulesSequenceInternalContactsLoaded))
#define ImDiyalogCoreModulesSequenceInternalContactsLoaded_

#define RESTRICT_ImDiyalogCoreModulesSequenceInternalInternalUpdate 1
#define INCLUDE_ImDiyalogCoreModulesSequenceInternalInternalUpdate 1
#include "../../../../../../im/diyalog/core/modules/sequence/internal/InternalUpdate.h"

@class ARResponseGetContacts;

@interface ImDiyalogCoreModulesSequenceInternalContactsLoaded : ImDiyalogCoreModulesSequenceInternalInternalUpdate

#pragma mark Public

- (instancetype)initWithARResponseGetContacts:(ARResponseGetContacts *)contacts;

- (ARResponseGetContacts *)getContacts;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesSequenceInternalContactsLoaded)

FOUNDATION_EXPORT void ImDiyalogCoreModulesSequenceInternalContactsLoaded_initWithARResponseGetContacts_(ImDiyalogCoreModulesSequenceInternalContactsLoaded *self, ARResponseGetContacts *contacts);

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceInternalContactsLoaded *new_ImDiyalogCoreModulesSequenceInternalContactsLoaded_initWithARResponseGetContacts_(ARResponseGetContacts *contacts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceInternalContactsLoaded *create_ImDiyalogCoreModulesSequenceInternalContactsLoaded_initWithARResponseGetContacts_(ARResponseGetContacts *contacts);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesSequenceInternalContactsLoaded)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalContactsLoaded")
