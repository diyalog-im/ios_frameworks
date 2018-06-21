//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-shared/src/main/java/im/diyalog/runtime/markdown/MDSection.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeMarkdownMDSection")
#ifdef RESTRICT_ImDiyalogRuntimeMarkdownMDSection
#define INCLUDE_ALL_ImDiyalogRuntimeMarkdownMDSection 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeMarkdownMDSection 1
#endif
#undef RESTRICT_ImDiyalogRuntimeMarkdownMDSection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARMDSection_) && (INCLUDE_ALL_ImDiyalogRuntimeMarkdownMDSection || defined(INCLUDE_ARMDSection))
#define ARMDSection_

@class ARMDCode;
@class IOSObjectArray;

@interface ARMDSection : NSObject

+ (jint)TYPE_TEXT;

+ (jint)TYPE_CODE;

#pragma mark Public

- (instancetype)initWithARMDCode:(ARMDCode *)code;

- (instancetype)initWithARMDTextArray:(IOSObjectArray *)text;

- (ARMDCode *)getCode;

- (IOSObjectArray *)getText;

- (jint)getType;

- (NSString *)toMarkdown;

@end

J2OBJC_EMPTY_STATIC_INIT(ARMDSection)

inline jint ARMDSection_get_TYPE_TEXT();
#define ARMDSection_TYPE_TEXT 0
J2OBJC_STATIC_FIELD_CONSTANT(ARMDSection, TYPE_TEXT, jint)

inline jint ARMDSection_get_TYPE_CODE();
#define ARMDSection_TYPE_CODE 1
J2OBJC_STATIC_FIELD_CONSTANT(ARMDSection, TYPE_CODE, jint)

FOUNDATION_EXPORT void ARMDSection_initWithARMDCode_(ARMDSection *self, ARMDCode *code);

FOUNDATION_EXPORT ARMDSection *new_ARMDSection_initWithARMDCode_(ARMDCode *code) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARMDSection *create_ARMDSection_initWithARMDCode_(ARMDCode *code);

FOUNDATION_EXPORT void ARMDSection_initWithARMDTextArray_(ARMDSection *self, IOSObjectArray *text);

FOUNDATION_EXPORT ARMDSection *new_ARMDSection_initWithARMDTextArray_(IOSObjectArray *text) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARMDSection *create_ARMDSection_initWithARMDTextArray_(IOSObjectArray *text);

J2OBJC_TYPE_LITERAL_HEADER(ARMDSection)

@compatibility_alias ImDiyalogRuntimeMarkdownMDSection ARMDSection;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeMarkdownMDSection")
