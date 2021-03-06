//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateRestoreNotifications.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateRestoreNotifications")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateRestoreNotifications
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateRestoreNotifications 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateRestoreNotifications 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateRestoreNotifications

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateRestoreNotifications_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateRestoreNotifications || defined(INCLUDE_ARUpdateRestoreNotifications))
#define ARUpdateRestoreNotifications_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARUpdateRestoreNotifications : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

+ (ARUpdateRestoreNotifications *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateRestoreNotifications)

inline jint ARUpdateRestoreNotifications_get_HEADER();
#define ARUpdateRestoreNotifications_HEADER 167
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateRestoreNotifications, HEADER, jint)

FOUNDATION_EXPORT ARUpdateRestoreNotifications *ARUpdateRestoreNotifications_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateRestoreNotifications_init(ARUpdateRestoreNotifications *self);

FOUNDATION_EXPORT ARUpdateRestoreNotifications *new_ARUpdateRestoreNotifications_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateRestoreNotifications *create_ARUpdateRestoreNotifications_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateRestoreNotifications)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateRestoreNotifications ARUpdateRestoreNotifications;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateRestoreNotifications")
