//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/sequence/internal/DialogHistoryLoaded.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded")
#ifdef RESTRICT_ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded
#define INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded_) && (INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded || defined(INCLUDE_ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded))
#define ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded_

#define RESTRICT_ImDiyalogCoreModulesSequenceInternalInternalUpdate 1
#define INCLUDE_ImDiyalogCoreModulesSequenceInternalInternalUpdate 1
#include "../../../../../../im/diyalog/core/modules/sequence/internal/InternalUpdate.h"

@class ARResponseLoadDialogs;

@interface ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded : ImDiyalogCoreModulesSequenceInternalInternalUpdate

#pragma mark Public

- (instancetype)initWithARResponseLoadDialogs:(ARResponseLoadDialogs *)dialogs;

- (ARResponseLoadDialogs *)getDialogs;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded)

FOUNDATION_EXPORT void ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded_initWithARResponseLoadDialogs_(ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded *self, ARResponseLoadDialogs *dialogs);

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded *new_ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded_initWithARResponseLoadDialogs_(ARResponseLoadDialogs *dialogs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded *create_ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded_initWithARResponseLoadDialogs_(ARResponseLoadDialogs *dialogs);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalDialogHistoryLoaded")