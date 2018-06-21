//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestInitWebaction.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestInitWebaction")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestInitWebaction
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestInitWebaction 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestInitWebaction 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestInitWebaction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestInitWebaction_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestInitWebaction || defined(INCLUDE_ARRequestInitWebaction))
#define ARRequestInitWebaction_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiMapValue;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestInitWebaction : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)actionName
               withARApiMapValue:(ARApiMapValue * __nonnull)params;

+ (ARRequestInitWebaction *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getActionName;

- (jint)getHeaderKey;

- (ARApiMapValue * __nonnull)getParams;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestInitWebaction)

inline jint ARRequestInitWebaction_get_HEADER();
#define ARRequestInitWebaction_HEADER 116
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestInitWebaction, HEADER, jint)

FOUNDATION_EXPORT ARRequestInitWebaction *ARRequestInitWebaction_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestInitWebaction_initWithNSString_withARApiMapValue_(ARRequestInitWebaction *self, NSString *actionName, ARApiMapValue *params);

FOUNDATION_EXPORT ARRequestInitWebaction *new_ARRequestInitWebaction_initWithNSString_withARApiMapValue_(NSString *actionName, ARApiMapValue *params) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestInitWebaction *create_ARRequestInitWebaction_initWithNSString_withARApiMapValue_(NSString *actionName, ARApiMapValue *params);

FOUNDATION_EXPORT void ARRequestInitWebaction_init(ARRequestInitWebaction *self);

FOUNDATION_EXPORT ARRequestInitWebaction *new_ARRequestInitWebaction_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestInitWebaction *create_ARRequestInitWebaction_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestInitWebaction)

@compatibility_alias ImDiyalogCoreApiRpcRequestInitWebaction ARRequestInitWebaction;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestInitWebaction")
