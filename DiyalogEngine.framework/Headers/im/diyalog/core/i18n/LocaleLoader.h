//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/i18n/LocaleLoader.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreI18nLocaleLoader")
#ifdef RESTRICT_ImDiyalogCoreI18nLocaleLoader
#define INCLUDE_ALL_ImDiyalogCoreI18nLocaleLoader 0
#else
#define INCLUDE_ALL_ImDiyalogCoreI18nLocaleLoader 1
#endif
#undef RESTRICT_ImDiyalogCoreI18nLocaleLoader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACLocaleLoader_) && (INCLUDE_ALL_ImDiyalogCoreI18nLocaleLoader || defined(INCLUDE_ACLocaleLoader))
#define ACLocaleLoader_

@class IOSObjectArray;
@class JavaUtilHashMap;

@interface ACLocaleLoader : NSObject

#pragma mark Public

- (instancetype)init;

+ (JavaUtilHashMap *)loadPropertiesFileWithNSString:(NSString *)name;

#pragma mark Package-Private

+ (IOSObjectArray *)linesWorkaroundWithNSString:(NSString *)s;

+ (IOSObjectArray *)valuesWorkaroundWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(ACLocaleLoader)

FOUNDATION_EXPORT JavaUtilHashMap *ACLocaleLoader_loadPropertiesFileWithNSString_(NSString *name);

FOUNDATION_EXPORT IOSObjectArray *ACLocaleLoader_linesWorkaroundWithNSString_(NSString *s);

FOUNDATION_EXPORT IOSObjectArray *ACLocaleLoader_valuesWorkaroundWithNSString_(NSString *s);

FOUNDATION_EXPORT void ACLocaleLoader_init(ACLocaleLoader *self);

FOUNDATION_EXPORT ACLocaleLoader *new_ACLocaleLoader_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACLocaleLoader *create_ACLocaleLoader_init();

J2OBJC_TYPE_LITERAL_HEADER(ACLocaleLoader)

@compatibility_alias ImDiyalogCoreI18nLocaleLoader ACLocaleLoader;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreI18nLocaleLoader")
