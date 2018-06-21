//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/ConfigurationBuilder.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreConfigurationBuilder")
#ifdef RESTRICT_ImDiyalogCoreConfigurationBuilder
#define INCLUDE_ALL_ImDiyalogCoreConfigurationBuilder 0
#else
#define INCLUDE_ALL_ImDiyalogCoreConfigurationBuilder 1
#endif
#undef RESTRICT_ImDiyalogCoreConfigurationBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACConfigurationBuilder_) && (INCLUDE_ALL_ImDiyalogCoreConfigurationBuilder || defined(INCLUDE_ACConfigurationBuilder))
#define ACConfigurationBuilder_

@class ACApiConfiguration;
@class ACConfiguration;
@class ACDeviceCategory;
@class ACPlatformType;
@protocol ACCallsProvider;
@protocol ACNotificationProvider;
@protocol ACPhoneBookProvider;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

/*!
 @brief Configuration builder for starting up messenger object
 */
@interface ACConfigurationBuilder : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Adding Endpoint for API
 Valid URLs are:
 tcp://[host]:[port]
 tls://[host]:[port]
 ws://[host]:[port]
 wss://[host]:[port]
 @param url endpoint url
 @return this
 */
- (ACConfigurationBuilder * __nonnull)addEndpoint:(NSString * __nonnull)url;

/*!
 @brief Adding preferred language
 @param language language code
 @return this
 */
- (ACConfigurationBuilder * __nonnull)addPreferredLanguage:(NSString *)language;

/*!
 @brief Adding Trusted key for protocol encryption securing
 @param trustedKey hex representation of trusted key
 @return this
 */
- (ACConfigurationBuilder * __nonnull)addTrustedKey:(NSString *)trustedKey;

/*!
 @brief Build configuration
 @return result configuration
 */
- (ACConfiguration * __nonnull)build;

/*!
 @brief Set API Configuration
 @param apiConfiguration API Configuration
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setApiConfiguration:(ACApiConfiguration * __nonnull)apiConfiguration;

/*!
 @brief Setting Web RTC support provider
 @param callsProvider WebRTC provider
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setCallsProvider:(id<ACCallsProvider>)callsProvider;

/*!
 @brief Setting custom application name
 @param customAppName Name of your App
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setCustomAppName:(NSString *)customAppName;

/*!
 @brief Setting Device Type
 @param deviceCategory Device Type
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setDeviceCategory:(ACDeviceCategory * __nonnull)deviceCategory;

/*!
 @brief Set Enable contacts logging
 @param enableContactsLogging Enable contacts logging flag
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setEnableContactsLogging:(jboolean)enableContactsLogging;

/*!
 @brief Set Enable file operations loggging
 @param enableFilesLogging Enable files logging
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setEnableFilesLogging:(jboolean)enableFilesLogging;

/*!
 @brief Set Enable Network logging
 @param enableNetworkLogging Enable network logging
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setEnableNetworkLogging:(jboolean)enableNetworkLogging;

/*!
 @brief Setting if grouped chat list support enabled
 @param isEnabledGroupedChatList if grouped chat list enabled
 @return this
 */
- (ACConfigurationBuilder *)setIsEnabledGroupedChatList:(jboolean)isEnabledGroupedChatList;

/*!
 @brief Set max backoff delay
 @param maxDelay max connection exponential backoff delay
 @return this
 */
- (ACConfigurationBuilder *)setMaxDelay:(jint)maxDelay;

/*!
 @brief Set max connection exponential backoff failure count
 @param maxFailureCount max connection exponential backoff failure count
 @return this
 */
- (ACConfigurationBuilder *)setMaxFailureCount:(jint)maxFailureCount;

/*!
 @brief Set min backoff delay
 @param minDelay min connection exponential backoff delay
 @return this
 */
- (ACConfigurationBuilder *)setMinDelay:(jint)minDelay;

/*!
 @brief Set Notification provider
 @param notificationProvider Notification provider
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setNotificationProvider:(id<ACNotificationProvider> __nonnull)notificationProvider;

/*!
 @brief Setting if application need to upload phone book to server
 @param isPhoneBookImportEnabled enabled flag
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setPhoneBookImportEnabled:(jboolean)isPhoneBookImportEnabled;

/*!
 @brief Set Phone Book provider
 @param phoneBookProvider phone book provider
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setPhoneBookProvider:(id<ACPhoneBookProvider> __nonnull)phoneBookProvider;

/*!
 @brief Set App Type
 @param platformType App Type
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setPlatformType:(ACPlatformType * __nonnull)platformType;

/*!
 @brief Setting Device TimeZone
 @param timeZone device time zone
 @return this
 */
- (ACConfigurationBuilder * __nonnull)setTimeZone:(NSString *)timeZone;

/*!
 @brief Setting If Voice Calls enabled in App.
 By default is True.
 @param voiceCallsEnabled if voice calls enabled
 @return this
 */
- (ACConfigurationBuilder *)setVoiceCallsEnabled:(jboolean)voiceCallsEnabled;

@end

J2OBJC_EMPTY_STATIC_INIT(ACConfigurationBuilder)

FOUNDATION_EXPORT void ACConfigurationBuilder_init(ACConfigurationBuilder *self);

FOUNDATION_EXPORT ACConfigurationBuilder *new_ACConfigurationBuilder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACConfigurationBuilder *create_ACConfigurationBuilder_init();

J2OBJC_TYPE_LITERAL_HEADER(ACConfigurationBuilder)

@compatibility_alias ImDiyalogCoreConfigurationBuilder ACConfigurationBuilder;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreConfigurationBuilder")