//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/events/DialogsOpened.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEventsDialogsOpened")
#ifdef RESTRICT_ImDiyalogCoreEventsDialogsOpened
#define INCLUDE_ALL_ImDiyalogCoreEventsDialogsOpened 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEventsDialogsOpened 1
#endif
#undef RESTRICT_ImDiyalogCoreEventsDialogsOpened

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreEventsDialogsOpened_) && (INCLUDE_ALL_ImDiyalogCoreEventsDialogsOpened || defined(INCLUDE_ImDiyalogCoreEventsDialogsOpened))
#define ImDiyalogCoreEventsDialogsOpened_

#define RESTRICT_ImDiyalogRuntimeEventbusEvent 1
#define INCLUDE_ImDiyalogRuntimeEventbusEvent 1
#include "../../../../im/diyalog/runtime/eventbus/Event.h"

@interface ImDiyalogCoreEventsDialogsOpened : ImDiyalogRuntimeEventbusEvent

+ (NSString *)EVENT;

#pragma mark Public

- (instancetype)init;

- (NSString *)getType;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreEventsDialogsOpened)

inline NSString *ImDiyalogCoreEventsDialogsOpened_get_EVENT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ImDiyalogCoreEventsDialogsOpened_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImDiyalogCoreEventsDialogsOpened, EVENT, NSString *)

FOUNDATION_EXPORT void ImDiyalogCoreEventsDialogsOpened_init(ImDiyalogCoreEventsDialogsOpened *self);

FOUNDATION_EXPORT ImDiyalogCoreEventsDialogsOpened *new_ImDiyalogCoreEventsDialogsOpened_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreEventsDialogsOpened *create_ImDiyalogCoreEventsDialogsOpened_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreEventsDialogsOpened)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEventsDialogsOpened")
