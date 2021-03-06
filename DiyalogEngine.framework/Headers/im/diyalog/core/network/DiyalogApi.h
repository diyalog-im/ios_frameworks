//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/network/DiyalogApi.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreNetworkDiyalogApi")
#ifdef RESTRICT_ImDiyalogCoreNetworkDiyalogApi
#define INCLUDE_ALL_ImDiyalogCoreNetworkDiyalogApi 0
#else
#define INCLUDE_ALL_ImDiyalogCoreNetworkDiyalogApi 1
#endif
#undef RESTRICT_ImDiyalogCoreNetworkDiyalogApi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACDiyalogApi_) && (INCLUDE_ALL_ImDiyalogCoreNetworkDiyalogApi || defined(INCLUDE_ACDiyalogApi))
#define ACDiyalogApi_

@class ACApiParserConfig;
@class ACEndpoints;
@class ACNetworkState;
@class ACRequest;
@protocol ACAuthKeyStorage;
@protocol ACDiyalogApiCallback;
@protocol ACRpcCallback;

/*!
 @brief Diyalog API Object for connecting to Diyalog's servers
 */
@interface ACDiyalogApi : NSObject

+ (jint)MTPROTO_VERSION;

+ (jint)API_MAJOR_VERSION;

+ (jint)API_MINOR_VERSION;

#pragma mark Public

/*!
 @brief Create API
 @param endpoints  endpoints for server
 @param keyStorage storage for authentication keys
 @param callback   api callback for receiving async events
 */
- (instancetype)initWithACEndpoints:(ACEndpoints *)endpoints
               withACAuthKeyStorage:(id<ACAuthKeyStorage>)keyStorage
           withACDiyalogApiCallback:(id<ACDiyalogApiCallback>)callback
                        withBoolean:(jboolean)isEnableLog
                            withInt:(jint)minDelay
                            withInt:(jint)maxDelay
                            withInt:(jint)maxFailureCount
              withACApiParserConfig:(ACApiParserConfig *)parserConfig;

/*!
 @brief Cancelling API Request
 @param rid request rid
 */
- (void)cancelRequestWithLong:(jlong)rid;

/*!
 @brief Forcing network connection check
 */
- (void)forceNetworkCheck;

- (id<ACAuthKeyStorage>)getKeyStorage;

/*!
 @brief Notification about network state change
 @param state current network state if available
 */
- (void)onNetworkChangedWithACNetworkState:(ACNetworkState *)state;

/*!
 @brief Performing API request
 @param request  request body
 @param callback request callback
 @return rid of request
 */
- (jlong)requestWithACRequest:(ACRequest *)request
            withACRpcCallback:(id<ACRpcCallback>)callback;

- (void)SwitchApiForAnotherUser;

@end

J2OBJC_STATIC_INIT(ACDiyalogApi)

inline jint ACDiyalogApi_get_MTPROTO_VERSION();
#define ACDiyalogApi_MTPROTO_VERSION 3
J2OBJC_STATIC_FIELD_CONSTANT(ACDiyalogApi, MTPROTO_VERSION, jint)

inline jint ACDiyalogApi_get_API_MAJOR_VERSION();
#define ACDiyalogApi_API_MAJOR_VERSION 1
J2OBJC_STATIC_FIELD_CONSTANT(ACDiyalogApi, API_MAJOR_VERSION, jint)

inline jint ACDiyalogApi_get_API_MINOR_VERSION();
#define ACDiyalogApi_API_MINOR_VERSION 7
J2OBJC_STATIC_FIELD_CONSTANT(ACDiyalogApi, API_MINOR_VERSION, jint)

FOUNDATION_EXPORT void ACDiyalogApi_initWithACEndpoints_withACAuthKeyStorage_withACDiyalogApiCallback_withBoolean_withInt_withInt_withInt_withACApiParserConfig_(ACDiyalogApi *self, ACEndpoints *endpoints, id<ACAuthKeyStorage> keyStorage, id<ACDiyalogApiCallback> callback, jboolean isEnableLog, jint minDelay, jint maxDelay, jint maxFailureCount, ACApiParserConfig *parserConfig);

FOUNDATION_EXPORT ACDiyalogApi *new_ACDiyalogApi_initWithACEndpoints_withACAuthKeyStorage_withACDiyalogApiCallback_withBoolean_withInt_withInt_withInt_withACApiParserConfig_(ACEndpoints *endpoints, id<ACAuthKeyStorage> keyStorage, id<ACDiyalogApiCallback> callback, jboolean isEnableLog, jint minDelay, jint maxDelay, jint maxFailureCount, ACApiParserConfig *parserConfig) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACDiyalogApi *create_ACDiyalogApi_initWithACEndpoints_withACAuthKeyStorage_withACDiyalogApiCallback_withBoolean_withInt_withInt_withInt_withACApiParserConfig_(ACEndpoints *endpoints, id<ACAuthKeyStorage> keyStorage, id<ACDiyalogApiCallback> callback, jboolean isEnableLog, jint minDelay, jint maxDelay, jint maxFailureCount, ACApiParserConfig *parserConfig);

J2OBJC_TYPE_LITERAL_HEADER(ACDiyalogApi)

@compatibility_alias ImDiyalogCoreNetworkDiyalogApi ACDiyalogApi;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreNetworkDiyalogApi")
