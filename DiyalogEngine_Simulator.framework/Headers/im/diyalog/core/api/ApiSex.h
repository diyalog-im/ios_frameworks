//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiSex.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiSex")
#ifdef RESTRICT_ImDiyalogCoreApiApiSex
#define INCLUDE_ALL_ImDiyalogCoreApiApiSex 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiSex 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiSex

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiSex_) && (INCLUDE_ALL_ImDiyalogCoreApiApiSex || defined(INCLUDE_ARApiSex))
#define ARApiSex_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ARApiSex_Enum) {
  ARApiSex_Enum_UNKNOWN = 0,
  ARApiSex_Enum_MALE = 1,
  ARApiSex_Enum_FEMALE = 2,
  ARApiSex_Enum_UNSUPPORTED_VALUE = 3,
};

@interface ARApiSex : JavaLangEnum < NSCopying >

+ (ARApiSex *)UNKNOWN;

+ (ARApiSex *)MALE;

+ (ARApiSex *)FEMALE;

+ (ARApiSex *)UNSUPPORTED_VALUE;

#pragma mark Public

- (jint)getValue;

+ (ARApiSex *)parseWithInt:(jint)value;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ARApiSex *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ARApiSex_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ARApiSex)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ARApiSex *ARApiSex_values_[];

inline ARApiSex *ARApiSex_get_UNKNOWN();
J2OBJC_ENUM_CONSTANT(ARApiSex, UNKNOWN)

inline ARApiSex *ARApiSex_get_MALE();
J2OBJC_ENUM_CONSTANT(ARApiSex, MALE)

inline ARApiSex *ARApiSex_get_FEMALE();
J2OBJC_ENUM_CONSTANT(ARApiSex, FEMALE)

inline ARApiSex *ARApiSex_get_UNSUPPORTED_VALUE();
J2OBJC_ENUM_CONSTANT(ARApiSex, UNSUPPORTED_VALUE)

FOUNDATION_EXPORT ARApiSex *ARApiSex_parseWithInt_(jint value);

FOUNDATION_EXPORT IOSObjectArray *ARApiSex_values();

FOUNDATION_EXPORT ARApiSex *ARApiSex_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ARApiSex *ARApiSex_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ARApiSex)

@compatibility_alias ImDiyalogCoreApiApiSex ARApiSex;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiSex")
