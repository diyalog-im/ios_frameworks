//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiListLoadMode.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiListLoadMode")
#ifdef RESTRICT_ImDiyalogCoreApiApiListLoadMode
#define INCLUDE_ALL_ImDiyalogCoreApiApiListLoadMode 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiListLoadMode 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiListLoadMode

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiListLoadMode_) && (INCLUDE_ALL_ImDiyalogCoreApiApiListLoadMode || defined(INCLUDE_ARApiListLoadMode))
#define ARApiListLoadMode_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
@import j2objc;

typedef NS_ENUM(NSUInteger, ARApiListLoadMode_Enum) {
  ARApiListLoadMode_Enum_FORWARD = 0,
  ARApiListLoadMode_Enum_BACKWARD = 1,
  ARApiListLoadMode_Enum_BOTH = 2,
  ARApiListLoadMode_Enum_UNSUPPORTED_VALUE = 3,
};

@interface ARApiListLoadMode : JavaLangEnum < NSCopying >

+ (ARApiListLoadMode *)FORWARD;

+ (ARApiListLoadMode *)BACKWARD;

+ (ARApiListLoadMode *)BOTH;

+ (ARApiListLoadMode *)UNSUPPORTED_VALUE;

#pragma mark Public

- (jint)getValue;

+ (ARApiListLoadMode *)parseWithInt:(jint)value;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (ARApiListLoadMode *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (ARApiListLoadMode_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ARApiListLoadMode)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ARApiListLoadMode *ARApiListLoadMode_values_[];

inline ARApiListLoadMode *ARApiListLoadMode_get_FORWARD();
J2OBJC_ENUM_CONSTANT(ARApiListLoadMode, FORWARD)

inline ARApiListLoadMode *ARApiListLoadMode_get_BACKWARD();
J2OBJC_ENUM_CONSTANT(ARApiListLoadMode, BACKWARD)

inline ARApiListLoadMode *ARApiListLoadMode_get_BOTH();
J2OBJC_ENUM_CONSTANT(ARApiListLoadMode, BOTH)

inline ARApiListLoadMode *ARApiListLoadMode_get_UNSUPPORTED_VALUE();
J2OBJC_ENUM_CONSTANT(ARApiListLoadMode, UNSUPPORTED_VALUE)

FOUNDATION_EXPORT ARApiListLoadMode *ARApiListLoadMode_parseWithInt_(jint value);

FOUNDATION_EXPORT IOSObjectArray *ARApiListLoadMode_values();

FOUNDATION_EXPORT ARApiListLoadMode *ARApiListLoadMode_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ARApiListLoadMode *ARApiListLoadMode_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ARApiListLoadMode)

@compatibility_alias ImDiyalogCoreApiApiListLoadMode ARApiListLoadMode;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiListLoadMode")