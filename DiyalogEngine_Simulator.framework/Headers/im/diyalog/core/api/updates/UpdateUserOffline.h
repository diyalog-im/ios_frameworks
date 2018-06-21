//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateUserOffline.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateUserOffline")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateUserOffline
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateUserOffline 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateUserOffline 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateUserOffline

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateUserOffline_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateUserOffline || defined(INCLUDE_ARUpdateUserOffline))
#define ARUpdateUserOffline_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARApiDeviceType;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARUpdateUserOffline : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)uid
        withARApiDeviceType:(ARApiDeviceType * __nullable)deviceType
               withNSString:(NSString * __nullable)deviceCategory;

+ (ARUpdateUserOffline *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nullable)getDeviceCategory;

- (ARApiDeviceType * __nullable)getDeviceType;

- (jint)getHeaderKey;

- (jint)getUid;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateUserOffline)

inline jint ARUpdateUserOffline_get_HEADER();
#define ARUpdateUserOffline_HEADER 8
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateUserOffline, HEADER, jint)

FOUNDATION_EXPORT ARUpdateUserOffline *ARUpdateUserOffline_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateUserOffline_initWithInt_withARApiDeviceType_withNSString_(ARUpdateUserOffline *self, jint uid, ARApiDeviceType *deviceType, NSString *deviceCategory);

FOUNDATION_EXPORT ARUpdateUserOffline *new_ARUpdateUserOffline_initWithInt_withARApiDeviceType_withNSString_(jint uid, ARApiDeviceType *deviceType, NSString *deviceCategory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateUserOffline *create_ARUpdateUserOffline_initWithInt_withARApiDeviceType_withNSString_(jint uid, ARApiDeviceType *deviceType, NSString *deviceCategory);

FOUNDATION_EXPORT void ARUpdateUserOffline_init(ARUpdateUserOffline *self);

FOUNDATION_EXPORT ARUpdateUserOffline *new_ARUpdateUserOffline_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateUserOffline *create_ARUpdateUserOffline_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateUserOffline)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateUserOffline ARUpdateUserOffline;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateUserOffline")
