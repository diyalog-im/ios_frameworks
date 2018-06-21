//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/content/ContactContent.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentContactContent")
#ifdef RESTRICT_ImDiyalogCoreEntityContentContactContent
#define INCLUDE_ALL_ImDiyalogCoreEntityContentContactContent 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityContentContactContent 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityContentContactContent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACContactContent_) && (INCLUDE_ALL_ImDiyalogCoreEntityContentContactContent || defined(INCLUDE_ACContactContent))
#define ACContactContent_

#define RESTRICT_ImDiyalogCoreEntityContentAbsContent 1
#define INCLUDE_ACAbsContent 1
#include "../../../../../im/diyalog/core/entity/content/AbsContent.h"

@class ACContentRemoteContainer;
@class JavaUtilArrayList;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ACContactContent : ACAbsContent

#pragma mark Public

- (instancetype)initWithACContentRemoteContainer:(ACContentRemoteContainer *)contentContainer;

+ (ACContactContent * __nonnull)createWithNSString:(NSString * __nonnull)name
                             withJavaUtilArrayList:(JavaUtilArrayList * __nonnull)phones
                             withJavaUtilArrayList:(JavaUtilArrayList * __nonnull)emails
                                      withNSString:(NSString * __nullable)base64photo;

- (JavaUtilArrayList *)getEmails;

- (NSString *)getName;

- (JavaUtilArrayList *)getPhones;

- (NSString *)getPhoto64;

- (NSString *)getRawJson;

@end

J2OBJC_EMPTY_STATIC_INIT(ACContactContent)

FOUNDATION_EXPORT ACContactContent *ACContactContent_createWithNSString_withJavaUtilArrayList_withJavaUtilArrayList_withNSString_(NSString *name, JavaUtilArrayList *phones, JavaUtilArrayList *emails, NSString *base64photo);

FOUNDATION_EXPORT void ACContactContent_initWithACContentRemoteContainer_(ACContactContent *self, ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT ACContactContent *new_ACContactContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACContactContent *create_ACContactContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer);

J2OBJC_TYPE_LITERAL_HEADER(ACContactContent)

@compatibility_alias ImDiyalogCoreEntityContentContactContent ACContactContent;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentContactContent")
