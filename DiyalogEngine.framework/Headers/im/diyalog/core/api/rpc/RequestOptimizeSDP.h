//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestOptimizeSDP.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestOptimizeSDP")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestOptimizeSDP
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestOptimizeSDP 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestOptimizeSDP 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestOptimizeSDP

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestOptimizeSDP_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestOptimizeSDP || defined(INCLUDE_ARRequestOptimizeSDP))
#define ARRequestOptimizeSDP_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiPeerSettings;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestOptimizeSDP : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString * __nonnull)type
                    withNSString:(NSString * __nonnull)sdp
           withARApiPeerSettings:(ARApiPeerSettings * __nonnull)ownSettings
           withARApiPeerSettings:(ARApiPeerSettings * __nonnull)theirSettings;

+ (ARRequestOptimizeSDP *)fromBytesWithByteArray:(IOSByteArray *)data;

- (jint)getHeaderKey;

- (ARApiPeerSettings * __nonnull)getOwnSettings;

- (NSString * __nonnull)getSdp;

- (ARApiPeerSettings * __nonnull)getTheirSettings;

- (NSString * __nonnull)getType;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestOptimizeSDP)

inline jint ARRequestOptimizeSDP_get_HEADER();
#define ARRequestOptimizeSDP_HEADER 2685
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestOptimizeSDP, HEADER, jint)

FOUNDATION_EXPORT ARRequestOptimizeSDP *ARRequestOptimizeSDP_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestOptimizeSDP_initWithNSString_withNSString_withARApiPeerSettings_withARApiPeerSettings_(ARRequestOptimizeSDP *self, NSString *type, NSString *sdp, ARApiPeerSettings *ownSettings, ARApiPeerSettings *theirSettings);

FOUNDATION_EXPORT ARRequestOptimizeSDP *new_ARRequestOptimizeSDP_initWithNSString_withNSString_withARApiPeerSettings_withARApiPeerSettings_(NSString *type, NSString *sdp, ARApiPeerSettings *ownSettings, ARApiPeerSettings *theirSettings) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestOptimizeSDP *create_ARRequestOptimizeSDP_initWithNSString_withNSString_withARApiPeerSettings_withARApiPeerSettings_(NSString *type, NSString *sdp, ARApiPeerSettings *ownSettings, ARApiPeerSettings *theirSettings);

FOUNDATION_EXPORT void ARRequestOptimizeSDP_init(ARRequestOptimizeSDP *self);

FOUNDATION_EXPORT ARRequestOptimizeSDP *new_ARRequestOptimizeSDP_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestOptimizeSDP *create_ARRequestOptimizeSDP_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestOptimizeSDP)

@compatibility_alias ImDiyalogCoreApiRpcRequestOptimizeSDP ARRequestOptimizeSDP;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestOptimizeSDP")