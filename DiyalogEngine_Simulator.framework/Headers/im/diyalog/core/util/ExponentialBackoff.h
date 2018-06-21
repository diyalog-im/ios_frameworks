//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/util/ExponentialBackoff.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreUtilExponentialBackoff")
#ifdef RESTRICT_ImDiyalogCoreUtilExponentialBackoff
#define INCLUDE_ALL_ImDiyalogCoreUtilExponentialBackoff 0
#else
#define INCLUDE_ALL_ImDiyalogCoreUtilExponentialBackoff 1
#endif
#undef RESTRICT_ImDiyalogCoreUtilExponentialBackoff

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACExponentialBackoff_) && (INCLUDE_ALL_ImDiyalogCoreUtilExponentialBackoff || defined(INCLUDE_ACExponentialBackoff))
#define ACExponentialBackoff_

/*!
 @brief Helper for calculation of exponential backoff delays
 */
@interface ACExponentialBackoff : NSObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)minDelay
                    withInt:(jint)maxDelay
                    withInt:(jint)maxFailureCount;

/*!
 @brief Calculating wait duration after failure attempt
 @return wait in ms
 */
- (jlong)exponentialWait;

/*!
 @brief Notification about failure
 */
- (void)onFailure;

/*!
 @brief Notification about success
 */
- (void)onSuccess;

/*!
 @brief Resetting backoff object
 */
- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(ACExponentialBackoff)

FOUNDATION_EXPORT void ACExponentialBackoff_init(ACExponentialBackoff *self);

FOUNDATION_EXPORT ACExponentialBackoff *new_ACExponentialBackoff_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACExponentialBackoff *create_ACExponentialBackoff_init();

FOUNDATION_EXPORT void ACExponentialBackoff_initWithInt_withInt_withInt_(ACExponentialBackoff *self, jint minDelay, jint maxDelay, jint maxFailureCount);

FOUNDATION_EXPORT ACExponentialBackoff *new_ACExponentialBackoff_initWithInt_withInt_withInt_(jint minDelay, jint maxDelay, jint maxFailureCount) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACExponentialBackoff *create_ACExponentialBackoff_initWithInt_withInt_withInt_(jint minDelay, jint maxDelay, jint maxFailureCount);

J2OBJC_TYPE_LITERAL_HEADER(ACExponentialBackoff)

@compatibility_alias ImDiyalogCoreUtilExponentialBackoff ACExponentialBackoff;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreUtilExponentialBackoff")