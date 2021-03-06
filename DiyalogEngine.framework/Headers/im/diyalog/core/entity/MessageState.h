//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/MessageState.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityMessageState")
#ifdef RESTRICT_ImDiyalogCoreEntityMessageState
#define INCLUDE_ALL_ImDiyalogCoreEntityMessageState 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityMessageState 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityMessageState

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACMessageState_) && (INCLUDE_ALL_ImDiyalogCoreEntityMessageState || defined(INCLUDE_ACMessageState))
#define ACMessageState_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ACMessageState_Enum) {
  ACMessageState_Enum_PENDING = 0,
  ACMessageState_Enum_SENT = 1,
  ACMessageState_Enum_RECEIVED = 2,
  ACMessageState_Enum_READ = 3,
  ACMessageState_Enum_ERROR = 4,
  ACMessageState_Enum_UNKNOWN = 5,
};

@interface ACMessageState : JavaLangEnum < NSCopying > {
 @public
  jint value_;
}

+ (ACMessageState *)PENDING;

+ (ACMessageState *)SENT;

+ (ACMessageState *)RECEIVED;

+ (ACMessageState *)READ;

+ (ACMessageState *)ERROR;

+ (ACMessageState *)UNKNOWN;

#pragma mark Public

+ (ACMessageState *)fromValueWithInt:(jint)value;

- (jint)getValue;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ACMessageState *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ACMessageState_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ACMessageState)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ACMessageState *ACMessageState_values_[];

inline ACMessageState *ACMessageState_get_PENDING();
J2OBJC_ENUM_CONSTANT(ACMessageState, PENDING)

inline ACMessageState *ACMessageState_get_SENT();
J2OBJC_ENUM_CONSTANT(ACMessageState, SENT)

inline ACMessageState *ACMessageState_get_RECEIVED();
J2OBJC_ENUM_CONSTANT(ACMessageState, RECEIVED)

inline ACMessageState *ACMessageState_get_READ();
J2OBJC_ENUM_CONSTANT(ACMessageState, READ)

inline ACMessageState *ACMessageState_get_ERROR();
J2OBJC_ENUM_CONSTANT(ACMessageState, ERROR)

inline ACMessageState *ACMessageState_get_UNKNOWN();
J2OBJC_ENUM_CONSTANT(ACMessageState, UNKNOWN)

FOUNDATION_EXPORT ACMessageState *ACMessageState_fromValueWithInt_(jint value);

FOUNDATION_EXPORT IOSObjectArray *ACMessageState_values();

FOUNDATION_EXPORT ACMessageState *ACMessageState_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ACMessageState *ACMessageState_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ACMessageState)

@compatibility_alias ImDiyalogCoreEntityMessageState ACMessageState;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityMessageState")
