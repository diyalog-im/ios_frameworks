//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestGetPublicGroups.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetPublicGroups")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestGetPublicGroups
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetPublicGroups 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetPublicGroups 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestGetPublicGroups

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestGetPublicGroups_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetPublicGroups || defined(INCLUDE_ARRequestGetPublicGroups))
#define ARRequestGetPublicGroups_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

@interface ARRequestGetPublicGroups : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

+ (ARRequestGetPublicGroups *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestGetPublicGroups)

inline jint ARRequestGetPublicGroups_get_HEADER();
#define ARRequestGetPublicGroups_HEADER 201
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestGetPublicGroups, HEADER, jint)

FOUNDATION_EXPORT ARRequestGetPublicGroups *ARRequestGetPublicGroups_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestGetPublicGroups_init(ARRequestGetPublicGroups *self);

FOUNDATION_EXPORT ARRequestGetPublicGroups *new_ARRequestGetPublicGroups_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestGetPublicGroups *create_ARRequestGetPublicGroups_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestGetPublicGroups)

@compatibility_alias ImDiyalogCoreApiRpcRequestGetPublicGroups ARRequestGetPublicGroups;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestGetPublicGroups")
