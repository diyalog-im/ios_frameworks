//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/events/NewSessionCreated.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEventsNewSessionCreated")
#ifdef RESTRICT_ImDiyalogCoreEventsNewSessionCreated
#define INCLUDE_ALL_ImDiyalogCoreEventsNewSessionCreated 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEventsNewSessionCreated 1
#endif
#undef RESTRICT_ImDiyalogCoreEventsNewSessionCreated

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogCoreEventsNewSessionCreated_) && (INCLUDE_ALL_ImDiyalogCoreEventsNewSessionCreated || defined(INCLUDE_ImDiyalogCoreEventsNewSessionCreated))
#define ImDiyalogCoreEventsNewSessionCreated_

#define RESTRICT_ImDiyalogRuntimeEventbusEvent 1
#define INCLUDE_ImDiyalogRuntimeEventbusEvent 1
#include "../../../../im/diyalog/runtime/eventbus/Event.h"

@interface ImDiyalogCoreEventsNewSessionCreated : ImDiyalogRuntimeEventbusEvent

+ (NSString *)EVENT;

#pragma mark Public

- (instancetype)init;

- (NSString *)getType;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogCoreEventsNewSessionCreated)

inline NSString *ImDiyalogCoreEventsNewSessionCreated_get_EVENT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ImDiyalogCoreEventsNewSessionCreated_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ImDiyalogCoreEventsNewSessionCreated, EVENT, NSString *)

FOUNDATION_EXPORT void ImDiyalogCoreEventsNewSessionCreated_init(ImDiyalogCoreEventsNewSessionCreated *self);

FOUNDATION_EXPORT ImDiyalogCoreEventsNewSessionCreated *new_ImDiyalogCoreEventsNewSessionCreated_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogCoreEventsNewSessionCreated *create_ImDiyalogCoreEventsNewSessionCreated_init();

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogCoreEventsNewSessionCreated)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEventsNewSessionCreated")
