//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestLoadDialogs.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadDialogs")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestLoadDialogs
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadDialogs 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadDialogs 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestLoadDialogs

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestLoadDialogs_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadDialogs || defined(INCLUDE_ARRequestLoadDialogs))
#define ARRequestLoadDialogs_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestLoadDialogs : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithLong:(jlong)minDate
                     withInt:(jint)limit;

+ (ARRequestLoadDialogs *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (jint)getLimit;

- (jlong)getMinDate;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestLoadDialogs)

inline jint ARRequestLoadDialogs_get_HEADER();
#define ARRequestLoadDialogs_HEADER 104
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestLoadDialogs, HEADER, jint)

FOUNDATION_EXPORT ARRequestLoadDialogs *ARRequestLoadDialogs_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestLoadDialogs_initWithLong_withInt_(ARRequestLoadDialogs *self, jlong minDate, jint limit);

FOUNDATION_EXPORT ARRequestLoadDialogs *new_ARRequestLoadDialogs_initWithLong_withInt_(jlong minDate, jint limit) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadDialogs *create_ARRequestLoadDialogs_initWithLong_withInt_(jlong minDate, jint limit);

FOUNDATION_EXPORT void ARRequestLoadDialogs_init(ARRequestLoadDialogs *self);

FOUNDATION_EXPORT ARRequestLoadDialogs *new_ARRequestLoadDialogs_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestLoadDialogs *create_ARRequestLoadDialogs_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestLoadDialogs)

@compatibility_alias ImDiyalogCoreApiRpcRequestLoadDialogs ARRequestLoadDialogs;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestLoadDialogs")
