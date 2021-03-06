//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestGetAuthSessions.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetAuthSessions")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestGetAuthSessions
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetAuthSessions 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetAuthSessions 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestGetAuthSessions

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestGetAuthSessions_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetAuthSessions || defined(INCLUDE_ARRequestGetAuthSessions))
#define ARRequestGetAuthSessions_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestGetAuthSessions : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

+ (ARRequestGetAuthSessions *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestGetAuthSessions)

inline jint ARRequestGetAuthSessions_get_HEADER();
#define ARRequestGetAuthSessions_HEADER 80
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestGetAuthSessions, HEADER, jint)

FOUNDATION_EXPORT ARRequestGetAuthSessions *ARRequestGetAuthSessions_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestGetAuthSessions_init(ARRequestGetAuthSessions *self);

FOUNDATION_EXPORT ARRequestGetAuthSessions *new_ARRequestGetAuthSessions_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestGetAuthSessions *create_ARRequestGetAuthSessions_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestGetAuthSessions)

@compatibility_alias ImDiyalogCoreApiRpcRequestGetAuthSessions ARRequestGetAuthSessions;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetAuthSessions")
