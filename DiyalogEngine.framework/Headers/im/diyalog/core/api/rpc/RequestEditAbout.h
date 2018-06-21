//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestEditAbout.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEditAbout")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestEditAbout
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEditAbout 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEditAbout 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestEditAbout

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestEditAbout_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEditAbout || defined(INCLUDE_ARRequestEditAbout))
#define ARRequestEditAbout_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestEditAbout : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nullable)about;

+ (ARRequestEditAbout *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nullable)getAbout;

- (jint)getHeaderKey;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestEditAbout)

inline jint ARRequestEditAbout_get_HEADER();
#define ARRequestEditAbout_HEADER 212
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestEditAbout, HEADER, jint)

FOUNDATION_EXPORT ARRequestEditAbout *ARRequestEditAbout_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestEditAbout_initWithNSString_(ARRequestEditAbout *self, NSString *about);

FOUNDATION_EXPORT ARRequestEditAbout *new_ARRequestEditAbout_initWithNSString_(NSString *about) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestEditAbout *create_ARRequestEditAbout_initWithNSString_(NSString *about);

FOUNDATION_EXPORT void ARRequestEditAbout_init(ARRequestEditAbout *self);

FOUNDATION_EXPORT ARRequestEditAbout *new_ARRequestEditAbout_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestEditAbout *create_ARRequestEditAbout_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestEditAbout)

@compatibility_alias ImDiyalogCoreApiRpcRequestEditAbout ARRequestEditAbout;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestEditAbout")
