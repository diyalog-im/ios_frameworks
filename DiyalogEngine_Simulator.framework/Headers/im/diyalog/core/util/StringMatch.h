//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/util/StringMatch.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreUtilStringMatch")
#ifdef RESTRICT_ImDiyalogCoreUtilStringMatch
#define INCLUDE_ALL_ImDiyalogCoreUtilStringMatch 0
#else
#define INCLUDE_ALL_ImDiyalogCoreUtilStringMatch 1
#endif
#undef RESTRICT_ImDiyalogCoreUtilStringMatch

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACStringMatch_) && (INCLUDE_ALL_ImDiyalogCoreUtilStringMatch || defined(INCLUDE_ACStringMatch))
#define ACStringMatch_

@interface ACStringMatch : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)start
                    withInt:(jint)length;

- (jint)getLength;

- (jint)getStart;

@end

J2OBJC_EMPTY_STATIC_INIT(ACStringMatch)

FOUNDATION_EXPORT void ACStringMatch_initWithInt_withInt_(ACStringMatch *self, jint start, jint length);

FOUNDATION_EXPORT ACStringMatch *new_ACStringMatch_initWithInt_withInt_(jint start, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACStringMatch *create_ACStringMatch_initWithInt_withInt_(jint start, jint length);

J2OBJC_TYPE_LITERAL_HEADER(ACStringMatch)

@compatibility_alias ImDiyalogCoreUtilStringMatch ACStringMatch;

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreUtilStringMatch")
