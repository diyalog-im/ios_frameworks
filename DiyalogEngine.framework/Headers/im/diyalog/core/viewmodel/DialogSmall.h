//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/viewmodel/DialogSmall.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelDialogSmall")
#ifdef RESTRICT_ImDiyalogCoreViewmodelDialogSmall
#define INCLUDE_ALL_ImDiyalogCoreViewmodelDialogSmall 0
#else
#define INCLUDE_ALL_ImDiyalogCoreViewmodelDialogSmall 1
#endif
#undef RESTRICT_ImDiyalogCoreViewmodelDialogSmall

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACDialogSmall_) && (INCLUDE_ALL_ImDiyalogCoreViewmodelDialogSmall || defined(INCLUDE_ACDialogSmall))
#define ACDialogSmall_

#define RESTRICT_ImDiyalogRuntimeBserBserObject 1
#define INCLUDE_ARBserObject 1
#include "../../../../im/diyalog/runtime/bser/BserObject.h"

#define RESTRICT_ImDiyalogRuntimeStorageListEngineItem 1
#define INCLUDE_ARListEngineItem 1
#include "../../../../im/diyalog/runtime/storage/ListEngineItem.h"

@class ACAvatar;
@class ACPeer;
@class ARBserValues;
@class ARBserWriter;

@interface ACDialogSmall : ARBserObject < ARListEngineItem >
@property (readonly, nonatomic, getter=getPeer) ACPeer *peer;
@property (readonly, copy, nonatomic, getter=getTitle) NSString *title;
@property (readonly, nonatomic, getter=getAvatar) ACAvatar *avatar;
@property (readonly, nonatomic, getter=getCounter) jint counter;

#pragma mark Public

- (instancetype)initWithACPeer:(ACPeer *)peer
                  withNSString:(NSString *)title
                  withACAvatar:(ACAvatar *)avatar
                       withInt:(jint)counter;

- (ACAvatar *)getAvatar;

- (jint)getCounter;

- (jlong)getEngineId;

- (NSString *)getEngineSearch;

- (jlong)getEngineSort;

- (ACPeer *)getPeer;

- (NSString *)getTitle;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

@end

J2OBJC_EMPTY_STATIC_INIT(ACDialogSmall)

FOUNDATION_EXPORT void ACDialogSmall_initWithACPeer_withNSString_withACAvatar_withInt_(ACDialogSmall *self, ACPeer *peer, NSString *title, ACAvatar *avatar, jint counter);

FOUNDATION_EXPORT ACDialogSmall *new_ACDialogSmall_initWithACPeer_withNSString_withACAvatar_withInt_(ACPeer *peer, NSString *title, ACAvatar *avatar, jint counter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACDialogSmall *create_ACDialogSmall_initWithACPeer_withNSString_withACAvatar_withInt_(ACPeer *peer, NSString *title, ACAvatar *avatar, jint counter);

J2OBJC_TYPE_LITERAL_HEADER(ACDialogSmall)

@compatibility_alias ImDiyalogCoreViewmodelDialogSmall ACDialogSmall;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreViewmodelDialogSmall")