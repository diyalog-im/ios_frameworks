//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/rpc/RequestCheckFeatureEnabled.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCheckFeatureEnabled")
#ifdef RESTRICT_ImDiyalogCoreApiRpcRequestCheckFeatureEnabled
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCheckFeatureEnabled 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCheckFeatureEnabled 1
#endif
#undef RESTRICT_ImDiyalogCoreApiRpcRequestCheckFeatureEnabled

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARRequestCheckFeatureEnabled_) && (INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCheckFeatureEnabled || defined(INCLUDE_ARRequestCheckFeatureEnabled))
#define ARRequestCheckFeatureEnabled_

#define RESTRICT_ImDiyalogCoreNetworkParserRequest 1
#define INCLUDE_ACRequest 1
#include "../../../../../im/diyalog/core/network/parser/Request.h"

@class ARApiUserOutPeer;
@class ARBserValues;
@class ARBserWriter;
@class IOSByteArray;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARRequestCheckFeatureEnabled : ACRequest

+ (jint)HEADER;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiUserOutPeer:(ARApiUserOutPeer * __nonnull)userOutPeer
                            withNSString:(NSString * __nonnull)featureName;

+ (ARRequestCheckFeatureEnabled *)fromBytesWithByteArray:(IOSByteArray *)data;

- (NSString * __nonnull)getFeatureName;

- (jint)getHeaderKey;

- (ARApiUserOutPeer * __nonnull)getUserOutPeer;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARRequestCheckFeatureEnabled)

inline jint ARRequestCheckFeatureEnabled_get_HEADER();
#define ARRequestCheckFeatureEnabled_HEADER 2590
J2OBJC_STATIC_FIELD_CONSTANT(ARRequestCheckFeatureEnabled, HEADER, jint)

FOUNDATION_EXPORT ARRequestCheckFeatureEnabled *ARRequestCheckFeatureEnabled_fromBytesWithByteArray_(IOSByteArray *data);

FOUNDATION_EXPORT void ARRequestCheckFeatureEnabled_initWithARApiUserOutPeer_withNSString_(ARRequestCheckFeatureEnabled *self, ARApiUserOutPeer *userOutPeer, NSString *featureName);

FOUNDATION_EXPORT ARRequestCheckFeatureEnabled *new_ARRequestCheckFeatureEnabled_initWithARApiUserOutPeer_withNSString_(ARApiUserOutPeer *userOutPeer, NSString *featureName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestCheckFeatureEnabled *create_ARRequestCheckFeatureEnabled_initWithARApiUserOutPeer_withNSString_(ARApiUserOutPeer *userOutPeer, NSString *featureName);

FOUNDATION_EXPORT void ARRequestCheckFeatureEnabled_init(ARRequestCheckFeatureEnabled *self);

FOUNDATION_EXPORT ARRequestCheckFeatureEnabled *new_ARRequestCheckFeatureEnabled_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARRequestCheckFeatureEnabled *create_ARRequestCheckFeatureEnabled_init();

J2OBJC_TYPE_LITERAL_HEADER(ARRequestCheckFeatureEnabled)

@compatibility_alias ImDiyalogCoreApiRpcRequestCheckFeatureEnabled ARRequestCheckFeatureEnabled;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiRpcRequestCheckFeatureEnabled")