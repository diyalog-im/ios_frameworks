//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/runtime/runtime-generic/src/main/java/im/diyalog/runtime/generic/regexp/GenericMatch.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericRegexpGenericMatch")
#ifdef RESTRICT_ImDiyalogRuntimeGenericRegexpGenericMatch
#define INCLUDE_ALL_ImDiyalogRuntimeGenericRegexpGenericMatch 0
#else
#define INCLUDE_ALL_ImDiyalogRuntimeGenericRegexpGenericMatch 1
#endif
#undef RESTRICT_ImDiyalogRuntimeGenericRegexpGenericMatch

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ImDiyalogRuntimeGenericRegexpGenericMatch_) && (INCLUDE_ALL_ImDiyalogRuntimeGenericRegexpGenericMatch || defined(INCLUDE_ImDiyalogRuntimeGenericRegexpGenericMatch))
#define ImDiyalogRuntimeGenericRegexpGenericMatch_

#define RESTRICT_ImDiyalogRuntimeRegexpMatcherCompat 1
#define INCLUDE_ImDiyalogRuntimeRegexpMatcherCompat 1
#include "../../../../../im/diyalog/runtime/regexp/MatcherCompat.h"

@class JavaUtilRegexMatcher;

@interface ImDiyalogRuntimeGenericRegexpGenericMatch : NSObject < ImDiyalogRuntimeRegexpMatcherCompat >

#pragma mark Public

- (instancetype)initWithJavaUtilRegexMatcher:(JavaUtilRegexMatcher *)matcher
                                withNSString:(NSString *)input;

- (NSString *)group;

- (NSString *)groupWithInt:(jint)index;

- (jint)groupCount;

- (jboolean)hasMatch;

- (jboolean)matches;

- (jint)start;

@end

J2OBJC_EMPTY_STATIC_INIT(ImDiyalogRuntimeGenericRegexpGenericMatch)

FOUNDATION_EXPORT void ImDiyalogRuntimeGenericRegexpGenericMatch_initWithJavaUtilRegexMatcher_withNSString_(ImDiyalogRuntimeGenericRegexpGenericMatch *self, JavaUtilRegexMatcher *matcher, NSString *input);

FOUNDATION_EXPORT ImDiyalogRuntimeGenericRegexpGenericMatch *new_ImDiyalogRuntimeGenericRegexpGenericMatch_initWithJavaUtilRegexMatcher_withNSString_(JavaUtilRegexMatcher *matcher, NSString *input) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ImDiyalogRuntimeGenericRegexpGenericMatch *create_ImDiyalogRuntimeGenericRegexpGenericMatch_initWithJavaUtilRegexMatcher_withNSString_(JavaUtilRegexMatcher *matcher, NSString *input);

J2OBJC_TYPE_LITERAL_HEADER(ImDiyalogRuntimeGenericRegexpGenericMatch)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogRuntimeGenericRegexpGenericMatch")
