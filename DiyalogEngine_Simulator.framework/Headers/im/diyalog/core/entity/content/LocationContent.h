//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/entity/content/LocationContent.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentLocationContent")
#ifdef RESTRICT_ImDiyalogCoreEntityContentLocationContent
#define INCLUDE_ALL_ImDiyalogCoreEntityContentLocationContent 0
#else
#define INCLUDE_ALL_ImDiyalogCoreEntityContentLocationContent 1
#endif
#undef RESTRICT_ImDiyalogCoreEntityContentLocationContent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ACLocationContent_) && (INCLUDE_ALL_ImDiyalogCoreEntityContentLocationContent || defined(INCLUDE_ACLocationContent))
#define ACLocationContent_

#define RESTRICT_ImDiyalogCoreEntityContentAbsContent 1
#define INCLUDE_ACAbsContent 1
#include "../../../../../im/diyalog/core/entity/content/AbsContent.h"

@class ACContentRemoteContainer;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ACLocationContent : ACAbsContent

#pragma mark Public

- (instancetype)initWithACContentRemoteContainer:(ACContentRemoteContainer *)contentContainer;

+ (ACLocationContent * __nonnull)createWithDouble:(jdouble)longitude
                                       withDouble:(jdouble)latitude
                                     withNSString:(NSString * __nullable)street
                                     withNSString:(NSString * __nullable)place;

- (jdouble)getLatitude;

- (jdouble)getLongitude;

- (NSString * __nullable)getPlace;

- (NSString *)getRawJson;

- (NSString * __nullable)getStreet;

@end

J2OBJC_EMPTY_STATIC_INIT(ACLocationContent)

FOUNDATION_EXPORT ACLocationContent *ACLocationContent_createWithDouble_withDouble_withNSString_withNSString_(jdouble longitude, jdouble latitude, NSString *street, NSString *place);

FOUNDATION_EXPORT void ACLocationContent_initWithACContentRemoteContainer_(ACLocationContent *self, ACContentRemoteContainer *contentContainer);

FOUNDATION_EXPORT ACLocationContent *new_ACLocationContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ACLocationContent *create_ACLocationContent_initWithACContentRemoteContainer_(ACContentRemoteContainer *contentContainer);

J2OBJC_TYPE_LITERAL_HEADER(ACLocationContent)

@compatibility_alias ImDiyalogCoreEntityContentLocationContent ACLocationContent;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreEntityContentLocationContent")
