//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/i18n/Errors.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreI18nErrors")
#ifdef RESTRICT_ImDiyalogCoreI18nErrors
#define INCLUDE_ALL_ImDiyalogCoreI18nErrors 0
#else
#define INCLUDE_ALL_ImDiyalogCoreI18nErrors 1
#endif
#undef RESTRICT_ImDiyalogCoreI18nErrors

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACErrors_) && (INCLUDE_ALL_ImDiyalogCoreI18nErrors || defined(INCLUDE_ACErrors))
#define ACErrors_

@interface ACErrors : NSObject

+ (NSString *)LOCAL_EMPTY_PHONE;

+ (NSString *)PHONE_NUMBER_INVALID;

+ (NSString *)LOCAL_INCORRECT_PHONE;

+ (NSString *)PHONE_CODE_EMPTY;

+ (NSString *)LOCAL_CODE_EMPTY;

+ (NSString *)PHONE_CODE_INVALID;

+ (NSString *)PHONE_CODE_EXPIRED;

#pragma mark Public

- (instancetype)init;

+ (NSString *)mapErrorWithNSString:(NSString *)tag;

+ (NSString *)mapErrorWithNSString:(NSString *)tag
                      withNSString:(NSString *)defVal;

@end

J2OBJC_STATIC_INIT(ACErrors)

inline NSString *ACErrors_get_LOCAL_EMPTY_PHONE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ACErrors_LOCAL_EMPTY_PHONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACErrors, LOCAL_EMPTY_PHONE, NSString *)

inline NSString *ACErrors_get_PHONE_NUMBER_INVALID();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ACErrors_PHONE_NUMBER_INVALID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACErrors, PHONE_NUMBER_INVALID, NSString *)

inline NSString *ACErrors_get_LOCAL_INCORRECT_PHONE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ACErrors_LOCAL_INCORRECT_PHONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACErrors, LOCAL_INCORRECT_PHONE, NSString *)

inline NSString *ACErrors_get_PHONE_CODE_EMPTY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ACErrors_PHONE_CODE_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACErrors, PHONE_CODE_EMPTY, NSString *)

inline NSString *ACErrors_get_LOCAL_CODE_EMPTY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ACErrors_LOCAL_CODE_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACErrors, LOCAL_CODE_EMPTY, NSString *)

inline NSString *ACErrors_get_PHONE_CODE_INVALID();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ACErrors_PHONE_CODE_INVALID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACErrors, PHONE_CODE_INVALID, NSString *)

inline NSString *ACErrors_get_PHONE_CODE_EXPIRED();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ACErrors_PHONE_CODE_EXPIRED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ACErrors, PHONE_CODE_EXPIRED, NSString *)

FOUNDATION_EXPORT NSString *ACErrors_mapErrorWithNSString_(NSString *tag);

FOUNDATION_EXPORT NSString *ACErrors_mapErrorWithNSString_withNSString_(NSString *tag, NSString *defVal);

FOUNDATION_EXPORT void ACErrors_init(ACErrors *self);

FOUNDATION_EXPORT ACErrors *new_ACErrors_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACErrors *create_ACErrors_init();

J2OBJC_TYPE_LITERAL_HEADER(ACErrors)

@compatibility_alias ImDiyalogCoreI18nErrors ACErrors;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreI18nErrors")
