//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Volumes/DATA/Diyalog/sdk-core/core/core-shared/src/main/java/im/diyalog/core/api/ApiSearchPeerTypeCondition.java
//

@import j2objc;

#pragma push_macro("INCLUDE_ALL_ImDiyalogCoreApiApiSearchPeerTypeCondition")
#ifdef RESTRICT_ImDiyalogCoreApiApiSearchPeerTypeCondition
#define INCLUDE_ALL_ImDiyalogCoreApiApiSearchPeerTypeCondition 0
#else
#define INCLUDE_ALL_ImDiyalogCoreApiApiSearchPeerTypeCondition 1
#endif
#undef RESTRICT_ImDiyalogCoreApiApiSearchPeerTypeCondition

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ARApiSearchPeerTypeCondition_) && (INCLUDE_ALL_ImDiyalogCoreApiApiSearchPeerTypeCondition || defined(INCLUDE_ARApiSearchPeerTypeCondition))
#define ARApiSearchPeerTypeCondition_

#define RESTRICT_ImDiyalogCoreApiApiSearchCondition 1
#define INCLUDE_ARApiSearchCondition 1
#include "../../../../im/diyalog/core/api/ApiSearchCondition.h"

@class ARApiSearchPeerType;
@class ARBserValues;
@class ARBserWriter;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@interface ARApiSearchPeerTypeCondition : ARApiSearchCondition

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithARApiSearchPeerType:(ARApiSearchPeerType * __nonnull)peerType;

- (jint)getHeader;

- (ARApiSearchPeerType * __nonnull)getPeerType;

- (void)parseWithARBserValues:(ARBserValues *)values;

- (void)serializeWithARBserWriter:(ARBserWriter *)writer;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ARApiSearchPeerTypeCondition)

FOUNDATION_EXPORT void ARApiSearchPeerTypeCondition_initWithARApiSearchPeerType_(ARApiSearchPeerTypeCondition *self, ARApiSearchPeerType *peerType);

FOUNDATION_EXPORT ARApiSearchPeerTypeCondition *new_ARApiSearchPeerTypeCondition_initWithARApiSearchPeerType_(ARApiSearchPeerType *peerType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiSearchPeerTypeCondition *create_ARApiSearchPeerTypeCondition_initWithARApiSearchPeerType_(ARApiSearchPeerType *peerType);

FOUNDATION_EXPORT void ARApiSearchPeerTypeCondition_init(ARApiSearchPeerTypeCondition *self);

FOUNDATION_EXPORT ARApiSearchPeerTypeCondition *new_ARApiSearchPeerTypeCondition_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ARApiSearchPeerTypeCondition *create_ARApiSearchPeerTypeCondition_init();

J2OBJC_TYPE_LITERAL_HEADER(ARApiSearchPeerTypeCondition)

@compatibility_alias ImDiyalogCoreApiApiSearchPeerTypeCondition ARApiSearchPeerTypeCondition;

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ImDiyalogCoreApiApiSearchPeerTypeCondition")
