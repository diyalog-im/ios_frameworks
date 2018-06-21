//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiServiceExChatArchived.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChatArchived")
#ifdef RESTRICT_ImDiyalogCoreApiApiServiceExChatArchived
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChatArchived 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChatArchived 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiServiceExChatArchived

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiServiceExChatArchived_) && (INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChatArchived || defined(INCLUDE_ARApiServiceExChatArchived))
#define ARApiServiceExChatArchived_

#define RESTRICT_ImDiyalogCoreApiApiServiceEx 1
#define INCLUDE_ARApiServiceEx 1
#include "../../../../im/diyalog/core/api/ApiServiceEx.h"

@class ARBserValues;
@class ARBserWriter;

@interface ARApiServiceExChatArchived : ARApiServiceEx

#pragma mark Public

- (instancetype)init;

- (jint)getHeader;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiServiceExChatArchived)

FOUNDATION_EXPORT void ARApiServiceExChatArchived_init(ARApiServiceExChatArchived *self);

FOUNDATION_EXPORT ARApiServiceExChatArchived *new_ARApiServiceExChatArchived_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiServiceExChatArchived *create_ARApiServiceExChatArchived_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiServiceExChatArchived)

@compatibility_alias ImDiyalogCoreApiApiServiceExChatArchived ARApiServiceExChatArchived;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiServiceExChatArchived")