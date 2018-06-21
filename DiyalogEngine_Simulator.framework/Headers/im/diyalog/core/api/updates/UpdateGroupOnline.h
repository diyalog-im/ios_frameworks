//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/updates/UpdateGroupOnline.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupOnline")
#ifdef RESTRICT_ImDiyalogCoreApiUpdatesUpdateGroupOnline
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupOnline 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupOnline 1
#endif
#undef RESTRICT_ImDiyalogCoreApiUpdatesUpdateGroupOnline

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARUpdateGroupOnline_) && (INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupOnline || defined(INCLUDE_ARUpdateGroupOnline))
#define ARUpdateGroupOnline_

#define RESTRICT_ImDiyalogCoreNetworkParserUpdate 1
#define INCLUDE_ACUpdate 1
#include "../../../../../im/diyalog/core/network/parser/Update.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARUpdateGroupOnline : ACUpdate

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)groupId
                    withInt:(jint)count;

+ (ARUpdateGroupOnline *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getCount;

- (jint)getGroupId;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARUpdateGroupOnline)

inline jint ARUpdateGroupOnline_get_HEADER();
#define ARUpdateGroupOnline_HEADER 33
J2OBJC_STATIC_FIELD_CONSTANT(ARUpdateGroupOnline, HEADER, jint)

FOUNDATION_EXPORT ARUpdateGroupOnline *ARUpdateGroupOnline_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARUpdateGroupOnline_initWithInt_withInt_(ARUpdateGroupOnline *self, jint groupId, jint count);

FOUNDATION_EXPORT ARUpdateGroupOnline *new_ARUpdateGroupOnline_initWithInt_withInt_(jint groupId, jint count) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupOnline *create_ARUpdateGroupOnline_initWithInt_withInt_(jint groupId, jint count);

FOUNDATION_EXPORT void ARUpdateGroupOnline_init(ARUpdateGroupOnline *self);

FOUNDATION_EXPORT ARUpdateGroupOnline *new_ARUpdateGroupOnline_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARUpdateGroupOnline *create_ARUpdateGroupOnline_init();

J2OBJC_TYPE_LITERAL_HEADER(ARUpdateGroupOnline)

@compatibility_alias ImDiyalogCoreApiUpdatesUpdateGroupOnline ARUpdateGroupOnline;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiUpdatesUpdateGroupOnline")