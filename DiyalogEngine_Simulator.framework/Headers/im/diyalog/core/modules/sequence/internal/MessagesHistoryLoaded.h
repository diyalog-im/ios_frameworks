//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/modules/sequence/internal/MessagesHistoryLoaded.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded")
#ifdef RESTRICT_ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded
#define INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded 0
#else
#define INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded 1
#endif
#undef RESTRICT_ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded_) && (INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded || defined(INCLUDE_ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded))
#define ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded_

#define RESTRICT_ImDiyalogCoreModulesSequenceInternalInternalUpdate 1
#define INCLUDE_ImDiyalogCoreModulesSequenceInternalInternalUpdate 1
#include "../../../../../../im/diyalog/core/modules/sequence/internal/InternalUpdate.h"

@class ACPeer;
@class ARResponseLoadHistory;

@interface ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded : ImDiyalogCoreModulesSequenceInternalInternalUpdate

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
     withARResponseLoadHistory:(ARResponseLoadHistory *)loadHistory;

- (ARResponseLoadHistory *)getLoadHistory;

- (ACPeer *)getPeer;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded)

FOUNDATION_EXPORT void ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded_initWithACPeer_withARResponseLoadHistory_(ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded *self, ACPeer *peer, ARResponseLoadHistory *loadHistory);

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded *new_ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded_initWithACPeer_withARResponseLoadHistory_(ACPeer *peer, ARResponseLoadHistory *loadHistory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded *create_ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded_initWithACPeer_withARResponseLoadHistory_(ACPeer *peer, ARResponseLoadHistory *loadHistory);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreModulesSequenceInternalMessagesHistoryLoaded")